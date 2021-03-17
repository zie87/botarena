#include "stdafx.h"
#include "CardTokens.h"

#define new DEBUG_NEW

#define DEFINE_TOKEN(T)	\
	if (!_tcsicmp(strTokenName, _T(#T))) { cpCard = counted_ptr<CCard>(new T(pGame, uID)); break; }

//____________________________________________________________________________
//
counted_ptr<CCard> CreateToken(CGame* pGame, LPCTSTR strTokenName, UINT uID)
{
	counted_ptr<CCard> cpCard;
	do
	{

		// Add new card class names here:
		// For example:
		// 	DEFINE_CARD(CDefenderEnVecCard);
		DEFINE_TOKEN(CBlankAToken);
		DEFINE_TOKEN(CBlankBToken);
		DEFINE_TOKEN(CBlankCToken);
		DEFINE_TOKEN(CBlankDToken);
		DEFINE_TOKEN(CBlankEToken);
		DEFINE_TOKEN(CBlankFToken);
		DEFINE_TOKEN(CBlankGToken);
		DEFINE_TOKEN(CBlankHToken);
		DEFINE_TOKEN(CBlankIToken);
		DEFINE_TOKEN(CBlankJToken);
		DEFINE_TOKEN(CBlankKToken);
		DEFINE_TOKEN(CBlankLToken);
		DEFINE_TOKEN(CDragonSpiritToken);
		DEFINE_TOKEN(CEldraziToken);
		DEFINE_TOKEN(CElementalQToken);
		DEFINE_TOKEN(CGoblinGToken);
		DEFINE_TOKEN(CGoblinHToken);
		DEFINE_TOKEN(CGoblinIToken);
		DEFINE_TOKEN(CGoblinJToken);
		DEFINE_TOKEN(CGoblinKToken);
		DEFINE_TOKEN(CGoblinLToken);
		DEFINE_TOKEN(CGoblinMToken);
		DEFINE_TOKEN(CGoblinSoldierBToken);
		DEFINE_TOKEN(CHippoBToken);
		DEFINE_TOKEN(CHorrorCToken);
		DEFINE_TOKEN(CHumanCToken);
		DEFINE_TOKEN(CInsectGToken);
		DEFINE_TOKEN(CInsectHToken);
		DEFINE_TOKEN(CKithkinSoldierBToken);
		DEFINE_TOKEN(CLizardToken);
		DEFINE_TOKEN(CMinionAToken);
		DEFINE_TOKEN(CMinionBToken);
		DEFINE_TOKEN(CMyrBToken);
		DEFINE_TOKEN(CMyrCToken);
		DEFINE_TOKEN(COozeFToken);
		DEFINE_TOKEN(COrbToken);
		DEFINE_TOKEN(CPegasusCToken);
		DEFINE_TOKEN(CReflectionBToken);
		DEFINE_TOKEN(CSandWarriorToken);
		DEFINE_TOKEN(CSaprolingIToken);
		DEFINE_TOKEN(CSaprolingJToken);
		DEFINE_TOKEN(CSaprolingKToken);
		DEFINE_TOKEN(CSaprolingLToken);
		DEFINE_TOKEN(CSaprolingMToken);
		DEFINE_TOKEN(CSkeletonBToken);
		DEFINE_TOKEN(CTetraviteToken);
		DEFINE_TOKEN(CTwinToken);
		DEFINE_TOKEN(CWallBToken);

	} while (false);

	return cpCard;
}

//____________________________________________________________________________
//
// Add new card class definitions here

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
CSaprolingIToken::CSaprolingIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// 10TH version; used by Verdant Force
}

//____________________________________________________________________________
//
CSaprolingJToken::CSaprolingJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ALA version; Jund Battlemage, Mycoloth, Necrogenesis, Sprouting Thrinax, Spore Burst, Tukatongue Thallid, Morbid Bloom, Roots of All Evil, Ghave, Guru of Spores
}

//____________________________________________________________________________
//
CSaprolingKToken::CSaprolingKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// M12 version; used by Druidic Satchel, Jade Mage, Dreampod Druid
// Future use: Grand Ossuary
}

//____________________________________________________________________________
//
CSaprolingLToken::CSaprolingLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// M13 version; used by Fungal Sprouting
}

//____________________________________________________________________________
//
CSaprolingMToken::CSaprolingMToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Saproling"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Saproling), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// RTR version; used by Korozda Guildmage
}

//____________________________________________________________________________
//
CReflectionBToken::CReflectionBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Reflection"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Reflection), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// Used by Pure Reflection
}

//____________________________________________________________________________
//
CSandWarriorToken::CSandWarriorToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Sand Warrior"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Sand, Warrior), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::Green | CardType::White, CardType::_ColorMask);

