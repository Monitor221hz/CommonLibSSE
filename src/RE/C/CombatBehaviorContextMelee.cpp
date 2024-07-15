#include "RE/C/CombatBehaviorContextMelee.h"

namespace RE
{
	void CombatBehaviorContextMelee::CalculateAnimationData()
	{
		using func_t = decltype(&CombatBehaviorContextMelee::CalculateAnimationData);
		REL::Relocation<func_t> func{ RELOCATION_ID(48146, 49177) };  // 14080D560       140837AF0
		return func(this);
	}

	bool CombatBehaviorContextMelee::CheckAttack(CombatAttackData* attack)
	{
		using func_t = decltype(&CombatBehaviorContextMelee::CheckAttack);
		REL::Relocation<func_t> func{ RELOCATION_ID(48140, 49171) };  // 14080C6F0       140836CA0
		return func(this, attack);
	}

	bool CombatBehaviorContextMelee::CheckAttackRange()
	{
		using func_t = decltype(&CombatBehaviorContextMelee::CheckAttackRange);
		REL::Relocation<func_t> func{ RELOCATION_ID(48141, 48676) };  // 14080CD10       1408372A0
		return func(this);
	}

	void CombatBehaviorContextMelee::Enter()
	{
		return GatherAttackData();
	}

	void CombatBehaviorContextMelee::FinishedAttack()
	{
		using func_t = decltype(&CombatBehaviorContextMelee::FinishedAttack);
		REL::Relocation<func_t> func{ RELOCATION_ID(48142, 49173) };  // 14080CEE0       140837440
		return func(this);
	}

	void CombatBehaviorContextMelee::GatherAttackData()
	{
		using func_t = decltype(&CombatBehaviorContextMelee::GatherAttackData);
		REL::Relocation<func_t> func{ RELOCATION_ID(48145, 49176) };  // 14080D1D0       140837720
		return func(this);
	}

	bool CombatBehaviorContextMelee::StartAttack()
	{
		using func_t = decltype(&CombatBehaviorContextMelee::StartAttack);
		REL::Relocation<func_t> func{ RELOCATION_ID(48139, 49170) };  // 14080C020       140836670
		return func(this);
	}
}
