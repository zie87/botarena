#include "stdafx.h"
#include "CardMTG.h"

#define new DEBUG_NEW

#define DEFINE_CARD(C)	\
	if (!_tcslen(strCardName))	\
	{ cardClassNames.push_back(_T(#C)); }	\
	else	\
	if (!_tcsicmp(strCardName, _T(#C))) { cpCard = counted_ptr<CCard>(new C(pGame, uID)); break; }

#define DEFINE_TOKEN(T)	\
	if (!_tcsicmp(strTokenName, _T(#T))) { cpCard = counted_ptr<CCard>(new T(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateCard(CGame* pGame, LPCTSTR strCardName, StringArray& cardClassNames, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{
		DEFINE_CARD(CForestCard);
		DEFINE_CARD(CIslandCard);
		DEFINE_CARD(CMountainCard);
		DEFINE_CARD(CPlainsCard);
		DEFINE_CARD(CSwampCard);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID)
{
	counted_ptr<CCard> cpCard;

	do
	{
		DEFINE_TOKEN(CAngelAToken);
		DEFINE_TOKEN(CAngelBToken);
		DEFINE_TOKEN(CAngelCToken);
		DEFINE_TOKEN(CAngelDToken);
		DEFINE_TOKEN(CAngelEToken);
		DEFINE_TOKEN(CAngelFToken);
		DEFINE_TOKEN(CAngelGToken);
		DEFINE_TOKEN(CAngelHToken);
		DEFINE_TOKEN(CAntelopeToken);
		DEFINE_TOKEN(CApeAToken);
		DEFINE_TOKEN(CApeBToken);
		DEFINE_TOKEN(CApeCToken);
		DEFINE_TOKEN(CAssassinToken);
		DEFINE_TOKEN(CAssemblyWorkerAToken);
		DEFINE_TOKEN(CAvatarToken);
		DEFINE_TOKEN(CBatAToken);
		DEFINE_TOKEN(CBatBToken);
		DEFINE_TOKEN(CBearAToken);
		DEFINE_TOKEN(CBearBToken);
		DEFINE_TOKEN(CBeastAToken);
		DEFINE_TOKEN(CBeastBToken);
		DEFINE_TOKEN(CBeastCToken);
		DEFINE_TOKEN(CBeastDToken);
		DEFINE_TOKEN(CBeastEToken);
		DEFINE_TOKEN(CBeastFToken);
		DEFINE_TOKEN(CBeastGToken);
		DEFINE_TOKEN(CBeastHToken);
		DEFINE_TOKEN(CBeastIToken);
		DEFINE_TOKEN(CBeastJToken);
		DEFINE_TOKEN(CBeastKToken);
		DEFINE_TOKEN(CBeastLToken);
		DEFINE_TOKEN(CBirdAToken);
		DEFINE_TOKEN(CBirdBToken);
		DEFINE_TOKEN(CBirdCToken);
		DEFINE_TOKEN(CBirdDToken);
		DEFINE_TOKEN(CBirdEToken);
		DEFINE_TOKEN(CBirdFToken);
		DEFINE_TOKEN(CBirdGToken);
		DEFINE_TOKEN(CBirdHToken);
		DEFINE_TOKEN(CBirdSoldierToken);
		DEFINE_TOKEN(CBoarToken);
		DEFINE_TOKEN(CButterflyToken);
		DEFINE_TOKEN(CCamaridAToken);
		DEFINE_TOKEN(CCamaridBToken);
		DEFINE_TOKEN(CCaribouToken);
		DEFINE_TOKEN(CCarnivoreToken);
		DEFINE_TOKEN(CCatAToken);
		DEFINE_TOKEN(CCatBToken);
		DEFINE_TOKEN(CCatCToken);
		DEFINE_TOKEN(CCatDToken);
		DEFINE_TOKEN(CCatEToken);
		DEFINE_TOKEN(CCatWarriorToken);
		DEFINE_TOKEN(CCentaurAToken);
		DEFINE_TOKEN(CCentaurBToken);
		DEFINE_TOKEN(CCentaurCToken);		
		DEFINE_TOKEN(CCitizenAToken);
		DEFINE_TOKEN(CCitizenBToken);
		DEFINE_TOKEN(CClericToken);
		DEFINE_TOKEN(CCloudSpriteToken);
		DEFINE_TOKEN(CDemonAToken);
		DEFINE_TOKEN(CDemonBToken);
		DEFINE_TOKEN(CDemonCToken);
		DEFINE_TOKEN(CDeserterToken);
		DEFINE_TOKEN(CDjinnToken);
		DEFINE_TOKEN(CDragonAToken);
		DEFINE_TOKEN(CDragonBToken);
		DEFINE_TOKEN(CDragonCToken);
		DEFINE_TOKEN(CDragonDToken);
		DEFINE_TOKEN(CDragonEToken);
		DEFINE_TOKEN(CDragonFToken);
		DEFINE_TOKEN(CDrakeAToken);
		DEFINE_TOKEN(CDrakeBToken);
		DEFINE_TOKEN(CEldraziSpawnAToken);
		DEFINE_TOKEN(CEldraziSpawnBToken);
		DEFINE_TOKEN(CEldraziSpawnCToken);
		DEFINE_TOKEN(CElementalAToken);
		DEFINE_TOKEN(CElementalBToken);
		DEFINE_TOKEN(CElementalCToken);
		DEFINE_TOKEN(CElementalDToken);
		DEFINE_TOKEN(CElementalEToken);
		DEFINE_TOKEN(CElementalFToken);
		DEFINE_TOKEN(CElementalGToken);
		DEFINE_TOKEN(CElementalHToken);
		DEFINE_TOKEN(CElementalIToken);
		DEFINE_TOKEN(CElementalJToken);
		DEFINE_TOKEN(CElementalKToken);
		DEFINE_TOKEN(CElementalLToken);
		DEFINE_TOKEN(CElementalMToken);
		DEFINE_TOKEN(CElementalNToken);
		DEFINE_TOKEN(CElementalOToken);
		DEFINE_TOKEN(CElementalPToken);
		DEFINE_TOKEN(CElementalCatToken);
		DEFINE_TOKEN(CElementalShamanToken);
		DEFINE_TOKEN(CElephantAToken);
		DEFINE_TOKEN(CElephantBToken);
		DEFINE_TOKEN(CElephantCToken);
		DEFINE_TOKEN(CElephantDToken);
		DEFINE_TOKEN(CElfWarriorAToken);
		DEFINE_TOKEN(CElfWarriorBToken);
		DEFINE_TOKEN(CElfWarriorCToken);
		DEFINE_TOKEN(CFaerieToken);
		DEFINE_TOKEN(CFaerieRogueAToken);
		DEFINE_TOKEN(CFaerieRogueBToken);
		DEFINE_TOKEN(CFesteringGoblinToken);
		DEFINE_TOKEN(CFrogLizardToken);
		DEFINE_TOKEN(CGargoyleToken);
		DEFINE_TOKEN(CGermToken);
		DEFINE_TOKEN(CGiantToken);
		DEFINE_TOKEN(CGiantWarriorAToken);
		DEFINE_TOKEN(CGiantWarriorBToken);
		DEFINE_TOKEN(CGnomeToken);
		DEFINE_TOKEN(CGoatAToken);
		DEFINE_TOKEN(CGoatBToken);
		DEFINE_TOKEN(CGoblinAToken);
		DEFINE_TOKEN(CGoblinBToken);
		DEFINE_TOKEN(CGoblinRogueToken);
		DEFINE_TOKEN(CGoblinScoutToken);
		DEFINE_TOKEN(CGoldmeadowHarrierToken);
		DEFINE_TOKEN(CGolemAToken);
		DEFINE_TOKEN(CGolemBToken);
		DEFINE_TOKEN(CGolemCToken);
		DEFINE_TOKEN(CGolemDToken);
		DEFINE_TOKEN(CGravebornAToken);
		DEFINE_TOKEN(CGravebornBToken);
		DEFINE_TOKEN(CGriffinToken);
		DEFINE_TOKEN(CHellionAToken);
		DEFINE_TOKEN(CHellionBToken);
		DEFINE_TOKEN(CHomunculusAToken);
		DEFINE_TOKEN(CHomunculusBToken);
		DEFINE_TOKEN(CHornetToken);
		DEFINE_TOKEN(CHorrorAToken);
		DEFINE_TOKEN(CHorrorBToken);
		DEFINE_TOKEN(CHumanBToken);
		DEFINE_TOKEN(CHoundToken);
		DEFINE_TOKEN(CInsectAToken);
		DEFINE_TOKEN(CInsectCToken);
		DEFINE_TOKEN(CInsectDToken);
		DEFINE_TOKEN(CInsectEToken);
		DEFINE_TOKEN(CKnightAToken);
		DEFINE_TOKEN(CKnightBToken);
		DEFINE_TOKEN(CKnightCToken);
		DEFINE_TOKEN(CKnightDToken);
		DEFINE_TOKEN(CLlanowarElvesToken);
		DEFINE_TOKEN(CRatAToken);
		DEFINE_TOKEN(CRatBToken);
		DEFINE_TOKEN(CRatCToken);
		DEFINE_TOKEN(CRatDToken);
		DEFINE_TOKEN(CSparkElementalToken);
		DEFINE_TOKEN(CTuktukTheReturnedToken);
		DEFINE_TOKEN(CUramiToken);
		DEFINE_TOKEN(CZombieGiantToken);
		//
		DEFINE_TOKEN(CGoblinCToken);
		DEFINE_TOKEN(CGoblinDToken);
		DEFINE_TOKEN(CGoblinEToken);
		DEFINE_TOKEN(CGoblinFToken);
		DEFINE_TOKEN(CGoblinSoldierAToken);
		DEFINE_TOKEN(CHippoToken);
		DEFINE_TOKEN(CHumanAToken);
		DEFINE_TOKEN(CIllusionAToken);
		DEFINE_TOKEN(CIllusionBToken);
		DEFINE_TOKEN(CInsectBToken);
		DEFINE_TOKEN(CJuggernautToken);
		DEFINE_TOKEN(CKaldraToken);
		DEFINE_TOKEN(CKavuToken);
		DEFINE_TOKEN(CKelpToken);
		DEFINE_TOKEN(CKithkinSoldierToken);
		DEFINE_TOKEN(CKoboldsOfKherKeepToken);
		DEFINE_TOKEN(CKorSoldierToken);
		DEFINE_TOKEN(CMaritLageToken);
		DEFINE_TOKEN(CMerfolkWizardToken);
		DEFINE_TOKEN(CMetallicSliverToken);
		DEFINE_TOKEN(CMinorDemonToken);
		DEFINE_TOKEN(CMorphToken);
		DEFINE_TOKEN(CMyrToken);
		DEFINE_TOKEN(COgreToken);
		DEFINE_TOKEN(COozeAToken);
		DEFINE_TOKEN(COozeBToken);
		DEFINE_TOKEN(COozeCToken);
		DEFINE_TOKEN(COozeDToken);
		DEFINE_TOKEN(CPegasusToken);
		DEFINE_TOKEN(CPentaviteToken);
		DEFINE_TOKEN(CPestToken);
		DEFINE_TOKEN(CPincherToken);
		DEFINE_TOKEN(CPlantToken);
		DEFINE_TOKEN(CPlantZombieToken);
		DEFINE_TOKEN(CPrismToken);
		DEFINE_TOKEN(CRhinoToken);
		DEFINE_TOKEN(CReflectionToken);
		DEFINE_TOKEN(CSandToken);
		DEFINE_TOKEN(CSaprolingAToken);
		DEFINE_TOKEN(CSaprolingBToken);
		DEFINE_TOKEN(CSaprolingCToken);
		DEFINE_TOKEN(CSerfToken);
		DEFINE_TOKEN(CShapeshifterToken);
		DEFINE_TOKEN(CShapeshifterAToken);
		DEFINE_TOKEN(CSheepToken);
		DEFINE_TOKEN(CSkeletonAToken);
		DEFINE_TOKEN(CSkeletonBToken);
		DEFINE_TOKEN(CSliverToken);
		DEFINE_TOKEN(CSnakeAToken);
		DEFINE_TOKEN(CSnakeBToken);
		DEFINE_TOKEN(CSnakeCToken);
		DEFINE_TOKEN(CSnakeDToken);
		DEFINE_TOKEN(CSnakeEToken);
		DEFINE_TOKEN(CSnakeFToken);
		DEFINE_TOKEN(CSoldierAToken);
		DEFINE_TOKEN(CSoldierBToken);
		DEFINE_TOKEN(CSoldierCToken);
		DEFINE_TOKEN(CSoldierDToken);
		DEFINE_TOKEN(CSoldierAllyToken);
		DEFINE_TOKEN(CSpawnToken);
		DEFINE_TOKEN(CSpawnwritheToken);
		DEFINE_TOKEN(CSpiderAToken);
		DEFINE_TOKEN(CSpiderBToken);
		DEFINE_TOKEN(CSpikeToken);
		DEFINE_TOKEN(CSpiritAToken);
		DEFINE_TOKEN(CSpiritBToken);
		DEFINE_TOKEN(CSpiritCToken);
		DEFINE_TOKEN(CSpiritDToken);
		DEFINE_TOKEN(CSpiritEToken);
		DEFINE_TOKEN(CSpiritFToken);
		DEFINE_TOKEN(CSpiritGToken);
		DEFINE_TOKEN(CSpiritHToken);
		DEFINE_TOKEN(CSpiritIToken);
		DEFINE_TOKEN(CSpiritJToken);
		DEFINE_TOKEN(CSpiritKToken);
		DEFINE_TOKEN(CSpiritLToken);
		DEFINE_TOKEN(CSpiritMToken);
		DEFINE_TOKEN(CSquirrelToken);
		DEFINE_TOKEN(CSquirrelBToken);
		DEFINE_TOKEN(CStanggTwinToken);
		DEFINE_TOKEN(CStarfishToken);
		DEFINE_TOKEN(CSurvivorToken);
		DEFINE_TOKEN(CThopterAToken);
		DEFINE_TOKEN(CThopterBToken);
		DEFINE_TOKEN(CThrullToken);
		DEFINE_TOKEN(CThrullBToken);
		DEFINE_TOKEN(CTombspawnToken);
		DEFINE_TOKEN(CTreefolkAToken);
		DEFINE_TOKEN(CTreefolkBToken);
		DEFINE_TOKEN(CTreefolkShamanToken);
		DEFINE_TOKEN(CTriskelaviteToken);
		DEFINE_TOKEN(CTurtleToken);
		DEFINE_TOKEN(CVampireAToken);
		DEFINE_TOKEN(CVampireBToken);
		DEFINE_TOKEN(CVampireCToken);
		DEFINE_TOKEN(CVojaToken);
		DEFINE_TOKEN(CWallToken);
		DEFINE_TOKEN(CWallBToken);
		DEFINE_TOKEN(CWarriorAToken);
		DEFINE_TOKEN(CWarriorBToken);
		DEFINE_TOKEN(CWaspToken);
		DEFINE_TOKEN(CWireflyToken);
		DEFINE_TOKEN(CWolfAToken);
		DEFINE_TOKEN(CWolfBToken);
		DEFINE_TOKEN(CWolfCToken);
		DEFINE_TOKEN(CWolfDToken);
		DEFINE_TOKEN(CWoodToken);
		DEFINE_TOKEN(CWormToken);
		DEFINE_TOKEN(CWurmAToken);
		DEFINE_TOKEN(CWurmBToken);
		DEFINE_TOKEN(CWurmCToken);
		DEFINE_TOKEN(CWurmDToken);
		DEFINE_TOKEN(CWurmEToken);
		DEFINE_TOKEN(CWurmFToken);
		DEFINE_TOKEN(CZombieToken);
		DEFINE_TOKEN(CZombieWizardToken);


		DEFINE_TOKEN(CInterventionPactEffectToken);
		DEFINE_TOKEN(CPactofNegationEffectToken);
		DEFINE_TOKEN(CPactOfTheTitanEffectToken);
		DEFINE_TOKEN(CSlaughterPactEffectToken);
		DEFINE_TOKEN(CSummonersPactEffectToken);
		
		DEFINE_TOKEN(CCastExileEmblemToken);
		DEFINE_TOKEN(CDomriRadeEmblemToken);
		DEFINE_TOKEN(CMountainDamageEmblemToken);
		DEFINE_TOKEN(CPowerPumpEmblemToken);
		DEFINE_TOKEN(CTamiyoEmblemToken);
		DEFINE_TOKEN(CSwampFourManaEmblemToken);

		DEFINE_TOKEN(CAlchemistsRefugeEffectToken);
		DEFINE_TOKEN(CApproachMyMoltenRealmEffectToken);
		DEFINE_TOKEN(CArcaneDenialEffectToken);
		DEFINE_TOKEN(CBubblingMuckEffectToken);
		DEFINE_TOKEN(CChannelEffectToken);
		DEFINE_TOKEN(CChandraTheFirebrandEffectToken);
		DEFINE_TOKEN(CDuskmantleGuildmageEffectToken);
		DEFINE_TOKEN(CEnterTheInfiniteEffectToken);
		DEFINE_TOKEN(CFalterEffectToken);
		DEFINE_TOKEN(CFlashOfDefianceEffectToken);
		DEFINE_TOKEN(CGlimpseofNatureEffectToken);
		DEFINE_TOKEN(CHeroOfOxidRidgeEffectToken);
		DEFINE_TOKEN(CHighTideEffectToken);
		DEFINE_TOKEN(CJaceArchitectOfThoughtEffectToken);
		DEFINE_TOKEN(CLatNamsLegacyEffectToken);
		DEFINE_TOKEN(CPraetorsCounselEffectToken);
		DEFINE_TOKEN(CQuickenEffectToken);
		DEFINE_TOKEN(CRuthlessInvasionEffectToken);
		DEFINE_TOKEN(CScoutsWarningEffectToken);
		DEFINE_TOKEN(CSlowtripEffectToken);
		DEFINE_TOKEN(CThePiecesAreComingTogetherEffectToken);
		DEFINE_TOKEN(CWindingCanyonsEffectToken);
		DEFINE_TOKEN(CYourPunyMindsCannotFathomEffectToken);

	} while (false);

	return cpCard;	
}

//____________________________________________________________________________
//
CForestCard::CForestCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Forest"), uID, GREEN_MANA_TEXT, CardType::Forest | CardType::BasicLand)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CIslandCard::CIslandCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Island"), uID, BLUE_MANA_TEXT, CardType::Island | CardType::BasicLand)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CMountainCard::CMountainCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Mountain"), uID, RED_MANA_TEXT, CardType::Mountain | CardType::BasicLand)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CPlainsCard::CPlainsCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Plains"), uID, WHITE_MANA_TEXT, CardType::Plains | CardType::BasicLand)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
CSwampCard::CSwampCard(CGame* pGame, UINT uID)
	: CBasicLandCard(pGame, _T("Swamp"), uID, BLACK_MANA_TEXT, CardType::Swamp | CardType::BasicLand)
{
	AllowUnlimitedCopies(TRUE);
}

//____________________________________________________________________________
//
void CEffectCard::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (GetZoneId() != ZoneId::_Effects)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, MoveType::Others);
}

//____________________________________________________________________________
//
void CTokenCreature::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (GetZoneId() != ZoneId::Battlefield && !this->GetCardType().IsToken())
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, MoveType::Others);
}

