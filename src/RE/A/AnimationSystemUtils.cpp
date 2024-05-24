#include "RE/A/AnimationSystemUtils.h"

namespace RE
{
	namespace AnimationSystemUtils
	{
		bool GetAnimationEndpoint(TESObjectREFR* refr, const ClipInfo& clipInfo, NiPoint3& translation, NiPoint3& rotation_angles, float& end_time, NiPoint3& translation_start, NiPoint3& translation_delta, NiPoint3& rotation_start_angles, NiPoint3& rotate_from_before_angles)
		{
			using func_t = decltype(&GetAnimationEndpoint);
			REL::Relocation<func_t> func{ RELOCATION_ID(31951, 0) };  // I do not know for AE
			return func(refr, clipInfo, translation, rotation_angles, end_time, translation_start, translation_delta, rotation_start_angles, rotate_from_before_angles);
		}

		float GetAnimationEndTime(const ClipInfo& clipInfo)
		{
			using func_t = decltype(&GetAnimationEndTime);
			REL::Relocation<func_t> func{ RELOCATION_ID(31946, 0) };  // I do not know for AE
			return func(clipInfo);
		}

		float GetAnimationMaxDuration(TESObjectREFR* refr)
		{
			using func_t = decltype(&GetAnimationMaxDuration);
			REL::Relocation<func_t> func{ RELOCATION_ID(31947, 0) };  // I do not know for AE
			return func(refr);
		}

		bool GetAnimationTranslation(const ClipInfo& clipInfo, NiPoint3& translation)
		{
			using func_t = decltype(&GetAnimationTranslation);
			REL::Relocation<func_t> func{ RELOCATION_ID(31948, 0) };  // I do not know for AE
			return func(clipInfo, translation);
		}

		bool GetAttackClipData(const BSFixedString& project_name, const BSFixedString& clip_name, float& hitframe_time, NiPoint3& hitframe_pos, NiPoint3& a_final_pos)
		{
			using func_t = decltype(&GetAttackClipData);
			REL::Relocation<func_t> func{ RELOCATION_ID(26721, 0) };  // I do not know for AE
			return func(project_name, clip_name, hitframe_time, hitframe_pos, a_final_pos);
		}

		bool GetClipInfo(BSAnimationGraphManager* mngr, int32_t activeGraph_ind, const BSScrapArray<BSFixedString>& events, ClipInfo& clipInfo)
		{
			using func_t = decltype(&GetClipInfo);
			REL::Relocation<func_t> func{ RELOCATION_ID(31942, 0) };  // I do not know for AE
			return func(mngr, activeGraph_ind, events, clipInfo);
		}

		bool GetClipInfoFromEvent(TESObjectREFR* a, const BSFixedString& event_name, ClipInfo& clipInfo)
		{
			using func_t = decltype(&GetClipInfoFromEvent);
			REL::Relocation<func_t> func{ RELOCATION_ID(31940, 0) };  // I do not know for AE
			return func(a, event_name, clipInfo);
		}

		bool GetEventTime(const ClipInfo& clipInfo, const BSFixedString& event_name, float& event_time)
		{
			using func_t = decltype(&GetEventTime);
			REL::Relocation<func_t> func{ RELOCATION_ID(31945, 0) };  // I do not know for AE
			return func(clipInfo, event_name, event_time);
		}

		void GetTranslationFromClipData(const ClipInfo& clipInfo, float time, NiPoint3& translation)
		{
			using func_t = decltype(&GetTranslationFromClipData);
			REL::Relocation<func_t> func{ RELOCATION_ID(31950, 0) };  // I do not know for AE
			return func(clipInfo, time, translation);
		}

		bool SumAnimationDataToTime(const ClipInfo& clipInfo, float time, NiPoint3& translation, NiQuaternion& rotation)
		{
			using func_t = decltype(&SumAnimationDataToTime);
			REL::Relocation<func_t> func{ RELOCATION_ID(31944, 0) };  // I do not know for AE
			return func(clipInfo, time, translation, rotation);
		}
	}
}
