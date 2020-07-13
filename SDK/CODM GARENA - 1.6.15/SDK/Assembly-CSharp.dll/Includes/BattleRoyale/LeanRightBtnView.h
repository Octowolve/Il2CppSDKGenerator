#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class LeanRightBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "LeanRightBtnView"));
	}

	template <typename T = uintptr_t> T& LeanSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ActiveSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& LeanColor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& m_IsPressed() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& m_Range() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppVector2> T& m_Size() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableLean() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeanPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56AE8))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56C08))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56C10))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56C20))(this);
	}
	template <typename T = void> T DisableLean() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56CC8))(this);
	}
	template <typename T = void> T EnableLean() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56DB0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56E98))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D56F40))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D57070))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D57120))(this);
	}
	template <typename T = void> T OnLeanPress(bool isPress) {
		return ((T (*)(LeanRightBtnView*, bool))(Il2CppBase() + 0x3D571C0))(this, isPress);
	}
	template <typename T = void> T RefreshStatus(int32_t leanState) {
		return ((T (*)(LeanRightBtnView*, int32_t))(Il2CppBase() + 0x3D56858))(this, leanState);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D572FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D57304))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D5730C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D57314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D5731C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(LeanRightBtnView*))(Il2CppBase() + 0x3D57324))(this);
	}

};

}