//____________________________________________________________________________
//
CAngelAToken::CAngelAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Haunted Angel
}

//____________________________________________________________________________
//
CAngelBToken::CAngelBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// CON version; used by Sigil of the Empty Throne
}

//____________________________________________________________________________
//
CAngelCToken::CAngelCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// NMS version; used by Angelic Favor
}

//____________________________________________________________________________
//
CApeAToken::CApeAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ape"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ape), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Pongify
}

//____________________________________________________________________________
//
CApeCToken::CApeCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ape"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ape), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Uktabi Kong
}

//____________________________________________________________________________
//
CAssemblyWorkerAToken::CAssemblyWorkerAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Assembly-Worker"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(AssemblyWorker), nID,
		_T(""),
		Power(2), Life(2))
{
// Used by Urza's Factory
}

//____________________________________________________________________________
//
CAvatarToken::CAvatarToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Avatar"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Avatar), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	{
		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CAvatarToken::BeforeResolution));
		cpAbility->SetSkipStack(TRUE);

		AddAbility(cpAbility.GetPointer());
	}

// Used by Ajani Goldmane
}

bool CAvatarToken::BeforeResolution(TriggeredAbility::TriggeredActionType* pAction)
{
	Life p = GetController()->GetLife();
	Power startpower = GetPower();
	Life startlife = GetLife();
	Power startpermanentpower = GetPermanentPower();
	Life startpermanentlife = GetPermanentLife();
	SetPower(Power(GET_INTEGER(p))-(startpermanentpower-startpower), true);
	SetLife(NULL,p-(startpermanentlife-startlife));
	SetPermanentPower(Power(GET_INTEGER(p)), true);
	SetPermanentLife(p, true);
	return true;
}

void CAvatarToken::Move(CZone* pToZone, const CPlayer* pByPlayer, MoveType moveType, CardPlacement cardPlacement, BOOL can_dredge)
{
	// Boost before moving into battlefield (before calling __super::Move())
	if (GetZone()->GetZoneId() == ZoneId::_Tokens && pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		SetPrintedPower(Power(GET_INTEGER(pByPlayer->GetLife())));
		SetPrintedToughness(pByPlayer->GetLife());
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CBatAToken::CBatAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bat), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Skeletal Vampire
// Future use: Belfry Spirit
}

//____________________________________________________________________________
//
CBatBToken::CBatBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bat), nID,
		_T(""),
		Power(1), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetMoveCardSpell>> cpAbility(	
			::CreateObject<CActivatedAbility<CTargetMoveCardSpell>>(this,
				_T("1") BLACK_MANA_TEXT,
				new CardNameComparer(_T("Sengir Nosferatu")),
				ZoneId::Exile, ZoneId::Battlefield, TRUE, MoveType::Others));

		cpAbility->AddSacrificeCost();

		AddAbility(cpAbility.GetPointer());
	}

// Used by Sengir Nosferatu
}

//____________________________________________________________________________
//
CBearAToken::CBearAToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Bear"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Bear), nID,
        _T(""),
        Power(2), Life(2))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// ONS version; used by Kamahl's Summons
// Future use: Words of Wilding, Caller of the Claw
}

//____________________________________________________________________________
//
CBeastAToken::CBeastAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Beast), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ODY version; used by Beast Attack
}

