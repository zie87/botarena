////////////////////////////////////////////////////////////////////////////////
//
// Class CImageButtonWithStyle
//
// The class CImageButtonWithStyle is a CButton dereived class that
// handles the NM_CUSTOMDRAW notification to provide XP visual styles themed
// appearance for buttons with BS_BITMAP or BS_ICON style set.
// This makes them match the appearance of normal buttons with text labels.
// The default Windows controls do not provide the themed appearance for
// these buttons.
//
// To use these buttons, simply subclass the corresponding control with an
// instance of a CImageButtonWithStyle. For buttons on a Dialog, you can
// simple declare CImageButtonWithStyle members for each button in the
// CDialog derived class, and then call DDX_Control() for each instance
// to subclass the corresponding control.
//
// This class uses the CVisualStylesXP class by David Yuheng Zhao
// to access the functions in the "uxtheme.dll" yet still load when
// the DLL isn't available.
//

#include "stdafx.h"
#include "ImageButtonWithStyle.h"

// local functions
static int image_left (int cx, const CRect& Rect, DWORD style);
static int image_top (int cy, const CRect& Rect, DWORD style);

Gdiplus::Bitmap* LoadBitmap(LPCTSTR strPath, Gdiplus::Size* pSize)
{
	USES_CONVERSION;

	Gdiplus::Bitmap* pBitmap = Gdiplus::Bitmap::FromFile(T2CW(strPath));
	if (!pBitmap)
		return NULL;

	if (!pBitmap->GetWidth() || !pBitmap->GetHeight())
	{
		delete pBitmap;
		return NULL;
	}

	if (pSize)
	{
		pSize->Width = pBitmap->GetWidth();
		pSize->Height = pBitmap->GetHeight();
	}

	return pBitmap;
}

// CImageButtonWithStyle

IMPLEMENT_DYNAMIC(CImageButtonWithStyle, CButton)
CImageButtonWithStyle::CImageButtonWithStyle()
	: m_pImage(NULL)
{
	Gdiplus::ColorMatrix colorMatrix =         { 
				1.0f, 0.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 1.0f, 0.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 1.0f, 0.0f, 0.0f,
				0.0f, 0.0f, 0.0f, (0.2f), 0.0f, // <- alpha
				0.0f, 0.0f, 0.0f, 0.0f, 1.0f
	};

	m_ColorMatrix = colorMatrix;

	m_ImageAttribute.SetColorMatrix(&m_ColorMatrix, Gdiplus::ColorMatrixFlagsDefault, 
                        Gdiplus::ColorAdjustTypeBitmap);
}

CImageButtonWithStyle::~CImageButtonWithStyle()
{
	if (m_pImage)
		delete m_pImage;
}

void CImageButtonWithStyle::SetImage(LPCTSTR strImagePath)
{
	if (m_pImage)
		delete m_pImage;

	m_pImage = LoadBitmap(strImagePath, &m_ImageSize);

	Invalidate();
}

BEGIN_MESSAGE_MAP(CImageButtonWithStyle, CButton)
	ON_NOTIFY_REFLECT (NM_CUSTOMDRAW, OnNotifyCustomDraw)
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()


// OnNotifyCustomDraw - Handle NM_CUSTOMDRAW notifications.
// If an XP visual styles theme is active, use the uxtheme.dll functions
// ti draw buttons with BS_BITMAP or BS_ICON style so that they match the
// appearance of normal text buttons.

