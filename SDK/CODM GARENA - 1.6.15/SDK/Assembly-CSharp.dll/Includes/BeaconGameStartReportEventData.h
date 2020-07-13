#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BeaconGameStartReportEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BeaconGameStartReportEventData"));
	}

	template <typename T = Il2CppString*> T& DeviceId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