//____________________________________________________________________________
//
CBeastBToken::CBeastBToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(2), Life(2))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Keeper of the Beasts
}

//____________________________________________________________________________
//
CBeastCToken::CBeastCToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// EVE version; used by Savage Conception
}

//____________________________________________________________________________
//
CBeastDToken::CBeastDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Beast), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by One Dozen Eyes
}

//____________________________________________________________________________
//
CBeastEToken::CBeastEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Beast), nID,
		_T(""),
		Power(8), Life(8))
{
	AddCardType(CardType::Red | CardType::Green | CardType::White, CardType::_ColorMask);

// Used by Godsire
}

//____________________________________________________________________________
//
CBirdAToken::CBirdAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// JUD version; used by Battle Screech
}

//____________________________________________________________________________
//
CBirdBToken::CBirdBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// EVE version; used by Fable of Wolf and Owl
}

//____________________________________________________________________________
//
CBirdCToken::CBirdCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// Used by Rukh Egg
}

//____________________________________________________________________________
//
CBirdDToken::CBirdDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// Used by Roc Egg
}

//____________________________________________________________________________
//
CButterflyToken::CButterflyToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Butterfly"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Giant Caterpillar
}

//____________________________________________________________________________
//
CCaribouToken::CCaribouToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Caribou"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Caribou), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// Used by Caribou Range
}

//____________________________________________________________________________
//
CCarnivoreToken::CCarnivoreToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Carnivore"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Beast), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Tooth and Claw
}

//____________________________________________________________________________
//
CCatAToken::CCatAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Cat), nID,
		_T(""),
		Power(2), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Penumbra Bobcat
}

//____________________________________________________________________________
//
CCatBToken::CCatBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Cat), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Waiting in the Weeds
}

//____________________________________________________________________________
//
CCatCToken::CCatCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Cat), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// SOM version; used by Kemba, Kha Regent and White Sun's Zenith
}

//____________________________________________________________________________
//
CCatWarriorToken::CCatWarriorToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Cat, Warrior), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Forestwalk, FALSE);

// Used by Jedit Ojanen of Efrava
}

//____________________________________________________________________________
//
CCentaurBToken::CCentaurBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Centaur"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Centaur), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ONS version; used by Centaur Glade
}

//____________________________________________________________________________
//
CCentaurCToken::CCentaurCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Centaur"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Centaur), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromBlack, FALSE);

// Used by Hunted Horror
}

//____________________________________________________________________________
//
CCitizenAToken::CCitizenAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Citizen"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Citizen), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// TSP version; used by Icatian Crier and Sarpadian Empires, Vol. VII
}

//____________________________________________________________________________
//
CCloudSpriteToken::CCloudSpriteToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cloud Sprite"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Faerie), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddCanOnlyBlockFlying(FALSE);	

// Used by Cloudseeder
}

//____________________________________________________________________________
//
CDemonBToken::CDemonBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Demon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Demon), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Promise of Power
}

//____________________________________________________________________________
//
CDemonAToken::CDemonAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Demon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Demon), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);

// ISD version; used by Skirsdag High Priest
}

//____________________________________________________________________________
//
CDeserterToken::CDeserterToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Deserter"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Deserter), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// Used by Kjeldoran Home Guard
}

//____________________________________________________________________________
//
CDjinnToken::CDjinnToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Djinn"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Djinn), nID,
		_T(""),
		Power(5), Life(5))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Bottle of Suleiman
}

//____________________________________________________________________________
//
CDragonAToken::CDragonAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Broodmate Dragon and Sarkhan Vol
}

//____________________________________________________________________________
//
CDragonBToken::CDragonBToken(CGame* pGame, UINT nID)
	: CDevourCreatureCard(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(1), Life(1),
		&m_CardFilter)

	, m_cpAListener(VAR_NAME(m_cpAListener), CardMovementEventSource::Listener::EventCallback(this, &CDragonBToken::OnZoneChanged))
	, m_CardFilter(_T("1 creature"), _T("creatures"), new AnyCreatureComparer)
{
	m_CardFilter.AddNegateComparer(new SpecificCardComparer(this));

	GetCounterContainer()->ScheduleCounter(_T("+1/+1"), 0, true, ZoneId::_AllZones, ZoneId::Battlefield, true);
	GetMovedEventSource()->AddListener(m_cpAListener.GetPointer());
	GetCreatureKeyword()->AddDevour(FALSE);

	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Dragon Broodmother
}

void CDragonBToken::OnZoneChanged(CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	if (!pFromZone || !pToZone || pCard != this)
		return;

	int nColorCount = GetDevouredCount() * 2;

	if (pFromZone->GetZoneId() != ZoneId::Battlefield && pToZone->GetZoneId() == ZoneId::Battlefield && nColorCount > 0)
	{
		CCardCounterModifier pModifier = CCardCounterModifier(_T("+1/+1"), +nColorCount, true);
		pModifier.ApplyTo(this);
	}
}

void CDragonBToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (GetZoneId() != ZoneId::Battlefield && !this->GetCardType().IsToken())
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Tokens), pByPlayer, MoveType::Others);
}

//____________________________________________________________________________
//
CDragonCToken::CDragonCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// WWK version; used by Dragonmaster Outcast, Sarkhan the Mad, Look Skyward and Despair, Death by Dragons
}

//____________________________________________________________________________
//
CDrakeAToken::CDrakeAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Drake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Drake), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green | CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Leafdrake Roost
}

//____________________________________________________________________________
//
CEldraziSpawnAToken::CEldraziSpawnAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Spawn"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Spawn), nID,
		_T(""),
		Power(0), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CElementalAToken::CElementalAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(7), Life(7))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);

// Used by Voice of the Woods
}

//____________________________________________________________________________
//
CElementalBToken::CElementalBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(7), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Elemental Appeal and Zektar Shrine Expedition
}
//____________________________________________________________________________
//
CElementalDToken::CElementalDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Wand of the Elements
}

//____________________________________________________________________________
//
CElementalEToken::CElementalEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Wand of the Elements
}

//____________________________________________________________________________
//
CElementalFToken::CElementalFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// MRD version; used by Lightning Coils
}

//____________________________________________________________________________
//
CElementalGToken::CElementalGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Eyes of the Wisent and Walker of the Grove
}

//____________________________________________________________________________
//
CElementalIToken::CElementalIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Blue | CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Call the Skybreaker
}

//____________________________________________________________________________
//
CElementalJToken::CElementalJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// SOK version; used by Feral Lightning
}

//____________________________________________________________________________
//
CElementalMToken::CElementalMToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Hoofprints of the Stag
}

//____________________________________________________________________________
//
CElementalOToken::CElementalOToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Devastating Summons
}

//____________________________________________________________________________
//
CElementalNToken::CElementalNToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Budoka Gardener
}

//____________________________________________________________________________
//
CElementalLToken::CElementalLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Black | CardType::Red, CardType::_ColorMask);	

// Used by Din of the Fireherd
}

//____________________________________________________________________________
//
CElementalShamanToken::CElementalShamanToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental Shaman"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Elemental, Shaman), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Hearthcage Giant, Hostility
// Future Use: Rebellion of the Flamekin
}

//____________________________________________________________________________
//
CElephantAToken::CElephantAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elephant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elephant), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// WWK version; used by Bestial Menace, Terastodon, Kazandu Tuskcaller
}

//____________________________________________________________________________
//
CElfWarriorAToken::CElfWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elf Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Elf, Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// SHM version; used by Flourishing Defenses, Presence of Gond
}

//____________________________________________________________________________
//
CElfWarriorBToken::CElfWarriorBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elf Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Elf, Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);

// Used by Mercy Killing, Rhys the Redeemed
}

//____________________________________________________________________________
//
CFaerieToken::CFaerieToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Faerie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Faerie), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Hunted Troll
}

//____________________________________________________________________________
//
CFaerieRogueBToken::CFaerieRogueBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Faerie Rogue"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Faerie, Rogue), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Bitterblossom, Notorious Throng, Violet Pall
}

//____________________________________________________________________________
//
CFaerieRogueAToken::CFaerieRogueAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Faerie Rogue"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Faerie, Rogue), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue | CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Oona, Queen of the Fae
}

//____________________________________________________________________________
//
CFesteringGoblinToken::CFesteringGoblinToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Festering Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Zombie, Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredModifyCreatureAbility, CWhenSelfMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, ZoneId::Battlefield, ZoneId::Graveyard));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new AnyCreatureComparer);
		cpAbility->GetTargeting().SetDefaultCharacteristic(Characteristic::Negative);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}

// Used by Skirk Ridge Exhumer
}

//____________________________________________________________________________
//
CGargoyleToken::CGargoyleToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Gargoyle"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Gargoyle), nID,
		_T(""),
		Power(3), Life(4))
{
	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Gargoyle Castle
}

//____________________________________________________________________________
//
CGiantToken::CGiantToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Giant"), CardType::Creature | CardType::Token, 
		CREATURE_TYPE(Giant), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Pact of the Titan
}

//____________________________________________________________________________
//
CGnomeToken::CGnomeToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Gnome"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Gnome), nID,
		_T(""),
		Power(1), Life(1))
{
// Used by Metrognome
}

//____________________________________________________________________________
//
CGoatAToken::CGoatAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goat), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// EVE version; used by Springjack Pasture, Springjack Shepherd and Goldmeadow
}

//____________________________________________________________________________
//
CGoblinAToken::CGoblinAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// ALA version; used by Goblin Assault
}

//____________________________________________________________________________
//
CGoblinBToken::CGoblinBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(2), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Rakdos Guildmage
}

//____________________________________________________________________________
//
CGoblinCToken::CGoblinCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CGoblinRogueToken::CGoblinRogueToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin Rogue"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Goblin, Rogue), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Boggart Mob, Marsh Flitter, Waren Weirding and Weirding Shaman
}

//____________________________________________________________________________
//
CGoblinScoutToken::CGoblinScoutToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin Scout"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Goblin, Scout), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Mountainwalk, FALSE);

// Used by Goblin Scouts
}

//____________________________________________________________________________
//
CGoblinSoldierAToken::CGoblinSoldierAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Goblin, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CGoldmeadowHarrierToken::CGoldmeadowHarrierToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goldmeadow Harrier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	{
		counted_ptr<CActivatedAbility<CTargetTapUntapCardSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetTapUntapCardSpell>>(this,
				WHITE_MANA_TEXT,
				TRUE, // tap
				FALSE, // untap
				new AnyCreatureComparer));
		ATLASSERT(cpAbility);

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}

// Used by Goldmeadow Lookout
}

//____________________________________________________________________________
//
CGravebornAToken::CGravebornAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Graveborn"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Graveborn), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red | CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// ALL version; used by Balduvian Dead
}

//____________________________________________________________________________
//
CGravebornBToken::CGravebornBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Graveborn"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Graveborn), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red | CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// CSP version; used by Sek'Kuar, Deathkeeper
}

//____________________________________________________________________________
//
CHomunculusAToken::CHomunculusAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Homunculus"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Homunculus), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

// Used by Puppet Conjurer
}

//____________________________________________________________________________
//
CHornetToken::CHornetToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hornet"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Hornet Cannon
}

//____________________________________________________________________________
//
CHorrorAToken::CHorrorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Horror"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Horror), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Hunted Lammasu
}

