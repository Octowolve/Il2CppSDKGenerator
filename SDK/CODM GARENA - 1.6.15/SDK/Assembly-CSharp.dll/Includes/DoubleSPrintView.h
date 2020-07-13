#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoubleSPrintView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DoubleSPrintView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRateScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = float> T GetRateScale() {
		return ((T (*)(DoubleSPrintView*))(Il2CppBase() + 0x4178EFC))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(DoubleSPrintView*))(Il2CppBase() + 0x4178F9C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetRateScale() {
		return ((T (*)(DoubleSPrintView*))(Il2CppBase() + 0x417903C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(DoubleSPrintView*))(Il2CppBase() + 0x4179044))(this);
	}

};

}
