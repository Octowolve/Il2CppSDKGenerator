#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CollectionTipsMgrHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CollectionTipsMgrHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_IsTipActive() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_AllTipObjs() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTipsHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TrySetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoSetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameHUDStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CollectionTipsMgrHUD*))(Il2CppBase() + 0x3C7E6E4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CollectionTipsMgrHUD*))(Il2CppBase() + 0x3C7E6EC))(this);
	}
	template <typename T = void> T AddTipsHUD(uintptr_t btn, uintptr_t showRoot) {
		return ((T (*)(CollectionTipsMgrHUD*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C7E360))(this, btn, showRoot);
	}
	template <typename T = void> T TrySetActive(uintptr_t btnType, bool isActive) {
		return ((T (*)(CollectionTipsMgrHUD*, uintptr_t, bool))(Il2CppBase() + 0x3C7E1F4))(this, btnType, isActive);
	}
	template <typename T = void> T DoSetActive(int32_t idx, bool isActive) {
		return ((T (*)(CollectionTipsMgrHUD*, int32_t, bool))(Il2CppBase() + 0x3C7E6F8))(this, idx, isActive);
	}
	template <typename T = void> T OnGameHUDStateChanged() {
		return ((T (*)(CollectionTipsMgrHUD*))(Il2CppBase() + 0x3C7E878))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGameHUDStateChanged() {
		return ((T (*)(CollectionTipsMgrHUD*))(Il2CppBase() + 0x3C7E920))(this);
	}

};

}