//____________________________________________________________________________
//
CHoundToken::CHoundToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hound"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hound), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Mongrel Pack
}

//____________________________________________________________________________
//
CIllusionAToken::CIllusionAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Illusion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Illusion), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

// Used by Summoner's Bane
}

//____________________________________________________________________________
//
CIllusionBToken::CIllusionBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Illusion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Illusion), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Meloku of Clouded Mirror
}

//____________________________________________________________________________
//
CInsectAToken::CInsectAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(6), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCardKeyword()->AddShroud(FALSE);

// Used by Deadly Grub
}

//____________________________________________________________________________
//
CInsectBToken::CInsectBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CInsectCToken::CInsectCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Carrion
}

//____________________________________________________________________________
//
CInsectDToken::CInsectDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCardKeyword()->AddInfect(FALSE);

// Used by Carrion Call, Trigon of Infestation, Phyrexian Swarmlord
}
//____________________________________________________________________________
//
CJuggernautToken::CJuggernautToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Juggernaut"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Juggernaut), nID,
		_T("4"),
		Power(4), Life(4))
{
}

//____________________________________________________________________________
//
CKaldraToken::CKaldraToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kaldra"), CardType::_LegendaryCreature | CardType::Token,
		CREATURE_TYPE(Avatar), nID,
		_T(""),
		Power(4), Life(4))
{	
}

//____________________________________________________________________________
//
CKavuToken::CKavuToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kavu"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Kavu), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CKelpToken::CKelpToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kelp"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Plant, Wall), nID,
		_T(""),
		Power(0), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	AddCardType(CardType::Blue, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CKithkinSoldierToken::CKithkinSoldierToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kithkin Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CKnightAToken::CKnightAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Knight"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Knight), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFirstStrike(FALSE);

// Used by Hunted Dragon
}

//____________________________________________________________________________
//
CKnightBToken::CKnightBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Knight"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Knight), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// Used by Waylay
}

//____________________________________________________________________________
//
CKoboldsOfKherKeepToken::CKoboldsOfKherKeepToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kobolds of Kher Keep"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Kobold), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CKorSoldierToken::CKorSoldierToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kor Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Kor, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CLlanowarElvesToken::CLlanowarElvesToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Llanowar Elves"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Elf, Druid), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, GREEN_MANA_TEXT));

		cpAbility->AddTapCost();

		AddAbility(cpAbility.GetPointer());
	}

// Used by Llanowar Mentor
}

//____________________________________________________________________________
//
CMaritLageToken::CMaritLageToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Marit Lage"), CardType::_LegendaryCreature | CardType::Token,
		CREATURE_TYPE(Avatar), nID,
		_T(""),
		Power(20), Life(20))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddIndestructible(FALSE);
}

//____________________________________________________________________________
//
CMerfolkWizardToken::CMerfolkWizardToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Merfolk Wizard"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Merfolk, Wizard), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CMetallicSliverToken::CMetallicSliverToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Metallic Sliver"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Sliver), nID,
		_T(""),
		Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CMinorDemonToken::CMinorDemonToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Minor Demon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Demon), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black | CardType::Red, CardType::_ColorMask);

// Used by Boris Devilboon
}

//____________________________________________________________________________
//
CMorphToken::CMorphToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Morph"), CardType::Creature,
		CREATURE_TYPE(Null), nID,
		_T("3"),
		Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CMyrToken::CMyrToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Myr"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Myr), nID,
		_T(""),
		Power(1), Life(1))
{
}

//____________________________________________________________________________
//
COozeAToken::COozeAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ooze"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ooze), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
COozeBToken::COozeBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ooze"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ooze), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetToThisZoneOnly(ZoneId::Graveyard);

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Ooze C"), 2875, 2);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
COozeCToken::COozeCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ooze"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ooze), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CPegasusToken::CPegasusToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Pegasus"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Pegasus), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CPentaviteToken::CPentaviteToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Pentavite"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Pentavite), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CPestToken::CPestToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Pest"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Pest), nID,
		_T(""),
		Power(0), Life(1))
{
}

//____________________________________________________________________________
//
CPincherToken::CPincherToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Pincher"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Pincher), nID,
		_T(""),
		Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CPlantToken::CPlantToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Plant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Plant), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CPlantZombieToken::CPlantZombieToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Plant Zombie"), CardType::Creature,
	CREATURE_TYPE2(Plant, Zombie), nID,
	_T(""),
	Power(0), Life(0))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

		//cpAbility->StartListening(GetController()); //causes a crash

		AddAbility(cpAbility.GetPointer());
	}
}
void CPlantZombieToken::Move(CZone* pToZone,
					  const CPlayer* pByPlayer,
					  MoveType moveType,
					  CardPlacement cardPlacement, BOOL can_dredge)
{
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	if (pToZone->GetZoneId() != ZoneId::Battlefield) return;

	for (int i = 0; i < GetAbilityCount(); ++i)
	{
		CTriggeredChgPwrTghWhenCardPlayedAbility* pCTriggeredChgPwrTghWhenCardPlayedAbility = dynamic_cast<CTriggeredChgPwrTghWhenCardPlayedAbility*>(GetAbility(i));
		if (!pCTriggeredChgPwrTghWhenCardPlayedAbility) //|| !pSpecialProtectionAbility->GetEnabled())
			continue;

		pCTriggeredChgPwrTghWhenCardPlayedAbility->ForceStart(TRUE);
		
	}
}

//____________________________________________________________________________
//
CPrismToken::CPrismToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Prism"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Prism), nID,
		_T(""),
		Power(0), Life(1))
{
}

//____________________________________________________________________________
//
CRatAToken::CRatAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Rat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Rat), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// SHM version; used by Plague of Vermin
}

//____________________________________________________________________________
//
CReflectionToken::CReflectionToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Reflection"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Reflection), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSandToken::CSandToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sand"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Sand), nID,
		_T(""),
		Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CSaprolingAToken::CSaprolingAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSaprolingBToken::CSaprolingBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSaprolingCToken::CSaprolingCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
	CREATURE_TYPE(Saproling), nID,
	_T(""),
	Power(0), Life(0))
{	
	AddCardType(CardType::Green, CardType::_ColorMask);
	{
			
		counted_ptr<CTriggeredCounterExternalPwrTghAbility> cpAbility(
		::CreateObject<CTriggeredCounterExternalPwrTghAbility>(this, FADE_COUNTER, this));

		m_pAbility = cpAbility.GetPointer();

		AddAbility(cpAbility.GetPointer());
	
	}
}
void CSaprolingCToken::Move(CZone* pToZone,
					  const CPlayer* pByPlayer,
					  MoveType moveType,
					  CardPlacement cardPlacement, BOOL can_dredge)
{
	if (GetCardType().IsCreature() && GetZone()->GetZoneId() == ZoneId::_Tokens &&
		pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		// Get currently resolving stack action
		const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();

		CCard* pCard = pAction->GetOriginatingCard();

		//const CStackAbilityAction* pAction = GetGame()->GetStack().GetCurrentStackAction();

		m_pAbility->SetListenTo(pCard);
		if (pCard)
		m_pAbility->ForceStart(TRUE);
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);

	//if (pToZone->GetZoneId() != ZoneId::Battlefield) return;

	
	
}

//____________________________________________________________________________
//
CSerfToken::CSerfToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Serf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Serf), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CShapeshifterToken::CShapeshifterToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Shapeshifter"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Shapeshifter), nID,
		_T(""),
		Power(2), Life(2))
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CShapeshifterAToken::CShapeshifterAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Shapeshifter"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Shapeshifter), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCardKeyword()->AddChangeling(FALSE);
}

//____________________________________________________________________________
//
CSheepToken::CSheepToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sheep"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Sheep), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
//Skeleton A+B use the same card art: 2718
CSkeletonAToken::CSkeletonAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Skeleton"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Skeleton), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				BLACK_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
//Skeleton A+B use the same card art: 2718
CSkeletonBToken::CSkeletonBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Skeleton"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Skeleton), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	{
		counted_ptr<CRegenerationAbility> cpAbility(
			::CreateObject<CRegenerationAbility>(this,
				BLACK_MANA_TEXT));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSliverToken::CSliverToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sliver"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Sliver), nID,
		_T(""),
		Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CSnakeCToken::CSnakeCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ZEN version; used by Bestial Menace
// Future use: Cobra Trap
}

//____________________________________________________________________________
//
CSnakeAToken::CSnakeAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green | CardType::Blue, CardType::_ColorMask);

// Used by Patagia Viper
}

//____________________________________________________________________________
//
CSnakeBToken::CSnakeBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	typedef
		TTriggeredAbility< CTriggeredPoisonAbility, CWhenSelfDamageDealt,
							CWhenSelfDamageDealt::PlayerEventCallback, 
							&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	cpAbility->SetPoisonCount(1);
	cpAbility->SetReplacePoisonCount(FALSE);

	AddAbility(cpAbility.GetPointer());

// Used by Serpent Generator
}

//____________________________________________________________________________
//
CSpikeToken::CSpikeToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spike"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spike), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSoldierAToken::CSoldierAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSoldierBToken::CSoldierBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(5))
{
	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSoldierAllyToken::CSoldierAllyToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier Ally"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Soldier, Ally), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSparkElementalToken::CSparkElementalToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spark Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}

// Used by Sparkspitter
}

//____________________________________________________________________________
//
CSpawnToken::CSpawnToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spawn"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Spawn), nID,
		_T(""),
		Power(2), Life(2))
{
}

//____________________________________________________________________________
//
CSpawnwritheToken::CSpawnwritheToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spawnwrithe"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T("2") GREEN_MANA_TEXT, Power(2), Life(2))
{
	GetCreatureKeyword()->AddTrample(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredCreateTokenAbility, CWhenSelfDamageDealt,
								CWhenSelfDamageDealt::PlayerEventCallback, 
								&CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->GetTrigger().SetCombatDamageOnly();

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->SetCreateTokenOption(TRUE, _T("Spawnwrithe"), TOKEN_ID_BY_NAME, 1);

		cpAbility->AddAbilityTag(AbilityTag::TokenCreation);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CSpiderAToken::CSpiderAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spider"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spider), nID,
		_T(""),
		Power(2), Life(4))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CSpiritAToken::CSpiritAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
}

//____________________________________________________________________________
//
CSpiritBToken::CSpiritBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Spirit), nID,
		_T("3"),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CSpiritCToken::CSpiritCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White | CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSpiritDToken::CSpiritDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSpiritEToken::CSpiritEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSpiritFToken::CSpiritFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T("3"),
		Power(1), Life(5))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSpiritGToken::CSpiritGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSpiritHToken::CSpiritHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(3), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CSpiritIToken::CSpiritIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	counted_ptr<CPumpAbility> cpAbility(
		::CreateObject<CPumpAbility>(this,
			BLACK_MANA_TEXT,
			Power(+1), Life(+1)));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CSpiritJToken::CSpiritJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(2), Life(5))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	typedef
		TTriggeredAbility< CTriggeredModifyLifeAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::DamageEventCallback, &CWhenSelfDamageDealt::SetDamageEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSpiritJToken::SetTriggerContext));

	cpAbility->AddAbilityTag(AbilityTag::LifeGain);

	AddAbility(cpAbility.GetPointer());
}