// Used by Pure Reflection
}

//____________________________________________________________________________
//
CPegasusCToken::CPegasusCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Pegasus"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Pegasus), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// TSP version; used by Sacred Mesa
}

//____________________________________________________________________________
//
CMyrBToken::CMyrBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Myr"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Myr), nID,
		_T(""),
		Power(1), Life(1))
{
// SOM version; used by Myr Battlesphere, Myrsmith, Origin Spellbomb, Master's Call, Myr Sire, Myr Turbine
}

//____________________________________________________________________________
//
CMyrCToken::CMyrCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Myr"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Myr), nID,
		_T(""),
		Power(1), Life(1))
{
// NPH version; used by Parasitic Implant, Shrine of Loyal Legions
}

//____________________________________________________________________________
//
CKithkinSoldierBToken::CKithkinSoldierBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Kithkin Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Kithkin, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// SHM version; used by Repel Intruders, Cenn's Enlistment, Gwyllion Hedge-Mage, Patrol Signaler
}

//____________________________________________________________________________
//
CInsectGToken::CInsectGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ONS version; used by Broodhatch Nantuko, Symbiotic Beast, Symbiotic Elf, Symbiotic Wurm, Vitality Charm, Wirewood Hivemaster
}

//____________________________________________________________________________
//
CInsectHToken::CInsectHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Insect"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Insect), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// MRD version; used by Living Hive, One Dozen Eyes, Infested Roothold, Beacon of Creation
}

//____________________________________________________________________________
//
CHumanCToken::CHumanCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Human"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Human), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::White, CardType::_ColorMask);

// AVR version; used by Commander's Authority, Voice of the Provinces
}

//____________________________________________________________________________
//
CHippoBToken::CHippoBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Hippo"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Hippo), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// PLS version; used by Questing Phelddagrif
}

//____________________________________________________________________________
//
CElementalQToken::CElementalQToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Elemental"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Elemental), nID,
		_T(""),
		Power(3), Life(3))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	
// Used by Evil Comes to Fruition
}

//____________________________________________________________________________
//
CEldraziToken::CEldraziToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Eldrazi"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Eldrazi), nID,
		_T(""),
		Power(7), Life(7))
{
	//Annihilator 1 (Whenever this creature attacks, defending player sacrifices X permanents.)
	typedef
		TTriggeredSubjectAbility< CTriggeredMoveCardAbility, CWhenSelfAttackedBlocked,
								CWhenSelfAttackedBlocked::AttackEventCallback,
								&CWhenSelfAttackedBlocked::SetAttackingEventCallback > TriggeredAbility;

	counted_ptr<TriggeredAbility> cpAbility(::CreateObject<TriggeredAbility>(this));

	cpAbility->SetOptionalType(TriggeredAbility::OptionalType::Required);
	cpAbility->SetTriggerToPlayerOption(TriggerToPlayerOption::TriggerToOpponents);

	cpAbility->GetGatherer().SetIncludeControllerCardsOnly();
	cpAbility->GetGatherer().GetSubjectCardFilter().AddComparer(new TrueCardComparer);
	cpAbility->GetGatherer().SetSubjectCount(1, 1, true);
	cpAbility->GetMoveCardModifier().SetToZone(ZoneId::Graveyard);
	cpAbility->GetMoveCardModifier().SetMoveType(MoveType::Sacrifice);

	cpAbility->AddAbilityTag(AbilityTag(ZoneId::Battlefield, ZoneId::Graveyard));

	AddAbility(cpAbility.GetPointer());

// Used by Hedron Fields of Agadeem
}

//____________________________________________________________________________
//
COozeFToken::COozeFToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Ooze"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Ooze), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// ROE version; used by Gelatinous Genesis
}

//____________________________________________________________________________
//
CGoblinGToken::CGoblinGToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// STH version; used by Mogg Infestation
}

//____________________________________________________________________________
//
CGoblinHToken::CGoblinHToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// RAV version; used by Hunted Phantasm
}

//____________________________________________________________________________
//
CGoblinIToken::CGoblinIToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// TSP version; used by Empty the Warrens, Ib Halfheart, Goblin Tactician; Mogg War Marshal, Sarpadian Empires, Vol. VII
}

//____________________________________________________________________________
//
CGoblinJToken::CGoblinJToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// M10 version; used by Siege-Gang Commander
}

//____________________________________________________________________________
//
CGoblinKToken::CGoblinKToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// SOM version; used by Kuldotha Rebirth, Beetleback Chief
// Future use: Jund
}

//____________________________________________________________________________
//
CGoblinLToken::CGoblinLToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// M13 version; used by Krenko's Command, Krenko, Mob Boss
}

