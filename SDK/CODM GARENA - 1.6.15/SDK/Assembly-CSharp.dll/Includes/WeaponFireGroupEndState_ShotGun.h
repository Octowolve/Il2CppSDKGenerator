#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponFireGroupEndStateShotGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponFireGroupEndState_ShotGun"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponFireGroupEndStateShotGun*))(Il2CppBase() + 0x49E7630))(this);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(WeaponFireGroupEndStateShotGun*))(Il2CppBase() + 0x49E7700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponFireGroupEndStateShotGun*))(Il2CppBase() + 0x49E77BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayAnim() {
		return ((T (*)(WeaponFireGroupEndStateShotGun*))(Il2CppBase() + 0x49E77C4))(this);
	}

};

}