void
CImageButtonWithStyle::OnNotifyCustomDraw ( NMHDR * pNotifyStruct, LRESULT* result )
{
	LPNMCUSTOMDRAW pCustomDraw = (LPNMCUSTOMDRAW) pNotifyStruct;
	ASSERT (pCustomDraw->hdr.hwndFrom == m_hWnd);
	ASSERT (pCustomDraw->hdr.code = NM_CUSTOMDRAW);

	DWORD style = GetStyle ();
	if (((style & (BS_BITMAP | BS_ICON)) == 0 && !m_pImage) || !IsAppThemed ())
	{
		// not icon or bitmap button, or themes not active - draw normally
		*result = CDRF_DODEFAULT;
		return;
	}
	ATLASSERT(((style & (BS_BITMAP | BS_ICON)) != 0 || m_pImage) && IsAppThemed () && IsThemeActive ());

	if (pCustomDraw->dwDrawStage == CDDS_PREERASE)
	{
		// erase background (according to parent window's themed background
		DrawThemeParentBackground (m_hWnd, pCustomDraw->hdc, &pCustomDraw->rc);
	}

	if (pCustomDraw->dwDrawStage == CDDS_PREERASE || pCustomDraw->dwDrawStage == CDDS_PREPAINT)
	{
		// get theme handle
		HTHEME hTheme = OpenThemeData (m_hWnd, L"BUTTON");
		ASSERT (hTheme != NULL);
		if (hTheme == NULL)
		{
			// fail gracefully
			*result = CDRF_DODEFAULT;
			return;
		}

		// determine state for DrawThemeBackground()
		// note: order of these tests is significant
		int state_id = PBS_NORMAL;
		if (style & WS_DISABLED)
			state_id = PBS_DISABLED;
		else if (pCustomDraw->uItemState & CDIS_SELECTED)
			state_id = PBS_PRESSED;
		else if (pCustomDraw->uItemState & CDIS_HOT)
			state_id = PBS_HOT;
		else if (style & BS_DEFPUSHBUTTON)
			state_id = PBS_DEFAULTED;

		// draw themed button background appropriate to button state
		DrawThemeBackground (hTheme,
			pCustomDraw->hdc, BP_PUSHBUTTON,
			state_id,
			&pCustomDraw->rc, NULL);

		// get content rectangle (space inside button for image)
		CRect content_rect (pCustomDraw->rc); 
		GetThemeBackgroundContentRect (hTheme,
			pCustomDraw->hdc, BP_PUSHBUTTON,
			state_id,
			&pCustomDraw->rc,
			&content_rect);
		// we're done with the theme
		CloseThemeData(hTheme);

		// draw the image
		if (m_pImage)
		{
			draw_image (pCustomDraw->hdc, &content_rect, style, state_id);
		}
		else
		if (style & BS_BITMAP)
		{
			draw_bitmap (pCustomDraw->hdc, &content_rect, style, state_id);
		}
		else
		{
			ASSERT (style & BS_ICON);		// since we bailed out at top otherwise
			draw_icon (pCustomDraw->hdc, &content_rect, style, state_id);
		}

		// finally, draw the focus rectangle if needed
		if (pCustomDraw->uItemState & CDIS_FOCUS)
		{
			// draw focus rectangle
			DrawFocusRect (pCustomDraw->hdc, &content_rect);
		}

		*result = CDRF_SKIPDEFAULT;
		return;
	}

	// we should never get here, since we should only get CDDS_PREERASE or CDDS_PREPAINT
	ASSERT (false);
	*result = CDRF_DODEFAULT;
}

// OnRButtonUp - handle NM_RCLICK notyfication
// allows custom right click button behaviour
void
CImageButtonWithStyle::OnRButtonUp(UINT nFlags, CPoint point) 
{
  NMHDR hdr;
  hdr.code = NM_RCLICK;
  hdr.hwndFrom = this->GetSafeHwnd();
  hdr.idFrom = GetDlgCtrlID();
  TRACE("OnRButtonUp");
  this->GetParent()->SendMessage(WM_NOTIFY, (WPARAM)hdr.idFrom, (LPARAM)&hdr);
}

void
CImageButtonWithStyle::draw_image (HDC hDC, const CRect& Rect, DWORD style, int state_id)
{
	// determine position of top-left corner of bitmap (positioned according to style)
	int x = image_left (m_ImageSize.Width, Rect, style);
	int y = image_top (m_ImageSize.Height, Rect, style);

	if ( state_id == PBS_PRESSED )
	{
		++x;
		++y;
	}

	// Draw the image

	Gdiplus::Graphics graphics(hDC);

	graphics.DrawImage(m_pImage, 
		Gdiplus::Rect(Gdiplus::Point(x, y), m_ImageSize),
		0, 0, m_ImageSize.Width, m_ImageSize.Height, Gdiplus::UnitPixel, (style & WS_DISABLED ? &m_ImageAttribute : NULL));
}

