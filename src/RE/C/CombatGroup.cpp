#include "RE/C/CombatGroup.h"

namespace RE
{
	CombatGroup::CombatGroup(uint32_t ind)
	{
		using func_t = CombatGroup*(CombatGroup*, uint32_t);
		REL::Relocation<func_t> func{ RELOCATION_ID(43479, 44701) };  // 140769DF0       140797000
		func(this, ind);
	}

	void CombatGroup::AddDetectionListenerForMember(Actor* member)
	{
		using func_t = decltype(&CombatGroup::AddDetectionListenerForMember);
		REL::Relocation<func_t> func{ RELOCATION_ID(43562, 44788) };  // 140772230       1407A0070
		return func(this, member);
	}

	void CombatGroup::AddDetectionListenerForTarget(Actor* target)
	{
		using func_t = decltype(&CombatGroup::AddDetectionListenerForTarget);
		REL::Relocation<func_t> func{ RELOCATION_ID(43563, 0) };  // 140772300       AE:???
		return func(this, target);
	}

	bool CombatGroup::AddMember(Actor* member)
	{
		using func_t = decltype(&CombatGroup::AddMember);
		REL::Relocation<func_t> func{ RELOCATION_ID(43489, 33210) };  // 14076A890       140797E60
		return func(this, member);
	}