//____________________________________________________________________________
//
CGoblinMToken::CGoblinMToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Goblin), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red, CardType::_ColorMask);

// RTR version; used by Goblin Rally, Survey the Wreckage
}

//____________________________________________________________________________
//
CGoblinSoldierBToken::CGoblinSoldierBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Goblin Soldier"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Goblin, Soldier), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Red | CardType::White, CardType::_ColorMask);

// APC version; used by Goblin Trenches
}

//____________________________________________________________________________
//
COrbToken::COrbToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Orb"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Orb), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Phantasmal Sphere
}

//____________________________________________________________________________
//
CHorrorCToken::CHorrorCToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Horror"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Horror), nID,
		_T(""),
		Power(0), Life(0))
{
// Used by Phyrexian Rebirth
}

//____________________________________________________________________________
//
CMinionAToken::CMinionAToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Minion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Minion), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Phyrexian Processor
}

//____________________________________________________________________________
//
CMinionBToken::CMinionBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Minion"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Minion), nID,
		_T(""),
		Power(1), Life(1))
{
	AddCardType(CardType::Black, CardType::_ColorMask);

// Used by Infernal Genesis
}

//____________________________________________________________________________
//
CLizardToken::CLizardToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Lizard"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Minion), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);

// Used by Predatory Advantage
}

//____________________________________________________________________________
//
CTetraviteToken::CTetraviteToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Tetravite"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Tetravite), nID,
		_T(""),
		Power(1), Life(1))
{
	GetCreatureKeyword()->AddFlying(FALSE);
	GetCardKeyword()->AddCantBeEnchanted(FALSE);

// Used by Tetravus
}

//____________________________________________________________________________
//
CBlankAToken::CBlankAToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	strVariableName = _T("Blank A");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankBToken::CBlankBToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	strVariableName = _T("Blank B");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankCToken::CBlankCToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	strVariableName = _T("Blank C");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankDToken::CBlankDToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	strVariableName = _T("Blank D");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankEToken::CBlankEToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	strVariableName = _T("Blank E");

// Used by Volrath's Laboratory
}

//____________________________________________________________________________
//
CBlankFToken::CBlankFToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(2), Life(2))
{
	strVariableName = _T("Blank F");

// Used by Volrath's Laboratory in case no color is selected
}

//____________________________________________________________________________
//
CBlankGToken::CBlankGToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::White, CardType::_ColorMask);
	strVariableName = _T("Blank G");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankHToken::CBlankHToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);
	strVariableName = _T("Blank H");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankIToken::CBlankIToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Black, CardType::_ColorMask);
	strVariableName = _T("Blank I");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankJToken::CBlankJToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Red, CardType::_ColorMask);
	strVariableName = _T("Blank J");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankKToken::CBlankKToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	AddCardType(CardType::Green, CardType::_ColorMask);
	strVariableName = _T("Blank K");

// Used by Riptide Replicator
}

//____________________________________________________________________________
//
CBlankLToken::CBlankLToken(CGame* pGame, UINT nID)
	: CVariableTokenCreature(pGame, _T("Blank"), CardType::Creature | CardType::Token,
		CREATURE_TYPE(Null), nID,
		_T(""),
		Power(0), Life(0))
{
	strVariableName = _T("Blank L");

// Used by Riptide Replicator in case no color is selected
}

//____________________________________________________________________________
//
CSkeletonBToken::CSkeletonBToken(CGame* pGame, UINT nID)
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

// ALA version; used by Skeletonize
}

//____________________________________________________________________________
//
CDragonSpiritToken::CDragonSpiritToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Dragon Spirit"), CardType::Creature | CardType::Token,
		CREATURE_TYPE2(Dragon, Spirit), nID,
		_T(""),
		Power(5), Life(5))
{
	AddCardType(CardType::Blue, CardType::_ColorMask);

	GetCreatureKeyword()->AddFlying(FALSE);

// Used by Tatsumasa, the Dragon's Fang
}

//____________________________________________________________________________
//
CWallBToken::CWallBToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Wall"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Wall), nID,
		_T(""),
		Power(0), Life(2))
{
	GetCreatureKeyword()->AddDefender(FALSE);

// Used by Basalt Golem
}

//____________________________________________________________________________
//
CTwinToken::CTwinToken(CGame* pGame, UINT nID)
	: CTokenCreature(pGame, _T("Twin"), CardType::_ArtifactCreature | CardType::Token,
		CREATURE_TYPE(Construct), nID,
		_T(""),
		Power(0), Life(0))
{
// Used by Gemini Engine
}

//____________________________________________________________________________
//