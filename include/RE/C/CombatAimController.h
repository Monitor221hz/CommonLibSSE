#pragma once

#include "RE/A/AITimer.h"
#include "RE/B/BSCoreTypes.h"
#include "RE/B/BSPointerHandle.h"
#include "RE/C/CombatObject.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class CombatController;
	class MagicCaster;

	class CombatAimController : public CombatObject
	{
	public:
		enum class PRIORITY : uint32_t
		{
			kUnk0,
			kUnk1,
			kUnk2,
			kUnk3,
			kUnk4,
			kUnk5
		};

		enum class Flags : uint32_t
		{
			kAiming = 1 << 0,
			kUpdating = 1 << 1,
			kUnk2 = 1 << 2,
			kDisable = 1 << 3,
			kUnk4 = 1 << 4,
			kUnk5 = 1 << 5,
			kUnk6 = 1 << 6
		};
		using FLAGS = stl::enumeration<Flags, uint32_t>;

		// add
		virtual bool                 CheckAim(const NiPoint3& from, const NiPoint3& to);  // 5
		virtual bool                 CheckAim(const NiPoint3& P);                         // 6
		virtual bool                 CheckAim(float cone);                                // 7
		virtual void                 Update();                                            // 8
		virtual CombatAimController* Clone() const;                                       // 9
		virtual void                 FinishLoadGame();                                    // A

		uint32_t CalculatePriority(PRIORITY priority);
		void     ClearAim();
		bool     HasTargetLOS() const;
		void     Register();
		void     SetAim(const NiPoint3& P);
		void     Unregister();

		// members
		MagicCaster*      mcaster;         // 10 -- or weap?
		NiPoint3          P;               // 18
		uint32_t          field_24;        // 24
		CombatController* combat_control;  // 28
		ActorHandle       target;          // 30
		PRIORITY          priority1;       // 34
		PRIORITY          priority2;       // 38
		FLAGS             flags;           // 3C
		AITimer           timer;           // 40
	};
	static_assert(sizeof(CombatAimController) == 0x48);
}