bool CSpiritJToken::SetTriggerContext(CTriggeredModifyLifeAbility::TriggerContextType& triggerContext, Damage damage) const
{
	triggerContext.m_LifeModifier.SetLifeDelta(Life(-damage.m_nLifeDelta));
	return true;
}

//____________________________________________________________________________
//
CSpiritKToken::CSpiritKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(6), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CSpiritLToken::CSpiritLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Legendary | CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(8), Life(12))
{
	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CSpiritMToken::CSpiritMToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spirit), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
//Squirrel + Squirrel B use the same card art: 2769
CSquirrelToken::CSquirrelToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Squirrel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Squirrel), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
//Squirrel + Squirrel B use the same card art: 2769
//This token is needed until someone made that "flag target" stuff at "Form of the Squirrel" card.
CSquirrelBToken::CSquirrelBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Squirrel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Squirrel), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	{
		//You lose the game when it leaves play.
		typedef
			TTriggeredAbility< CTriggeredLoseGameAbility, CWhenSelfInplay,
				CWhenSelfInplay::EventCallback, &CWhenSelfInplay::SetLeaveEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CStanggTwinToken::CStanggTwinToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Stangg Twin"), CardType::_LegendaryCreature | CardType::Token,
		CREATURE_TYPE2(Human, Warrior), nID,
		_T(""),
		Power(3), Life(4))
{
	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);
// Used by Stangg
}

//____________________________________________________________________________
//
CThopterAToken::CThopterAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Thopter"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Thopter), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CThopterBToken::CThopterBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Thopter"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Thopter), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CThrullToken::CThrullToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Thrull"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Thrull), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CThrullBToken::CThrullBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Thrull"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Thrull), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CTreefolkAToken::CTreefolkAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Treefolk), nID,
		_T(""),
		Power(5), Life(6))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CTreefolkShamanToken::CTreefolkShamanToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk Shaman"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Treefolk, Shaman), nID,
		_T(""),
		Power(2), Life(5))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CTriskelaviteToken::CTriskelaviteToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Triskelavite"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Triskelavite), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);

	{
		counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility(
			::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(this,
				_T(""),
				new AnyCreatureComparer, TRUE,
				Life(-1), PreventableType::Preventable));

		cpAbility->AddSacrificeCost();

		cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CTuktukTheReturnedToken::CTuktukTheReturnedToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Tuktuk the Returned"), CardType::_LegendaryCreature | CardType::Artifact | CardType::Token, 
		CREATURE_TYPE2(Goblin, Golem), nID,
		_T(""),
		Power(5), Life(5))
{
// Used by Tuktuk the Explorer
}

//____________________________________________________________________________
//
CVampireAToken::CVampireAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Vampire"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Vampire), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CVampireBToken::CVampireBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Vampire"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Vampire), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Kalitas, Bloodchief of Ghet
}

//____________________________________________________________________________
//
CVampireCToken::CVampireCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Vampire"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Vampire), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	//GetCardKeyword()->AddLifelink(FALSE);
	{ //workaround to give it lifelink
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new SpecificCardComparer(this),
				Power(+0), Life(+0)));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Lifelink);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CVojaToken::CVojaToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Voja"), CardType::_LegendaryCreature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CWallToken::CWallToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wall"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wall), nID,
		_T(""),
		Power(5), Life(5))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	AddCardType(CardType::Blue, CardType::_ColorMask);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWallBToken::CWallBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wall"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Wall), nID,
		_T(""),
		Power(2), Life(6))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddDefender(FALSE);
}

//____________________________________________________________________________
//
CWarriorAToken::CWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature/* | CardType::Token*/,
		CREATURE_TYPE(Warrior), nID,
		_T(""),
		Power(2), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFirstStrike(FALSE);
}

//____________________________________________________________________________
//
CWaspToken::CWaspToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wasp"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
// Used by The Hive
}

//____________________________________________________________________________
//
CWolfAToken::CWolfAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CWolfBToken::CWolfBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	{
		counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
			::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
				ZoneId::Graveyard,
				new CardNameComparer(_T("Sound the Call"))));

		cpAbility->SetListenToAllPlayersZones();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CWolfCToken::CWolfCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wolf), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CWoodToken::CWoodToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wood"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wall), nID,
		_T(""),
		Power(0), Life(1))
{
	GetCreatureKeyword()->AddDefender(FALSE);

	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CWormToken::CWormToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Worm"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Worm), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black | CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CWurmAToken::CWurmAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wurm"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wurm), nID,
		_T(""),
		Power(6), Life(6))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CWurmBToken::CWurmBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wurm"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wurm), nID,
		_T(""),
		Power(6), Life(6))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CWurmCToken::CWurmCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wurm"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wurm), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

void CWurmCToken::Move(CZone* pToZone,
					  const CPlayer* pByPlayer,
					  MoveType moveType,
					  CardPlacement cardPlacement, BOOL can_dredge)
{
	// Boost before moving into battlefield (before calling __super::Move())
	if (GetCardType().IsCreature() && GetZone()->GetZoneId() == ZoneId::_Tokens &&
		pToZone->GetZoneId() == ZoneId::Battlefield)
	{
		CZone* pSurvey = GetController()->GetZoneById(ZoneId::Battlefield);
		int nPower = CCardFilter::GetFilter(_T("lands"))->CountIncluded(pSurvey->GetCardContainer());

		SetPrintedPower(Power(nPower));
		SetPrintedToughness(Life(nPower));
	}

	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CWurmDToken::CWurmDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wurm"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Wurm), nID,
		_T(""),
		Power(3), Life(3))
{
	GetCardKeyword()->AddDeathtouch(FALSE);
}

//____________________________________________________________________________
//
CWurmEToken::CWurmEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wurm"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Wurm), nID,
		_T(""),
		Power(3), Life(3))
{
	GetCardKeyword()->AddLifelink(FALSE);
}

//____________________________________________________________________________
//
CZombieToken::CZombieToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CZombieWizardToken::CZombieWizardToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie Wizard"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Zombie, Wizard), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black | CardType::Blue, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CZombieGiantToken::CZombieGiantToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Zombie Giant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Zombie, Giant), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Quest for the Gravelord
}

//____________________________________________________________________________
//
// Effect cards
//____________________________________________________________________________
//
CInterventionPactEffectToken::CInterventionPactEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Intervention Pact Effect"), CardType::GlobalEnchantment, nID)
	//, m_cpEventListener1(VAR_NAME(m_cpListener), ResolutionCompletedEventSource::Listener::EventCallback(this,
		//	&CSlaughterPactEffectToken::OnResolutionCompleted1))	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CInterventionPactEffectToken::CreateTemporaryAbility),
			_T("1") WHITE_MANA_TEXT WHITE_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CInterventionPactEffectToken::PreRemoveAbilityCallback));

	//cpAbility->GetResolutionModifier().CCardModifiers::push_back(new CMoveCardModifier(ZoneId::_Effects, ZoneId::_Tokens, TRUE)); // lost of life, not preventable	
	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CInterventionPactEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);
	//cpAbility->GetResolutionCompletedEventSource()->AddListener(m_cpEventListener1.GetPointer());

	AddAbility(cpAbility.GetPointer());
}

CCard* CInterventionPactEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CInterventionPactEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CInterventionPactEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CInterventionPactEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

/*void CSlaughterPactEffectToken::OnResolutionCompleted1(const CAbilityAction* pAbilityAction, BOOL bResult)
{
	CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::_Effects, ZoneId::_Tokens, TRUE);
	pModifier.ApplyTo((CCard*)this);
}*/

//____________________________________________________________________________
//
CPactofNegationEffectToken::CPactofNegationEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Pact of Negation Effect"), CardType::GlobalEnchantment, nID)
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CPactofNegationEffectToken::CreateTemporaryAbility),
			_T("3") BLUE_MANA_TEXT BLUE_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CPactofNegationEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPactofNegationEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CPactofNegationEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CPactofNegationEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CPactofNegationEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CPactofNegationEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CPactOfTheTitanEffectToken::CPactOfTheTitanEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Pact of the Titan Effect"), CardType::GlobalEnchantment, nID)	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CPactOfTheTitanEffectToken::CreateTemporaryAbility),
			_T("4") RED_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CPactOfTheTitanEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CPactOfTheTitanEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CPactOfTheTitanEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CPactOfTheTitanEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CPactOfTheTitanEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CPactOfTheTitanEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSlaughterPactEffectToken::CSlaughterPactEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Slaughter Pact Effect"), CardType::GlobalEnchantment, nID)	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CSlaughterPactEffectToken::CreateTemporaryAbility),
			_T("2") BLACK_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CSlaughterPactEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlaughterPactEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CSlaughterPactEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CSlaughterPactEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CSlaughterPactEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CSlaughterPactEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CSummonersPactEffectToken::CSummonersPactEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Summoner's Pact Effect"), CardType::GlobalEnchantment, nID)	
{
	typedef
		TTriggeredAbility< CTriggeredCreateTemporaryAbilityAbility, CWhenNodeChanged > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));

	cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
	cpAbility->SetCreateAbilityCallback(
		CCreateTempTriggeredAbilityAbility::CreateAbilityCallback2(this,
			&CSummonersPactEffectToken::CreateTemporaryAbility),
			_T("2") GREEN_MANA_TEXT GREEN_MANA_TEXT,
		CCreateTempTriggeredAbilityAbility::PreRemoveAbilityCallback(this,
			&CSummonersPactEffectToken::PreRemoveAbilityCallback));

	cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSummonersPactEffectToken::SetTriggerContext));
	cpAbility->SetPlayableFrom(ZoneId::_Effects);

	AddAbility(cpAbility.GetPointer());
}

CCard* CSummonersPactEffectToken::CreateTemporaryAbility()
{
	return this;
}

void CSummonersPactEffectToken::PreRemoveAbilityCallback(CCard* pCard, CPlayer* pTriggeredPlayer)
{
	CPlayerLostModifier pModifier;
	pModifier.ApplyTo(pTriggeredPlayer);
}

bool  CSummonersPactEffectToken::SetTriggerContext(CTriggeredCreateTemporaryAbilityAbility::TriggerContextType& triggerContext, CNode* pToNode) const
{
	return (GetZone()->GetZoneId() == ZoneId::_Effects);
}

void CSummonersPactEffectToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CCastExileEmblemToken::CCastExileEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Cast Exile Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredTargetAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Battlefield);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);

		cpAbility->GetTargeting().SetSubjectZoneId(ZoneId::Battlefield);		
		cpAbility->GetTargeting().GetSubjectCardFilter().AddComparer(new TrueCardComparer);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CCastExileEmblemToken::SetTriggerContext));		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CCastExileEmblemToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}



//____________________________________________________________________________
//
CMountainDamageEmblemToken::CMountainDamageEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Mountain Damage Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Mountain, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CMountainDamageEmblemToken::CreateAbility)));	


		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}
