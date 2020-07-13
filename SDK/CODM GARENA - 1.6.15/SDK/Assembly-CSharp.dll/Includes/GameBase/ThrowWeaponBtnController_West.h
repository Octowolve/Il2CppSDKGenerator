#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ThrowWeaponBtnControllerWest
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ThrowWeaponBtnController_West"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGrenadeShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ThrowWeaponBtnControllerWest*))(Il2CppBase() + 0x27C9220))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ThrowWeaponBtnControllerWest*))(Il2CppBase() + 0x27C92C4))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ThrowWeaponBtnControllerWest*))(Il2CppBase() + 0x27C9454))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(ThrowWeaponBtnControllerWest*))(Il2CppBase() + 0x27C94FC))(this);
	}
	template <typename T = void> T OnGrenadeShowed(uintptr_t msg) {
		return ((T (*)(ThrowWeaponBtnControllerWest*, uintptr_t))(Il2CppBase() + 0x27C9594))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ThrowWeaponBtnControllerWest*))(Il2CppBase() + 0x27C964C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ThrowWeaponBtnControllerWest*))(Il2CppBase() + 0x27C9654))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ThrowWeaponBtnControllerWest*))(Il2CppBase() + 0x27C965C))(this);
	}

};

}
