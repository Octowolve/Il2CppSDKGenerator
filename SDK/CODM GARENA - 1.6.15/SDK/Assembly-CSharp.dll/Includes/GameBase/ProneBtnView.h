#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ProneBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ProneBtnView"));
	}

	template <typename T = uintptr_t> T& ProningSprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedHideInEmulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnProneBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBC550))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBC558))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBC56C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBC728))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBC8B0))(this);
	}
	template <typename T = bool> T OnGamepadPress() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBCA34))(this);
	}
	template <typename T = void> T UpdateButton(bool isSponeing) {
		return ((T (*)(ProneBtnView*, bool))(Il2CppBase() + 0x2DBC38C))(this, isSponeing);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBCD64))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ProneBtnView*, float))(Il2CppBase() + 0x2DBCD6C))(this, dt);
	}
	template <typename T = bool> T NeedHideInEmulator() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBCEF0))(this);
	}
	template <typename T = void> T OnProneBtnClick(uintptr_t go, bool press) {
		return ((T (*)(ProneBtnView*, uintptr_t, bool))(Il2CppBase() + 0x2DBCB68))(this, go, press);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBCF90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBCF98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBCFA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ProneBtnView*, float))(Il2CppBase() + 0x2DBCFA8))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedHideInEmulator() {
		return ((T (*)(ProneBtnView*))(Il2CppBase() + 0x2DBCFB0))(this);
	}

};

}