counted_ptr<CAbility> CMountainDamageEmblemToken::CreateAbility(CCard* pCard)
{
counted_ptr<CActivatedAbility<CTargetChgLifeSpell>> cpAbility( 
		::CreateObject<CActivatedAbility<CTargetChgLifeSpell>>(pCard,
			_T(""),
			new AnyCreatureComparer, TRUE,
			Life(-1), PreventableType::Preventable));	

	cpAbility->AddTapCost();

	cpAbility->SetDamageType(DamageType::AbilityDamage | DamageType::NonCombatDamage);

	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CChannelEffectToken::CChannelEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Channel Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
	counted_ptr<CManaProductionAbility> cpAbility(
		::CreateObject<CManaProductionAbility>(this, _T(""), AbilityType::Activated, _T("1")));
	ATLASSERT(cpAbility);

		cpAbility->AddPayLifeDeltaCost(Life(-1));

		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CGolemDToken::CGolemDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Golem), nID,
		_T(""),
		Power(3), Life(3))
{

// SOM version; used by Golem Foundry
// Future use: Precursor Golem
}

//____________________________________________________________________________
//
CGlimpseofNatureEffectToken::CGlimpseofNatureEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Glimpse of Nature Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CGlimpseofNatureEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CGlimpseofNatureEffectToken::SetTriggerContext(CTriggeredDrawCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CScoutsWarningEffectToken::CScoutsWarningEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Scout's Warning Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("creatures")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CScoutsWarningEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CScoutsWarningEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CQuickenEffectToken::CQuickenEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Quicken Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Sorcery, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetPredefinedFilter(CCardFilter::GetFilter(_T("sorcery cards")));
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);		

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CQuickenEffectToken::SetTriggerContext));				

		AddAbility(cpAbility.GetPointer());
	}
}

bool CQuickenEffectToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
											CCard* pCard) const
{
	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CKnightCToken::CKnightCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Knight"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Knight), nID,
		_T(""),
		Power(2), Life(2))
{
	GetCardKeyword()->AddProtection(CardKeyword::ProtectionFromWhite, FALSE);
	GetCreatureKeyword()->AddFlanking(FALSE);
	GetCreatureKeyword()->AddHaste(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenSelfAttackedBlocked, 
			CWhenSelfAttackedBlocked::BlockEventCallback, 
			&CWhenSelfAttackedBlocked::SetBlockedEachTimeEventCallback > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetBlockFilter().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetBlockFilter().GetCustomFilter().AddComparer(new NegateCardComparer(new CreatureKeywordComparer(CreatureKeyword::Flanking, false)));

		cpAbility->GetLifeModifier().SetLifeDelta(Life(-1));
		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->GetLifeModifier().SetDamageType(DamageType::NotDealingDamage);
		cpAbility->GetLifeModifier().SetPreventable(PreventableType::NotPreventable);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CKnightCToken::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		AddAbility(cpAbility.GetPointer());
	}

	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Riftmarked Knight
}

bool CKnightCToken::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
		CCreatureCard* pCreature, CCreatureCard* pCreature2, int nCount, int nIndex) const
{
	triggerContext.m_pCreature = pCreature2;

	return true;
}

//____________________________________________________________________________
//
CGermToken::CGermToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Germ"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Germ), nID,
        _T(""),
        Power(0), Life(0))
{
    AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Bonehoard, Flayer Husk, Mortarpod, Skinwing, Strandwalker, Batterskull, Lashwrithe, Necropouncer, Sickleslicer
}

//____________________________________________________________________________
//
CGolemCToken::CGolemCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Golem), nID,
		_T(""),
		Power(9), Life(9))
{
// Used by Titan Forge
}

//____________________________________________________________________________
//
CPraetorsCounselEffectToken::CPraetorsCounselEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Praetor's Counsel Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CFlashOfDefianceEffectToken::CFlashOfDefianceEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Flash of Defiance Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddComparer(new CardTypeComparer(CardType::Green | CardType::White, false));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CFalterEffectToken::CFalterEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Falter Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CreatureKeywordComparer(CreatureKeyword::Flying, false));

		cpAbility->SetListenToKeyword();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }

// Used by Falter
}

//____________________________________________________________________________
//
CHeroOfOxidRidgeEffectToken::CHeroOfOxidRidgeEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Hero of Oxid Ridge Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CreaturePowerComparer<std::less<int>>(2),
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CTurtleToken::CTurtleToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Turtle"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Turtle), nID,
		_T("3"),
		Power(3), Life(3))
{
}

//____________________________________________________________________________
//
CThePiecesAreComingTogetherEffectToken::CThePiecesAreComingTogetherEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("The Pieces Are Coming Together Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

		{
		counted_ptr<CConsLessManaEnchantment> cpAbility(
		::CreateObject<CConsLessManaEnchantment>(this,
			new CardTypeComparer(CardType::Artifact, false),
			_T("2")));
		ATLASSERT(cpAbility);
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
		}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CGolemBToken::CGolemBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Golem), nID,
		_T(""),
		Power(4), Life(6))
{
// Used by The Iron Guardian Stirs
}

//____________________________________________________________________________
//
CApproachMyMoltenRealmEffectToken::CApproachMyMoltenRealmEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Approach My Molten Realm Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::MultiplyDamage, 1));

		cpAbility->SetMultipleEffectType(TRUE);
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerOnly();
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CYourPunyMindsCannotFathomEffectToken::CYourPunyMindsCannotFathomEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Your Puny Minds Cannot Fathom Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

		{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
	//	cpAbility->SetAffectControllerCardsOnly();
		
		AddAbility(cpAbility.GetPointer());
		}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CInsectEToken::CInsectEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddDeathtouch(FALSE);

// Used by Hornet Queen
}

//____________________________________________________________________________
//
CUramiToken::CUramiToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Urami"), CardType::_LegendaryCreature | CardType::Token,
		CREATURE_TYPE2(Demon, Spirit), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Tomb of Urami
}

//____________________________________________________________________________
//
CGriffinToken::CGriffinToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Griffin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Griffin), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Griffin Guide
}

//____________________________________________________________________________
//
CHomunculusBToken::CHomunculusBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Homunculus"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Homunculus), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

// Used by Stitcher's Apprentice
}

//____________________________________________________________________________
//
CSpiderBToken::CSpiderBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Spider"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Spider), nID,
		_T(""),
		Power(1), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddReach(FALSE);
}

//____________________________________________________________________________
//
CElementalCatToken::CElementalCatToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental Cat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Elemental, Cat), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Firecat Blitz
}

//____________________________________________________________________________
//
CCamaridAToken::CCamaridAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Camarid"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Camarid), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

// FEM version; used by Homarid Spawning Bed
}

//____________________________________________________________________________
//
CGiantWarriorAToken::CGiantWarriorAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Giant Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Giant, Warrior), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red | CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Giantbaiting
}

//____________________________________________________________________________
//
CBirdFToken::CBirdFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White | CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// Used by Dovescape and Pride of the Clouds
}

//____________________________________________________________________________
//
CHumanAToken::CHumanAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Human"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Human), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CPowerPumpEmblemToken::CPowerPumpEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Power Pump Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+1), Life(+0), CreatureKeyword::Null));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}
void CPowerPumpEmblemToken::Move(CZone* pToZone,
							const CPlayer* pByPlayer,
							MoveType moveType,
							CardPlacement cardPlacement, BOOL can_dredge)
{
	
	if (pToZone->GetZoneId() == ZoneId::Battlefield)
		__super::Move(GetOwner()->GetZoneById(ZoneId::_Effects), pByPlayer, MoveType::Others);

	else
	__super::Move(pToZone, pByPlayer, moveType, cardPlacement, can_dredge);
}

//____________________________________________________________________________
//
CAngelDToken::CAngelDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// ISD version; used by Geist of Saint Traft
}

//____________________________________________________________________________
//
CBubblingMuckEffectToken::CBubblingMuckEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Bubbling Muck Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CProdExtraManaEnchantment> cpAbility(
		::CreateObject<CProdExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Swamp, false),
			BLACK_MANA_TEXT));
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CHighTideEffectToken::CHighTideEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("High Tide Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CProdExtraManaEnchantment> cpAbility(
		::CreateObject<CProdExtraManaEnchantment>(this,
			new CardTypeComparer(CardType::Island, false),
			BLUE_MANA_TEXT));
		
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CTamiyoEmblemToken::CTamiyoEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Tamiyo Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	
	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->GetTrigger().SetToControllerOnly(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Hand);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CTamiyoEmblemToken::SetTriggerContext));		
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Graveyard, ZoneId::Hand));

		AddAbility(cpAbility.GetPointer());
	}
}

bool CTamiyoEmblemToken::SetTriggerContext(CTriggeredMoveCardAbility::TriggerContextType& triggerContext,
										 CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType) const
{
	triggerContext.m_pCard = pCard;

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

//____________________________________________________________________________
//
CWindingCanyonsEffectToken::CWindingCanyonsEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Winding Canyons Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new CardTypeComparer(CardType::Creature, false),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CAlchemistsRefugeEffectToken::CAlchemistsRefugeEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Alchemist's Refuge Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new NegateCardComparer(new CardTypeComparer(CardType::_Land, false)),
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Pflash);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);
		cpAbility->SetAffectCardsInTheseZones(ZoneId::Hand | ZoneId::Stack | ZoneId::Graveyard | ZoneId::Library | ZoneId::Exile | ZoneId::_ExileFaceDown | ZoneId::_Effects);

		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CHumanBToken::CHumanBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Human"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Human), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::EndStep));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
		cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

		cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

		AddAbility(cpAbility.GetPointer());
	}

// Used by Thatcher Revolt
}

//____________________________________________________________________________
//
CDrakeBToken::CDrakeBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Drake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Drake), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Talrand's Invocation and Talrand, Sky Summoner
}

//____________________________________________________________________________
//
CBoarToken::CBoarToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Boar"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Boar), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green	, CardType::_ColorMask);

// Used by Brindle Shoat
}

//____________________________________________________________________________
//
CSwampFourManaEmblemToken::CSwampFourManaEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Swamp Four Mana Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
			new CardTypeComparer(CardType::Swamp, false),	
				Power(+0), Life(+0), CreatureKeyword::Null));

		cpAbility->GetOtherCardModifiers().push_back(new CCardAbilityModifier(
			CCardAbilityModifier::CreateAbilityCallback(this,
				&CSwampFourManaEmblemToken::CreateAbility)));	


		cpAbility->SetAffectControllerCardsOnly();
		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
}
counted_ptr<CAbility> CSwampFourManaEmblemToken::CreateAbility(CCard* pCard)
{
		counted_ptr<CManaProductionAbility> cpAbility(
			::CreateObject<CManaProductionAbility>(pCard, _T(""), AbilityType::Activated, BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();


	return counted_ptr<CAbility>(cpAbility.GetPointer());
}
//____________________________________________________________________________
//
CHellionAToken::CHellionAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hellion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hellion), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// Used by Hellion Crucible
}

//____________________________________________________________________________
//
CHellionBToken::CHellionBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hellion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hellion), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Hellion Eruption
}

//____________________________________________________________________________
//
CHippoToken::CHippoToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hippo"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hippo), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CElementalKToken::CElementalKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(8), Life(8))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);	

	GetCreatureKeyword()->AddVigilance(FALSE);

// Used by Grove of the Guardian
}

//____________________________________________________________________________
//
CKnightDToken::CKnightDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Knight"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Knight), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddVigilance(FALSE);

// Used by Knightly Valor, Security Blockade, Selesnya Charm, Knight Watch
}

//____________________________________________________________________________
//
CWireflyToken::CWireflyToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wirefly"), CardType::_ArtifactCreature | CardType::Token, 
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(2), Life(2))
{
	GetCreatureKeyword()->AddFlying(FALSE);
}

