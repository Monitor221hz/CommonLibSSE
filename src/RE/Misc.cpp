#include "RE/Misc.h"

#include "RE/INIPrefSettingCollection.h"  // INIPrefSettingCollection
#include "RE/INISettingCollection.h"  // INISettingCollection
#include "RE/Offsets.h"
#include "RE/Setting.h"  // Setting
#include "REL/Relocation.h"  // Offset


namespace RE
{
	Setting* GetINISetting(const char* a_name)
	{
		Setting* setting = 0;

		auto iniPrefs = INIPrefSettingCollection::GetSingleton();
		setting = iniPrefs->GetSetting(a_name);
		if (!setting) {
			auto ini = INISettingCollection::GetSingleton();
			setting = ini->GetSetting(a_name);
		}
		return setting;
	}


	void DebugNotification(const char* a_notification, void* a_arg2, bool a_arg3)
	{
		using func_t = function_type_t<decltype(&DebugNotification)>;
		REL::Offset<func_t*> func(Offset::DebugNotification);
		return func(a_notification, a_arg2, a_arg3);
	}


	bool WorldPtToScreenPt3(float a_worldToCamMatrix[4][4], NiRect<float>& a_port, const NiPoint3& a_in, float& a_xOut, float& a_yOut, float& a_zOut, float a_zeroTolerance)
	{
		using func_t = function_type_t<decltype(&WorldPtToScreenPt3)>;
		REL::Offset<func_t*> func(Offset::WorldPtToScreenPt3);
		return func(a_worldToCamMatrix, a_port, a_in, a_xOut, a_yOut, a_zOut, a_zeroTolerance);
	}
}
