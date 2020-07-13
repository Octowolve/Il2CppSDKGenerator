#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WNWeaponClipChangingState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WNWeaponClipChangingState"));
	}

	template <typename T = int32_t> T& m_BeginAmmo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_PlayTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoRequestChangeClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckChangeClipLoopAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WNWeaponClipChangingState*))(Il2CppBase() + 0x4594F10))(this);
	}
	template <typename T = void> T DoRequestChangeClip() {
		return ((T (*)(WNWeaponClipChangingState*))(Il2CppBase() + 0x4595284))(this);
	}
	template <typename T = void> T EndState() {
		return ((T (*)(WNWeaponClipChangingState*))(Il2CppBase() + 0x4595398))(this);
	}
	template <typename T = int32_t> T CheckChangeClipLoopAmmo() {
		return ((T (*)(WNWeaponClipChangingState*))(Il2CppBase() + 0x45956D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WNWeaponClipChangingState*))(Il2CppBase() + 0x459581C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EndState() {
		return ((T (*)(WNWeaponClipChangingState*))(Il2CppBase() + 0x4595824))(this);
	}

};

}
