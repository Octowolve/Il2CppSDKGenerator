#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TacticalCombat {

class TacticalCombatLoadoutUIViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TacticalCombat", "TacticalCombatLoadoutUIViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x64);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToggleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D7F4F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D7F598))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D7F69C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D7FA0C))(this);
	}
	template <typename T = bool> T OnGamepadMoveLeft() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D7FC88))(this);
	}
	template <typename T = bool> T OnGamepadMoveRight() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D7FD28))(this);
	}
	template <typename T = void> T RefreshLoadout() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D7FDC8))(this);
	}
	template <typename T = void> T OnChangeBag() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D80AB8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D80E6C))(this);
	}
	template <typename T = void> T OnToggleChanged() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D80F20))(this);
	}
	template <typename T = void> T UpdateLoadout(uintptr_t msg) {
		return ((T (*)(TacticalCombatLoadoutUIViewController*, uintptr_t))(Il2CppBase() + 0x3D80FD0))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D81088))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D81090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D81098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D810A0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnGamepadMoveLeft() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D810A8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnGamepadMoveRight() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D810B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshLoadout() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D810B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnChangeBag() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D810C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(TacticalCombatLoadoutUIViewController*))(Il2CppBase() + 0x3D810C8))(this);
	}

};

}
