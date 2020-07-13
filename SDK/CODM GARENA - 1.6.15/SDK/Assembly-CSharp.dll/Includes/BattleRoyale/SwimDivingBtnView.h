#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SwimDivingBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SwimDivingBtnView"));
	}

	template <typename T = uintptr_t> T& DivingBtnGo() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ActiveGo() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& UnActiveGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Collider() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadDiveStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadDiveEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGamepadAlphaWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDivingPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A50A4))(this);
	}
	template <typename T = bool> T OnGamepadDiveStart() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A541C))(this);
	}
	template <typename T = bool> T OnGamepadDiveEnd() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5740))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5890))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5A54))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5C18))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5C20))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5C30))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5C3C))(this);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5D00))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A5DA0))(this);
	}
	template <typename T = void> T OnDragEnd(uintptr_t go) {
		return ((T (*)(SwimDivingBtnView*, uintptr_t))(Il2CppBase() + 0x35A5F14))(this, go);
	}
	template <typename T = void> T OnDragOut(uintptr_t go) {
		return ((T (*)(SwimDivingBtnView*, uintptr_t))(Il2CppBase() + 0x35A5FC8))(this, go);
	}
	template <typename T = void> T OnDragOver(uintptr_t go) {
		return ((T (*)(SwimDivingBtnView*, uintptr_t))(Il2CppBase() + 0x35A607C))(this, go);
	}
	template <typename T = uintptr_t> T GetGamepadAlphaWidget() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A611C))(this);
	}
	template <typename T = void> T OnDivingPress(uintptr_t go, bool isPress) {
		return ((T (*)(SwimDivingBtnView*, uintptr_t, bool))(Il2CppBase() + 0x35A556C))(this, go, isPress);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A61F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A61F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A6200))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A6208))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A6210))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetGamepadAlphaWidget() {
		return ((T (*)(SwimDivingBtnView*))(Il2CppBase() + 0x35A6218))(this);
	}

};

}
