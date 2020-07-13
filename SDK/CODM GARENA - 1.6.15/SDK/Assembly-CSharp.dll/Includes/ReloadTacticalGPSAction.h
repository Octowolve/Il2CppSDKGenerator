#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReloadTacticalGPSAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReloadTacticalGPSAction"));
	}

	template <typename T = Il2CppString*> T& gpsObjectName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ReloadTacticalGPSAction*))(Il2CppBase() + 0x382AB50))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(ReloadTacticalGPSAction*))(Il2CppBase() + 0x382ABF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ReloadTacticalGPSAction*))(Il2CppBase() + 0x382AF38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnter() {
		return ((T (*)(ReloadTacticalGPSAction*))(Il2CppBase() + 0x382AF40))(this);
	}

};

}
