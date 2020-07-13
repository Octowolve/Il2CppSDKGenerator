#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireModeCN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireModeCN"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHideDoubleFireBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T IsHideDoubleFireBtn() {
		return ((T (*)(WeaponFireModeCN*))(Il2CppBase() + 0x4C49334))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsHideDoubleFireBtn() {
		return ((T (*)(WeaponFireModeCN*))(Il2CppBase() + 0x4C4942C))(this);
	}

};

}