	void CombatGroup::AddSearchDoor(TESObjectREFR* a2)
	{
		using func_t = decltype(&CombatGroup::AddSearchDoor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43547, 42386) };  // 140770830       14079E270
		return func(this, a2);
	}

	void CombatGroup::AddSearchLocation(BGSWorldLocation& loc, float score, float timestamp)
	{
		using func_t = decltype(&CombatGroup::AddSearchLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43544, 42375) };  // 1407700F0       14079DB20
		return func(this, loc, score, timestamp);
	}

	bool CombatGroup::AddTarget(Actor* target)
	{
		using func_t = decltype(&CombatGroup::AddTarget);
		REL::Relocation<func_t> func{ RELOCATION_ID(43482, 44704) };  // 14076A450       1407977D0
		return func(this, target);
	}

	void CombatGroup::BuildSearchTeleportDoorArray()
	{
		using func_t = decltype(&CombatGroup::BuildSearchTeleportDoorArray);
		REL::Relocation<func_t> func{ RELOCATION_ID(43539, 44393) };  // 14076FD00       14079D730
		return func(this);
	}

	void CombatGroup::BuildTargetLastSeenLocationArray(BSTArray<NiPoint3>& ans, float event_interval) const
	{
		using func_t = decltype(&CombatGroup::BuildTargetLastSeenLocationArray);
		REL::Relocation<func_t> func{ RELOCATION_ID(43511, 44737) };  // 14076C210       140799B20
		return func(this, ans, event_interval);
	}

	void CombatGroup::CalculateDetectionLevel(CombatTarget* ctarget) const
	{
		using func_t = decltype(&CombatGroup::CalculateDetectionLevel);
		REL::Relocation<func_t> func{ RELOCATION_ID(43560, 44786) };  // 140772050       14079FE30
		return func(this, ctarget);
	}

	bool CombatGroup::CanAddMember(Actor* member) const
	{
		using func_t = decltype(&CombatGroup::CanAddMember);
		REL::Relocation<func_t> func{ RELOCATION_ID(43493, 44711) };  // 14076ACA0       140797E60
		return func(this, member);
	}

	void CombatGroup::ChangeGuardCombatToAlarm() const
	{
		using func_t = decltype(&CombatGroup::ChangeGuardCombatToAlarm);
		REL::Relocation<func_t> func{ RELOCATION_ID(43532, 44758) };  // 14076E3A0       14079BD60
		return func(this);
	}

	void CombatGroup::ChangeMemberProcessLevel(Actor* member, PROCESS_TYPE from, PROCESS_TYPE to)
	{
		using func_t = decltype(&CombatGroup::ChangeMemberProcessLevel);
		REL::Relocation<func_t> func{ RELOCATION_ID(43556, 42396) };  // 140770F30       14079E990
		return func(this, member, from, to);
	}

	bool CombatGroup::CheckRemoveCombatTarget(CombatTarget* ctarget) const
	{
		using func_t = decltype(&CombatGroup::CheckRemoveCombatTarget);
		REL::Relocation<func_t> func{ RELOCATION_ID(43567, 44466) };  // 140772600       1407A0440
		return func(this, ctarget);
	}

	bool CombatGroup::CheckSplitGroupForTarget(Actor* target)
	{
		using func_t = decltype(&CombatGroup::CheckSplitGroupForTarget);
		REL::Relocation<func_t> func{ RELOCATION_ID(43486, 44708) };  // 14076A720       140797CF0
		return func(this, target);
	}

	bool CombatGroup::CheckTarget(Actor* target) const
	{
		using func_t = decltype(&CombatGroup::CheckTarget);
		REL::Relocation<func_t> func{ RELOCATION_ID(43568, 44800) };  // 140772760       1407A06C0
		return func(this, target);
	}

	bool CombatGroup::CheckTargetValid(Actor* target) const
	{
		using func_t = decltype(&CombatGroup::CheckTargetValid);
		REL::Relocation<func_t> func{ RELOCATION_ID(43530, 44756) };  // 14076E220       14079BBE0
		return func(this, target);
	}

	void CombatGroup::ClearSearch()
	{
		using func_t = decltype(&CombatGroup::ClearSearch);
		REL::Relocation<func_t> func{ RELOCATION_ID(43540, 44766) };  // 14076FDC0       14079D7F0
		return func(this);
	}

	float CombatGroup::ComputeMemberHealthPercentage() const
	{
		using func_t = decltype(&CombatGroup::ComputeMemberHealthPercentage);
		REL::Relocation<func_t> func{ RELOCATION_ID(43529, 44755) };  // 14076E100       14079BAC0
		return func(this);
	}

	void CombatGroup::ComputeSearchArea()
	{
		using func_t = decltype(&CombatGroup::ComputeSearchArea);
		REL::Relocation<func_t> func{ RELOCATION_ID(43537, 44763) };  // 14076F4E0       14079CF50
		return func(this);
	}

	void CombatGroup::CopyTargets(CombatGroup* other)
	{
		using func_t = decltype(&CombatGroup::CopyTargets);
		REL::Relocation<func_t> func{ RELOCATION_ID(43487, 42228) };  // 14076A810       140797DE0
		return func(this, other);
	}

	void CombatGroup::DecrementAttackerCount(Actor* target)
	{
		using func_t = decltype(&CombatGroup::DecrementAttackerCount);
		REL::Relocation<func_t> func{ RELOCATION_ID(43499, 44721) };  // 14076B0F0       1407987D0
		return func(this, target);
	}

	void CombatGroup::FailedToInvestigateSearchDoor(TESObjectREFR* a2)
	{
		using func_t = decltype(&CombatGroup::FailedToInvestigateSearchDoor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43549, 44775) };  // 140770910       14079E350
		return func(this, a2);
	}

	void CombatGroup::FillMemberArray(BSTArray<ActorHandle>& array) const
	{
		using func_t = decltype(&CombatGroup::FillMemberArray);
		REL::Relocation<func_t> func{ RELOCATION_ID(43494, 0) };  // AE: ??? (no calls)
		return func(this, array);
	}

	void CombatGroup::FillTargetArray(BSTArray<ActorHandle>& array) const
	{
		using func_t = decltype(&CombatGroup::FillTargetArray);
		REL::Relocation<func_t> func{ RELOCATION_ID(43488, 0) };  // AE: ??? (no calls)
		return func(this, array);
	}

	Actor* CombatGroup::FindClosestMemberToLocation(BGSWorldLocation& loc, Actor* toSkip, float maxRange) const
	{
		using func_t = decltype(&CombatGroup::FindClosestMemberToLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43521, 44323) };  // I do not know for AE
		return func(this, loc, toSkip, maxRange);
	}

	Actor* CombatGroup::FindClosestTargetToLocation(BGSWorldLocation& loc, Actor* toSkip, bool onlyAttacked) const
	{
		using func_t = decltype(&CombatGroup::FindClosestTargetToLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43520, 44746) };  // 14076CEA0       14079A8C0
		return func(this, loc, toSkip, onlyAttacked);
	}

	Actor* CombatGroup::FindMemberNearActor(Actor* a, float inRange) const
	{
		using func_t = decltype(&CombatGroup::FindMemberNearActor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43519, 44745) };  // 14076CE50       14079A770
		return func(this, a, inRange);
	}

	Actor* CombatGroup::FindMemberNearLocation(BGSWorldLocation& near_loc, float inRange, Actor* toSkip) const
	{
		using func_t = decltype(&CombatGroup::FindMemberNearLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43518, 44744) };  // 14076CD10       14079A630
		return func(this, near_loc, inRange, toSkip);
	}

	Actor* CombatGroup::FindRandomMember(Actor* toSkip) const
	{
		using func_t = decltype(&CombatGroup::FindRandomMember);
		REL::Relocation<func_t> func{ RELOCATION_ID(43522, 44748) };  // I do not know for AE
		return func(this, toSkip);
	}

	TESObjectREFR* CombatGroup::FindSearchDoor(Actor* member, float maxRange) const
	{
		using func_t = decltype(&CombatGroup::FindSearchDoor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43545, 44771) };  // 140770370       14079DDA0
		return func(this, member, maxRange);
	}

	CombatSearchLocation* CombatGroup::FindSearchLocation(Actor* member, int32_t min_score, float fromTimestamp)
	{
		using func_t = decltype(&CombatGroup::FindSearchLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43542, 44768) };  // I do not know for AE
		return func(this, member, min_score, fromTimestamp);
	}

	Actor* CombatGroup::FindTargetNearLocation(BGSWorldLocation& near_loc, float inRange, bool ignoreUnknown) const
	{
		using func_t = decltype(&CombatGroup::FindTargetNearLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43517, 44743) };   // 14076CBE0       14079A500   
		return func(this, near_loc, inRange, ignoreUnknown);
	}

	bool CombatGroup::GetCombatGroupIsAggressor()
	{
		using func_t = decltype(&CombatGroup::GetCombatGroupIsAggressor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43553, 44779) };  // 140770C30,14079E670
		return func(this);
	}

	CombatMember* CombatGroup::GetCombatMemberForActor(Actor* member)
	{
		using func_t = decltype(&CombatGroup::GetCombatMemberForActor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43565, 44794) };  // 140772480       1407A02C0
		return func(this, member);
	}

	CombatSearchDoor* CombatGroup::GetCombatSearchDoor(TESObjectREFR* a2)
	{
		using func_t = decltype(&CombatGroup::GetCombatSearchDoor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43546, 44397) };  // 1407706E0       14079E120
		return func(this, a2);
	}

	CombatTarget* CombatGroup::GetCombatTargetForActor(Actor* target)
	{
		using func_t = decltype(&CombatGroup::GetCombatTargetForActor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43564, 44790) };  // 1407723D0       1407A0210
		return func(this, target);
	}

	int CombatGroup::GetDetectionLevel(Actor* actor, Actor* target) const
	{
		using func_t = decltype(&CombatGroup::GetDetectionLevel);
		REL::Relocation<func_t> func{ RELOCATION_ID(43561, 44460) };  // 140772190       14079FFD0
		return func(this, actor, target);
	}

	float CombatGroup::GetDPSRatioOfActor(Actor* a)
	{
		using func_t = decltype(&CombatGroup::GetDPSRatioOfActor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43555, 44781) };  // 140770DE0       14079E830
		return func(this, a);
	}

	int32_t CombatGroup::GetMaxTargetDetectionLevel() const
	{
		using func_t = decltype(&CombatGroup::GetMaxTargetDetectionLevel);
		REL::Relocation<func_t> func{ RELOCATION_ID(43512, 44738) };  // 14076C390       140799CF0
		return func(this);
	}

	bool CombatGroup::GetTargetDetectionData(Actor* target, int32_t& detect_level, AITimeStamp& lastDetected, bool& known, bool& lost) const
	{
		using func_t = decltype(&CombatGroup::GetTargetDetectionData);
		REL::Relocation<func_t> func{ RELOCATION_ID(43503, 44727) };  // 14076BCD0       1407995F0             	
		return func(this, target, detect_level, lastDetected, known, lost);
	}

	int32_t CombatGroup::GetTargetDetectionLevel(Actor* target) const
	{
		using func_t = decltype(&CombatGroup::GetTargetDetectionLevel);
		REL::Relocation<func_t> func{ RELOCATION_ID(43502, 44298) };  // 14076BC40       140799560
		return func(this, target);
	}

	bool CombatGroup::GetTargetKnown(Actor* target) const
	{
		using func_t = decltype(&CombatGroup::GetTargetKnown);
		REL::Relocation<func_t> func{ RELOCATION_ID(43505, 44729) };  // 14076BE50       140799760
		return func(this, target);
	}

	bool CombatGroup::GetTargetLastDetectedEventLocation(Actor* target, BGSWorldLocation& ans, float maxInterval) const
	{
		using func_t = decltype(&CombatGroup::GetTargetLastDetectedEventLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43510, 44734) };  // 14076C100       140799A10
		return func(this, target, ans, maxInterval);
	}

	bool CombatGroup::GetTargetLastDetectedLocation(Actor* target, BGSWorldLocation& ans) const
	{
		using func_t = decltype(&CombatGroup::GetTargetLastDetectedLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43508, 44732) };  // 14076BFC0       1407998D0
		return func(this, target, ans);
	}

	AITimeStamp CombatGroup::GetTargetLastDetectedTimeStamp(Actor* target) const
	{
		using func_t = decltype(&CombatGroup::GetTargetLastDetectedTimeStamp);
		REL::Relocation<func_t> func{ RELOCATION_ID(43507, 44731) };  // 14076BF30       140799840
		return func(this, target);
	}

	bool CombatGroup::GetTargetLastKnownLocation(Actor* target, BGSWorldLocation& ans) const
	{
		using func_t = decltype(&CombatGroup::GetTargetLastKnownLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43509, 42307) };  // 14076C060       140799970
		return func(this, target, ans);
	}

	bool CombatGroup::GetTargetLost(Actor* target) const
	{
		using func_t = decltype(&CombatGroup::GetTargetLost);
		REL::Relocation<func_t> func{ RELOCATION_ID(43504, 44301) };  // 14076BDE0       1407996F0
		return func(this, target);
	}

	float CombatGroup::GetTargetStealthPoints(Actor* target) const
	{
		using func_t = decltype(&CombatGroup::GetTargetStealthPoints);
		REL::Relocation<func_t> func{ RELOCATION_ID(43506, 44730) };  // 14076BEC0       1407997D0
		return func(this, target);
	}

	float CombatGroup::GetThreatRatioOfActor(Actor* a)
	{
		using func_t = decltype(&CombatGroup::GetThreatRatioOfActor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43554, 44780) };  // 140770CC0       14079E710
		return func(this, a);
	}

	void CombatGroup::IncrementAttackerCount(Actor* target)
	{
		using func_t = decltype(&CombatGroup::IncrementAttackerCount);
		REL::Relocation<func_t> func{ RELOCATION_ID(43498, 42266) };  // 14076B080       140798760
		return func(this, target);
	}

	void CombatGroup::InvestigatedSearchDoor(TESObjectREFR* a2)
	{
		using func_t = decltype(&CombatGroup::InvestigatedSearchDoor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43548, 44774) };  // 1407708F0       14079E330
		return func(this, a2);
	}

	void CombatGroup::InvestigatedSearchLocation(const BGSWorldLocation& loc)
	{
		using func_t = decltype(&CombatGroup::InvestigatedSearchLocation);
		REL::Relocation<func_t> func{ RELOCATION_ID(43543, 44396) };  // 140770010       14079DA40
		return func(this, loc);
	}

	bool CombatGroup::IsEmpty() const
	{
		using func_t = decltype(&CombatGroup::IsEmpty);
		REL::Relocation<func_t> func{ RELOCATION_ID(43497, 44719) };  // 14076B070       140798750
		return func(this);
	}

	bool CombatGroup::IsFleeing() const
	{
		using func_t = decltype(&CombatGroup::IsFleeing);
		REL::Relocation<func_t> func{ RELOCATION_ID(43533, 44759) };  // 14076E530       14079BF00
		return func(this);
	}

	Actor* CombatGroup::IsInCombatWithGuard() const
	{
		using func_t = decltype(&CombatGroup::IsInCombatWithGuard);
		REL::Relocation<func_t> func{ RELOCATION_ID(43531, 44369) };  // 14076E2B0       14079BC70
		return func(this);
	}

	bool CombatGroup::IsMember(Actor* a) const
	{
		using func_t = bool(const CombatGroup*, Actor*);
		REL::Relocation<func_t> func{ RELOCATION_ID(48023, 48007) };  // 1407DCF20       140808020
		return func(this, a);
	}

	bool CombatGroup::IsMember(const ActorHandle& handle) const
	{
		using func_t = bool(const CombatGroup*, const ActorHandle&);
		REL::Relocation<func_t> func{ RELOCATION_ID(43492, 0) };  // 14076AC10 AE:???
		return func(this, handle);
	}

	bool CombatGroup::IsSearching() const
	{
		using func_t = decltype(&CombatGroup::IsSearching);
		REL::Relocation<func_t> func{ RELOCATION_ID(48023, 48007) };  // 1407DCF20       140808020
		return func(this);
	}

	bool CombatGroup::IsTarget(Actor* a) const
	{
		using func_t = bool(const CombatGroup*, Actor*);
		REL::Relocation<func_t> func{ RELOCATION_ID(43484, 44286) };  // 14076A690       140797C60
		return func(this, a);
	}

	bool CombatGroup::IsTarget(const ActorHandle& handle) const
	{
		using func_t = bool(const CombatGroup*, const ActorHandle&);
		REL::Relocation<func_t> func{ RELOCATION_ID(43485, 44286) };  // 14076A690       140797C60
		return func(this, handle);
	}

	bool CombatGroup::MergeGroups(CombatGroup* other)
	{
		using func_t = decltype(&CombatGroup::MergeGroups);
		REL::Relocation<func_t> func{ RELOCATION_ID(43500, 44722) };  // 14076B160       140798840
		return func(this, other);
	}

	void CombatGroup::NotifyMemberAttacked(Actor* member, Actor* attacker)
	{
		using func_t = decltype(&CombatGroup::NotifyMemberAttacked);
		REL::Relocation<func_t> func{ RELOCATION_ID(43513, 44739) };  // 14076C500       140799E50
		return func(this, member, attacker);
	}

	void CombatGroup::NotifyMemberKilled(Actor* killer, Actor* member)
	{
		using func_t = decltype(&CombatGroup::NotifyMemberKilled);
		REL::Relocation<func_t> func{ RELOCATION_ID(43514, 44740) };  // 14076C600       140799F40 
		return func(this, killer, member);
	}

	void CombatGroup::RemoveAllMembers()
	{
		using func_t = decltype(&CombatGroup::RemoveAllMembers);
		REL::Relocation<func_t> func{ RELOCATION_ID(43496, 44718) };  // 14076AFB0       140798690
		return func(this);
	}

	void CombatGroup::RemoveMember(Actor* member)
	{
		using func_t = decltype(&CombatGroup::RemoveMember);
		REL::Relocation<func_t> func{ RELOCATION_ID(43490, 0) };  // 14076AA00       AE:??
		return func(this, member);
	}

	void CombatGroup::RemoveTarget(Actor* target)
	{
		using func_t = void(CombatGroup*, Actor*);
		REL::Relocation<func_t> func{ RELOCATION_ID(43483, 42233) };  // 14076A560       140797B30
		return func(this, target);
	}

	void CombatGroup::RemoveTarget(int32_t ind)
	{
		using func_t = void(CombatGroup*, int32_t);
		REL::Relocation<func_t> func{ RELOCATION_ID(43566, 44798) };  // 140772520       1407A0360
		return func(this, ind);
	}

	void CombatGroup::ReserveSearchDoor(TESObjectREFR* a2)
	{
		using func_t = decltype(&CombatGroup::ReserveSearchDoor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43550, 44776) };  // 140770930       14079E370
		return func(this, a2);
	}

	void CombatGroup::SetSearchingMember(Actor* member)
	{
		using func_t = decltype(&CombatGroup::SetSearchingMember);
		REL::Relocation<func_t> func{ RELOCATION_ID(43541, 44394) };  // 14076FEB0       14079D8E0
		return func(this, member);
	}

	void CombatGroup::StartSearch()
	{
		using func_t = decltype(&CombatGroup::StartSearch);
		REL::Relocation<func_t> func{ RELOCATION_ID(43536, 0) };  // 14076EF50       AE:???
		return func(this);
	}

	void CombatGroup::StopCombat()
	{
		using func_t = decltype(&CombatGroup::StopCombat);
		REL::Relocation<func_t> func{ RELOCATION_ID(43495, 44717) };  // 14076AE30       140798520
		return func(this);
	}

	void* CombatGroup::UnreserveSearchDoor(TESObjectREFR* a2)
	{
		using func_t = decltype(&CombatGroup::UnreserveSearchDoor);
		REL::Relocation<func_t> func{ RELOCATION_ID(43551, 44777) };  // 140770950       14079E390
		return func(this, a2);
	}

	void CombatGroup::Update()
	{
		using func_t = decltype(&CombatGroup::Update);
		REL::Relocation<func_t> func{ RELOCATION_ID(43481, 0) };  // 14076A2F0       AE:???
		return func(this);
	}

	void CombatGroup::UpdateAttackerCounts()
	{
		using func_t = decltype(&CombatGroup::UpdateAttackerCounts);
		REL::Relocation<func_t> func{ RELOCATION_ID(43570, 42454) };  // 1407728B0       1407A0810
		return func(this);
	}

	void CombatGroup::UpdateCombatStrength()
	{
		using func_t = decltype(&CombatGroup::UpdateCombatStrength);
		REL::Relocation<func_t> func{ RELOCATION_ID(43552, 44778) };  // 140770970       14079E3B0
		return func(this);
	}

	void CombatGroup::UpdateCounts()
	{
		using func_t = decltype(&CombatGroup::UpdateCounts);
		REL::Relocation<func_t> func{ RELOCATION_ID(43569, 44801) };  // 1407727B0       1407A0710
		return func(this);
	}

	DETECTION_PRIORITY CombatGroup::UpdateDetection(Actor* member, Actor* target, DetectionState* detect_state)
	{
		using func_t = decltype(&CombatGroup::UpdateDetection);
		REL::Relocation<func_t> func{ RELOCATION_ID(43501, 44725) };  // 14076B5D0       140798E50
		return func(this, member, target, detect_state);
	}

	void CombatGroup::UpdateMembers()
	{
		using func_t = decltype(&CombatGroup::UpdateMembers);
		REL::Relocation<func_t> func{ RELOCATION_ID(43572, 42467) };  // 140772CD0       1407A0BC0
		return func(this);
	}

	void CombatGroup::UpdateSearch()
	{
		using func_t = decltype(&CombatGroup::UpdateSearch);
		REL::Relocation<func_t> func{ RELOCATION_ID(43534, 44760) };  // 14076E550       14079BF20
		return func(this);
	}

	bool CombatGroup::UpdateSearchArea()
	{
		using func_t = decltype(&CombatGroup::UpdateSearchArea);
		REL::Relocation<func_t> func{ RELOCATION_ID(43538, 0) };  // 14076FC30       AE:???
		return func(this);
	}

	void CombatGroup::UpdateSearchLocations()
	{
		using func_t = decltype(&CombatGroup::UpdateSearchLocations);
		REL::Relocation<func_t> func{ RELOCATION_ID(43535, 44761) };  // 14076EE80       14079C9A0
		return func(this);
	}

	void CombatGroup::UpdateStealthPoints()
	{
		using func_t = decltype(&CombatGroup::UpdateStealthPoints);
		REL::Relocation<func_t> func{ RELOCATION_ID(43573, 44805) };  // 140772EB0       1407A0DA0
		return func(this);
	}

	void CombatGroup::UpdateTargets()
	{
		using func_t = decltype(&CombatGroup::UpdateTargets);
		REL::Relocation<func_t> func{ RELOCATION_ID(43571, 44803) };  // 140772A60       1407A0940
		return func(this);
	}
}
