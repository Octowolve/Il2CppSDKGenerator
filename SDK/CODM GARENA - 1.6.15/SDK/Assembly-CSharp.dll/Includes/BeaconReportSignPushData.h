#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeaconReportSignPushData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeaconReportSignPushData"));
	}

	template <typename T = Il2CppString*> T& player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& claim_day() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ResetData() {
		return ((T (*)(BeaconReportSignPushData*))(Il2CppBase() + 0x373EE14))(this);
	}

};

}
