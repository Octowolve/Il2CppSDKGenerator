#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class LeanLeftBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "LeanLeftBtnView"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeanPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D55DAC))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D55ECC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D55ED4))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D55EE4))(this);
	}
	template <typename T = void> T DisableLean() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D55F8C))(this);
	}
	template <typename T = void> T EnableLean() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D56074))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D5615C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D5628C))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D5633C))(this);
	}
	template <typename T = void> T OnLeanPress(bool isPress) {
		return ((T (*)(LeanLeftBtnView*, bool))(Il2CppBase() + 0x3D563DC))(this, isPress);
	}
	template <typename T = void> T RefreshStatus(int32_t leanState) {
		return ((T (*)(LeanLeftBtnView*, int32_t))(Il2CppBase() + 0x3D55B20))(this, leanState);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D56518))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D56520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D56528))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D56530))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(LeanLeftBtnView*))(Il2CppBase() + 0x3D56538))(this);
	}

};

}