// draw_bitmap () - Draw a bitmap
void
CImageButtonWithStyle::draw_bitmap (HDC hDC, const CRect& Rect, DWORD style, int state_id)
{
	HBITMAP hBitmap = GetBitmap ();
	if (hBitmap == NULL)
		return;

	// determine size of bitmap image
	BITMAPINFO bmi;
	memset (&bmi, 0, sizeof (BITMAPINFO));
	bmi.bmiHeader.biSize = sizeof (BITMAPINFOHEADER);
	GetDIBits(hDC, hBitmap, 0, 0, NULL, &bmi, DIB_RGB_COLORS);

	// determine position of top-left corner of bitmap (positioned according to style)
	int x = image_left (bmi.bmiHeader.biWidth, Rect, style);
	int y = image_top (bmi.bmiHeader.biHeight, Rect, style);

	if ( state_id == PBS_PRESSED )
	{
		++x;
		++y;
	}

	// Draw the bitmap
	DrawState(hDC, NULL, NULL, (LPARAM) hBitmap, 0, x, y, bmi.bmiHeader.biWidth, bmi.bmiHeader.biHeight,
		(style & WS_DISABLED) != 0 ? (DST_BITMAP | DSS_DISABLED) : (DST_BITMAP | DSS_NORMAL));
}

// draw_icon () - Draw an icon
void
CImageButtonWithStyle::draw_icon (HDC hDC, const CRect& Rect, DWORD style, int state_id)
{
	HICON hIcon = GetIcon ();
	if (hIcon == NULL)
		return;

	// determine size of icon image
	ICONINFO ii;
	GetIconInfo (hIcon, &ii);
	BITMAPINFO bmi;
	memset (&bmi, 0, sizeof (BITMAPINFO));
	bmi.bmiHeader.biSize = sizeof (BITMAPINFOHEADER);
	int cx = 0;
	int cy = 0;
	if (ii.hbmColor != NULL)
	{
		// icon has separate image and mask bitmaps - use size directly
		GetDIBits(hDC, ii.hbmColor, 0, 0, NULL, &bmi, DIB_RGB_COLORS);
		cx = bmi.bmiHeader.biWidth;
		cy = bmi.bmiHeader.biHeight;
	}
	else
	{
		// icon has singel mask bitmap which is twice as high as icon
		GetDIBits(hDC, ii.hbmMask, 0, 0, NULL, &bmi, DIB_RGB_COLORS);
		cx = bmi.bmiHeader.biWidth;
		cy = bmi.bmiHeader.biHeight/2;
	}

	// determine position of top-left corner of icon
	int x = image_left (cx, Rect, style);
	int y = image_top (cy, Rect, style);

	if ( state_id == PBS_PRESSED )
	{
		++x;
		++y;
	}

	// Draw the icon
	DrawState(hDC, NULL, NULL, (LPARAM) hIcon, 0, x, y, cx, cy,
		(style & WS_DISABLED) != 0 ? (DST_ICON | DSS_DISABLED) : (DST_ICON | DSS_NORMAL));
}

// calcultate the left position of the image so it is drawn on left, right or centred (the default)
// as dictated by the style settings.
static int
image_left (int cx, const CRect& Rect, DWORD style)
{
	int x = Rect.left;
	if (cx > Rect.Width ())
		cx = Rect.Width();
	else if ((style & BS_CENTER) == BS_LEFT)
		x = Rect.left;
	else if ((style & BS_CENTER) == BS_RIGHT)
		x = Rect.right - cx;
	else
		x = Rect.left + (Rect.Width () - cx)/2;
	return (x);
}

// calcultate the top position of the image so it is drawn on top, bottom or vertically centred (the default)
// as dictated by the style settings.
static int
image_top (int cy, const CRect& Rect, DWORD style)
{
	int y = Rect.top;
	if (cy > Rect.Height ())
		cy = Rect.Height ();
	if ((style & BS_VCENTER) == BS_TOP)
		y = Rect.top;
	else if ((style & BS_VCENTER) == BS_BOTTOM)
		y = Rect.bottom - cy;
	else
		y = Rect.top + (Rect.Height () - cy)/2;
	return (y);
}
