#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ClimbUpConfirmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ClimbUpConfirmView"));
	}

	template <typename T = uintptr_t> T& ViewWidget() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ConfirmClimbUpBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& OffsetY() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& IsPress() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& IsEnterClimbVol() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = Il2CppVector2> T& SignPos() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& Raduis() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& IsJump() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowClimbable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowClimbUpConfirmButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideClimbUpConfirmButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickConfirmClimbUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DDF874))(this);
	}
	template <typename T = void> T OnShowClimbable(bool flag) {
		return ((T (*)(ClimbUpConfirmView*, bool))(Il2CppBase() + 0x3DDF6E8))(this, flag);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(ClimbUpConfirmView*, float))(Il2CppBase() + 0x3DDF87C))(this, dt);
	}
	template <typename T = void> T ShowClimbUpConfirmButton() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DDF134))(this);
	}
	template <typename T = void> T HideClimbUpConfirmButton() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DDF404))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DDFE4C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DDFF94))(this);
	}
	template <typename T = void> T OnClickConfirmClimbUp() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DE00E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(ClimbUpConfirmView*, float))(Il2CppBase() + 0x3DE0180))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DE0188))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ClimbUpConfirmView*))(Il2CppBase() + 0x3DE0190))(this);
	}

};

}