//____________________________________________________________________________
//
CWurmFToken::CWurmFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wurm"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Wurm), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CRhinoToken::CRhinoToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Rhino"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Rhino), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
CWolfDToken::CWolfDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wolf"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Wolf), nID,
		_T("3"),
		Power(3), Life(3))
{
	AddCardType(CardType::Green | CardType::White, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CTreefolkBToken::CTreefolkBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Treefolk"), CardType::_ArtifactCreature/* | CardType::Token*/,
		CREATURE_TYPE(Treefolk), nID,
		_T("3"),
		Power(5), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddTrample(FALSE);
}

//____________________________________________________________________________
//
COgreToken::COgreToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ogre"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ogre), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CDragonDToken::CDragonDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(6), Life(6))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Utvara Hellkite
}

//____________________________________________________________________________
//
CAssassinToken::CAssassinToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Assassin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Assassin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	typedef
		TTriggeredAbility< CTriggeredLoseGameAbility, CWhenSelfDamageDealt, 
							CWhenSelfDamageDealt::PlayerEventCallback, &CWhenSelfDamageDealt::SetPlayerEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->GetTrigger().SetCombatDamageOnly();
	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CJaceArchitectOfThoughtEffectToken::CJaceArchitectOfThoughtEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Jace, Architect of Thought Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredModifyCreatureAbility, CWhenAttackedBlockedAny,
								CWhenAttackedBlockedAny::PlayerEventCallback, &CWhenAttackedBlockedAny::SetAttackingEventCallback> TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorOpponentsOnly(TRUE);

		cpAbility->GetPowerModifier().SetPowerDelta(Power(-1));
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CJaceArchitectOfThoughtEffectToken::SetTriggerContext));

		cpAbility->AddAbilityTag(AbilityTag::CreatureChange);

		cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToParameter1);

		cpAbility->GetTrigger().SetTriggerinZone(ZoneId::_Effects);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CJaceArchitectOfThoughtEffectToken::SetTriggerContext(CTriggeredModifyCreatureAbility::TriggerContextType& triggerContext, 
										 CCreatureCard* pCreature,
										 AttackSubject attacked) const
{
	triggerContext.m_pCreature = pCreature;

	return true;
}

//____________________________________________________________________________
//
CRuthlessInvasionEffectToken::CRuthlessInvasionEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Ruthless Invasion Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer,
				Power(+0), Life(+0), CreatureKeyword::CantBlock));

		cpAbility->GetEnchantmentCardFilter().AddNegateComparer(new CardTypeComparer(CardType::Artifact, false));

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CTombspawnToken::CTombspawnToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Tombspawn"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Zombie), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CSurvivorToken::CSurvivorToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Survivor"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Survivor), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CWarriorBToken::CWarriorBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Survivor), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CChandraTheFirebrandEffectToken::CChandraTheFirebrandEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Chandra, the Firebrand Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	bFired = false;

	{
		typedef
			TTriggeredAbility< CTriggeredCopyCastAbility1, CWhenSpellCastAny > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);
		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddComparer(new CardTypeComparer(CardType::Instant | CardType::Sorcery, false));
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CChandraTheFirebrandEffectToken::SetTriggerContext));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CChandraTheFirebrandEffectToken::SetTriggerContext(CTriggeredCopyCastAbility1::TriggerContextType& triggerContext, 
										 CCard* pCard)
{
	if (bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = true;

	triggerContext.m_pCard = pCard;

	const CStack& stack = m_pGame->GetStack();

	for (int l = 0; l < stack.GetStackSize(); ++l)
	{
						triggerContext.m_pStackAction = const_cast<CStackAbilityAction*>(stack.GetStackAction(l).GetPointer());
						if (triggerContext.m_pStackAction->IsSpell() && (triggerContext.m_pStackAction->GetAbility()->GetCard() == pCard))
						{
							break;
						}

	}
	return true;
}

//____________________________________________________________________________
//
CSlowtripEffectToken::CSlowtripEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Slowtrip Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	bPrimed = false;
	bFired = false;

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlowtripEffectToken::SetTriggerContext1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlowtripEffectToken::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CSlowtripEffectToken::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CSlowtripEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bPrimed || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bPrimed = true;

	return true;
}

bool CSlowtripEffectToken::SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bPrimed || bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = true;

	return true;
}

bool CSlowtripEffectToken::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bPrimed || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CArcaneDenialEffectToken::CArcaneDenialEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Arcane Denial Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	bPrimed = false;
	bFired = false;

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcaneDenialEffectToken::SetTriggerContext1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcaneDenialEffectToken::SetTriggerContext2));
		cpAbility->GetResolutionModifier().CPlayerModifiers::push_back(new CDrawCardModifier(GetGame(), MinimumValue(0), MaximumValue(2)));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CArcaneDenialEffectToken::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CArcaneDenialEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bPrimed || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bPrimed = true;

	return true;
}

bool CArcaneDenialEffectToken::SetTriggerContext2(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bPrimed || bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = true;

	return true;
}

bool CArcaneDenialEffectToken::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bPrimed || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CLatNamsLegacyEffectToken::CLatNamsLegacyEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("LatNamsLegacy Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);
	bPrimed = false;
	bFired = false;

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLatNamsLegacyEffectToken::SetTriggerContext1));

		cpAbility->SetSkipStack(TRUE);
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredDrawCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this, NodeId::UpkeepStep, FALSE));
		
		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	
		cpAbility->SetDrawCount(2);

		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLatNamsLegacyEffectToken::SetTriggerContext2));

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::CleanupStep2, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CLatNamsLegacyEffectToken::SetTriggerContext3));
		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CLatNamsLegacyEffectToken::SetTriggerContext1(CTriggeredAbility<>::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (bPrimed || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bPrimed = true;

	return true;
}

bool CLatNamsLegacyEffectToken::SetTriggerContext2(CTriggeredDrawCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bPrimed || bFired || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	bFired = true;

	return true;
}

bool CLatNamsLegacyEffectToken::SetTriggerContext3(CTriggeredMoveCardAbility::TriggerContextType& triggerContext, CNode* pToNode)
{
	if (!bPrimed || (GetZone()->GetZoneId() != ZoneId::_Effects)) return false;

	return true;
}

//____________________________________________________________________________
//
CStarfishToken::CStarfishToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Starfish"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Starfish), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CElementalHToken::CElementalHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// Used by Research//Development
}

//____________________________________________________________________________
//
CClericToken::CClericToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cleric"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Cleric), nID,
		_T(""),
		Power(1), Life(1))
	, m_CardSelection(pGame, CSelectionSupport::SelectionCallback(this, &CClericToken::OnCardSelected))
{
	AddCardType(CardType::White | CardType::Black, CardType::_ColorMask);

	{
		counted_ptr<CActivatedAbility<CGenericSpell>> cpAbility(	
			::CreateObject<CActivatedAbility<CGenericSpell>>(this,
				_T("3") WHITE_MANA_TEXT BLACK_MANA_TEXT BLACK_MANA_TEXT));

		cpAbility->AddTapCost();
		cpAbility->AddSacrificeCost();

		cpAbility->SetResolutionStartedCallback(CAbility::ResolutionStartedCallback(this, &CClericToken::BeforeResolution));

		AddAbility(cpAbility.GetPointer());
	}

// Used by Deathpact Angel
}

bool CClericToken::BeforeResolution(CAbilityAction* pAction)
{
	CPlayer* pController = pAction->GetController();
	CZone* pGraveyard = pController->GetZoneById(ZoneId::Graveyard);
	CCardFilter m_CardFilter;
	m_CardFilter.SetComparer(new CardNameComparer(_T("Deathpact Angel")));
	
	int nDeadAngels = m_CardFilter.CountIncluded(pGraveyard->GetCardContainer());

	if (nDeadAngels > 0)
	{
		std::vector<SelectionEntry> entries;
		for (int i = 0; i < pGraveyard->GetSize(); ++i)
		{
			CCard* pCard = pGraveyard->GetAt(i);
			if (pCard->GetPrintedCardName() == _T("Deathpact Angel"))
			{
				SelectionEntry entry;

				entry.dwContext = (DWORD)pCard;
				entry.cpAssociatedCard = pCard;
									
				entry.strText.Format(_T("Return %s to the battlefield"),
					pCard->GetCardName(TRUE));

				entries.push_back(entry);
			}
		}
		m_CardSelection.AddSelectionRequest(entries, 1, 1, NULL, pController);
	}
	return true;
}

void CClericToken::OnCardSelected(const std::vector<SelectionEntry>& selection, int nSelectedCount, CPlayer* pSelectionPlayer, DWORD dwContext1, DWORD dwContext2, DWORD dwContext3, DWORD dwContext4, DWORD dwContext5)
{
	ATLASSERT(nSelectedCount == 1);

	for (std::vector<SelectionEntry>::const_iterator it = selection.begin(); it != selection.end(); ++it)
		if (it->bSelected)
		{
			CCard* pCard = (CCard*)it->dwContext;

			if (!m_pGame->IsThinking())
			{
				CString strMessage;
				strMessage.Format(_T("%s returns %s to the battlefield"), pSelectionPlayer->GetPlayerName(), pCard->GetCardName(TRUE));
				m_pGame->Message(
					strMessage,
					pSelectionPlayer->IsComputer() ? m_pGame->GetComputerImage() : m_pGame->GetHumanImage(),
					MessageImportance::High
					);
			}
			CMoveCardModifier pModifier = CMoveCardModifier(ZoneId::Graveyard, ZoneId::Battlefield, TRUE, MoveType::Others, pSelectionPlayer);
			
			pModifier.ApplyTo(pCard);
				
			return;
		}
}

//____________________________________________________________________________
//
CDomriRadeEmblemToken::CDomriRadeEmblemToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Domri Rade Emblem"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPwrTghAttrEnchantment> cpAbility(
			::CreateObject<CPwrTghAttrEnchantment>(this,
				new AnyCreatureComparer, 
				Power(+0), Life(+0),
				CreatureKeyword::DoubleStrike | CreatureKeyword::Trample | CreatureKeyword::Haste));

		cpAbility->GetCardKeywordMod().GetModifier().SetToAdd(CardKeyword::Hexproof);
		cpAbility->GetCardKeywordMod().GetModifier().SetOneTurnOnly(FALSE);

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);
		cpAbility->SetAffectControllerCardsOnly();

		AddAbility(cpAbility.GetPointer());
	}
}

//____________________________________________________________________________
//
CEnterTheInfiniteEffectToken::CEnterTheInfiniteEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Enter the Infinite Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		counted_ptr<CPlayerEffectEnchantment> cpAbility(
			::CreateObject<CPlayerEffectEnchantment>(this,
				PlayerEffectType::NoMaximumHandSize));

		cpAbility->SetAffectControllerOnly();

		cpAbility->SetEnchantmentActiveIn(ZoneId::_Effects);

		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
		cpAbility->GetTrigger().SetMonitorControllerOnly(TRUE);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

//____________________________________________________________________________
//
CBirdSoldierToken::CBirdSoldierToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Bird, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// USed by Flurry of Wings
}

