#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopAllModuleRequest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StopAllModuleRequest"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Excute() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Excute() {
		return ((T (*)(StopAllModuleRequest*))(Il2CppBase() + 0x493E59C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Excute() {
		return ((T (*)(StopAllModuleRequest*))(Il2CppBase() + 0x493E6A8))(this);
	}

};

}