//____________________________________________________________________________
//
CDuskmantleGuildmageEffectToken::CDuskmantleGuildmageEffectToken(CGame* pGame, UINT nID)
	: CEffectCard(pGame, _T("Duskmantle Guildmage Effect"), CardType::GlobalEnchantment, nID)	
{
	GetCardKeyword()->AddEmblem(FALSE);

	{
		typedef
			TTriggeredAbility< CTriggeredAbility<>, CWhenCardMoved > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this,
			ZoneId::_AllZones, ZoneId::Graveyard, FALSE, TRUE, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->GetTrigger().GetCardFilterHelper().SetFilterType(CCardFilterHelper::FilterType::Custom);
		cpAbility->GetTrigger().GetCardFilterHelper().GetCustomFilter().AddNegateComparer(new CardTypeComparer(CardType::Token, false));
		cpAbility->GetTrigger().SetToOpponentsOnly(TRUE);
		
		cpAbility->SetContextFunction(TriggeredAbility::ContextFunction(this, &CDuskmantleGuildmageEffectToken::SetTriggerContext));
		cpAbility->SetBeforeResolveSelectionCallback(TriggeredAbility::BeforeResolveSelectionCallback(this, &CDuskmantleGuildmageEffectToken::BeforeResolveSelection));
		cpAbility->AddAbilityTag(AbilityTag::LifeLost);
		
		AddAbility(cpAbility.GetPointer());
	}
	{
		typedef
			TTriggeredAbility< CTriggeredMoveCardAbility, CWhenNodeChanged > TriggeredAbility;

		counted_ptr<TriggeredAbility> cpAbility(
			::CreateObject<TriggeredAbility>(this, NodeId::BeginningStep, FALSE));

		cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);

		cpAbility->SetSkipStack(TRUE);

		cpAbility->GetMoveCardModifier().SetFromZone(ZoneId::_Effects);
		cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Exile);
		cpAbility->SetPlayableFrom(ZoneId::_Effects);
		cpAbility->AddAbilityTag(AbilityTag(ZoneId::_Effects, ZoneId::Exile));

		AddAbility(cpAbility.GetPointer());
    }
}

bool CDuskmantleGuildmageEffectToken::SetTriggerContext(CTriggeredAbility<>::TriggerContextType& triggerContext,
												CCard* pCard, CZone* pFromZone, CZone* pToZone, CPlayer* pByPlayer, MoveType moveType)
{
	triggerContext.nValue1 = (int)pToZone->GetPlayer();

	return (this->GetZone()->GetZoneId() == ZoneId::_Effects);
}

bool CDuskmantleGuildmageEffectToken::BeforeResolveSelection(TriggeredAbility::TriggeredActionType* pAction) const
{
	TriggeredAbility::TriggerContextType triggerContext(pAction->GetTriggerContext());

	CLifeModifier pModifier(Life(-1), this, PreventableType::NotPreventable, DamageType::NotDealingDamage);
	pModifier.ApplyTo((CPlayer*)triggerContext.nValue1);

	return true;
}

//____________________________________________________________________________
//
CFrogLizardToken::CFrogLizardToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Frog Lizard"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Frog, Lizard), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Rapid Hybridization
}

//____________________________________________________________________________
//
CSoldierCToken::CSoldierCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);
}

//____________________________________________________________________________
//
CSoldierDToken::CSoldierDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Soldier"), CardType::_ArtifactCreature/* | CardType::Token*/,
	CREATURE_TYPE(Soldier), nID,
		_T("3"),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddDoubleStrike(FALSE);
}

//____________________________________________________________________________
//
CBirdEToken::CBirdEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// ZEN version; used by Emeria Angel
}

//____________________________________________________________________________
//
CBirdGToken::CBirdGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// RTR version; used by Eyes in the Skies and Seller of Songbirds
}

//____________________________________________________________________________
//
CBirdHToken::CBirdHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Bird"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Bird), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);
// INV version; used by Ordered Migration
}

//____________________________________________________________________________
//
CCamaridBToken::CCamaridBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Camarid"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Camarid), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

// TSP version; used by Sarpadian Empires, Vol. VII
}

//____________________________________________________________________________
//
CCitizenBToken::CCitizenBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Citizen"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Citizen), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// 6TH version; used by Icatian Town
}

//____________________________________________________________________________
//
CGoblinDToken::CGoblinDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CGoblinEToken::CGoblinEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CApeBToken::CApeBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ape"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ape), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Monkey Cage
}

//____________________________________________________________________________
//
CBeastFToken::CBeastFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Beast), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// SCG version; used by Hunting Pack
}

//____________________________________________________________________________
//
CBeastGToken::CBeastGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Beast), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ZEN version; used by Rampaging Baloths
// Future use: Baloth Cage Trap
}

//____________________________________________________________________________
//
CBeastHToken::CBeastHToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// USG version; used by Midsummer Revel
}

//____________________________________________________________________________
//
CBeastIToken::CBeastIToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// DST version; used by Pulse of the Tangle
}

//____________________________________________________________________________
//
CBeastJToken::CBeastJToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// M11 version; used by Garruk Wildspeaker
}

//____________________________________________________________________________
//
CCentaurAToken::CCentaurAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Centaur"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Centaur), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// RTR version; used by Call of the Conclave, Centaur's Herald, Coursers' Accord and Vitu-Ghazi Guildmage
}

//____________________________________________________________________________
//
CCatDToken::CCatDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Cat), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// M13 version; used by Ajani, Caller of the Pride
}

//____________________________________________________________________________
//
CSnakeDToken::CSnakeDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// 6TH version; used by Snake Basket
}

//____________________________________________________________________________
//
CSnakeEToken::CSnakeEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// MMQ version; used by Snake Pit
}

//____________________________________________________________________________
//
CSnakeFToken::CSnakeFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Snake"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Snake), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// CHK version; used by Orochi Eggwatcher, Orochi Hatchery, Sosuke's Summons and Seed the Land
// Future use: Endless Swarm
}

//____________________________________________________________________________
//
CAntelopeToken::CAntelopeToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Antelope"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Antelope), nID,
		_T(""),
		Power(2), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCreatureKeyword()->AddLandwalk(CreatureKeyword::Forestwalk, FALSE);

// Used by Master of the Wild Hunt Avatar
}

//____________________________________________________________________________
//
CCatEToken::CCatEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Cat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Cat), nID,
		_T(""),
		Power(3), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	GetCardKeyword()->AddShroud(FALSE);

// Used by Master of the Wild Hunt Avatar
}

//____________________________________________________________________________
//
CBeastKToken::CBeastKToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// NPH version; used by Beast Within and Fresh Meat
}

//____________________________________________________________________________
//
CHorrorBToken::CHorrorBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Horror"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Horror), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Blue | CardType::Black, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Call of the Nightwing
}

//____________________________________________________________________________
//
CBeastLToken::CBeastLToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Beast"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Beast), nID,
        _T(""),
        Power(3), Life(3))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// M13 version; used by Garruk, Primal Hunter and Thragtusk
}

//____________________________________________________________________________
//
CBearBToken::CBearBToken(CGame* pGame, UINT nID)
    : CTokenCreature(pGame, _T("Bear"), CardType::Creature | CardType::Token,
        CREATURE_TYPE(Bear), nID,
        _T(""),
        Power(2), Life(2))
{
    AddCardType(CardType::Green, CardType::_ColorMask);

// ODY version; used by Bearscape and Grizzly Fate
}

//____________________________________________________________________________
//
CRatBToken::CRatBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Rat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Rat), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// GTC version; used by Ogre Slumlord
}

//____________________________________________________________________________
//
COozeDToken::COozeDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ooze"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ooze), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CElementalCToken::CElementalCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);

// CON version; used by Rakka Mar
}

//____________________________________________________________________________
//
CGoatBToken::CGoatBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goat), nID,
		_T(""),
		Power(0), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// M13 version; used by Trading Post
}

//____________________________________________________________________________
//
CEldraziSpawnBToken::CEldraziSpawnBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Spawn"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Spawn), nID,
		_T(""),
		Power(0), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CEldraziSpawnCToken::CEldraziSpawnCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi Spawn"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Eldrazi, Spawn), nID,
		_T(""),
		Power(0), Life(1))
{
	counted_ptr<CManaProductionBySacificeAbility> cpAbility(
		::CreateObject<CManaProductionBySacificeAbility>(this,
			_T("1")));

	AddAbility(cpAbility.GetPointer());
}

//____________________________________________________________________________
//
CDragonEToken::CDragonEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// ONS version; used by Day of the Dragons
}

//____________________________________________________________________________
//
CDragonFToken::CDragonFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Dragon), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// 10TH version; used by Dragon Roost, Shiv
// Future use: Rith the Awakener Avatar
}

//____________________________________________________________________________
//
CRatCToken::CRatCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Rat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Rat), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// STH version; used by Lab Rats
}

//____________________________________________________________________________
//
CRatDToken::CRatDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Rat"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Rat), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// CHK version; used by Marrow-Gnawer
}

//____________________________________________________________________________
//
CDemonCToken::CDemonCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Demon"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Demon), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	GetCreatureKeyword()->AddFlying(FALSE);

// AVR version; used by Demonic Rising
}

//____________________________________________________________________________
//
CAngelEToken::CAngelEToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// SCG version; used by Decree of Justice
}

//____________________________________________________________________________
//
CAngelFToken::CAngelFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// ZEN version; used by Luminarch Ascension
}

//____________________________________________________________________________
//
CElephantBToken::CElephantBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elephant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elephant), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ODY version; used by Elephant Ambush, Elephant Guice
}

//____________________________________________________________________________
//
CElfWarriorCToken::CElfWarriorCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elf Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Elf, Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// LRW version, used by Elvish Promenade, Gilt-Leaf Ambush, Imperious Perfect, Lys Alana Huntmaster, Nath of the Gilt-Leaf, Prowess of the Fair, Ambassador Oak, Hunting Triad
}

//____________________________________________________________________________
//
CGiantWarriorBToken::CGiantWarriorBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Giant Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Giant, Warrior), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// Used by Feudkiller's Verdict
}

//____________________________________________________________________________
//
CGoblinFToken::CGoblinFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
}

//____________________________________________________________________________
//
CGolemAToken::CGolemAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Golem"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Golem), nID,
		_T(""),
		Power(3), Life(3))
{
// NPH version; used by Blade Splicer, Conversion Chamber, Master Splicer, Maul Splicer, Sensor Splicer, Vital Splicer, Wing Splicer
}

//____________________________________________________________________________
//
CElephantCToken::CElephantCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elephant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elephant), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// TSP version; used by Assault//Battery, Call of the Herd
}

//____________________________________________________________________________
//
CElephantDToken::CElephantDToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elephant"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elephant), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

	counted_ptr<CTriggeredChgPwrTghWhenCardPlayedAbility> cpAbility(
		::CreateObject<CTriggeredChgPwrTghWhenCardPlayedAbility>(this,
			ZoneId::Graveyard,
			new AnyCreatureComparer));

	AddAbility(cpAbility.GetPointer());

// Used by Elephant Resurgence
}

//____________________________________________________________________________
//
CElementalPToken::CElementalPToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

	GetCreatureKeyword()->AddHaste(FALSE);
	
// Used by Elemental Mastery
}

//____________________________________________________________________________
//
CAngelGToken::CAngelGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// AVR version; used by Entreat the Angels, Moonsilver Spear
}

//____________________________________________________________________________
//
CAngelHToken::CAngelHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Angel"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Angel), nID,
		_T(""),
		Power(4), Life(4))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// GTC version; used by Urbis Protector
}

//____________________________________________________________________________
//