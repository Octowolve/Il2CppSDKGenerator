#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SignOutOfViewTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SignOutOfViewTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSignsOutOfViewInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignOutOfViewTipsHUD*))(Il2CppBase() + 0x3C96BC0))(this);
	}
	template <typename T = void> T Show(bool isShow) {
		return ((T (*)(SignOutOfViewTipsHUD*, bool))(Il2CppBase() + 0x3C96CDC))(this, isShow);
	}
	template <typename T = void> T Tick(float DeltaTime) {
		return ((T (*)(SignOutOfViewTipsHUD*, float))(Il2CppBase() + 0x3C96DD0))(this, DeltaTime);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SignOutOfViewTipsHUD*))(Il2CppBase() + 0x3C96E70))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SignOutOfViewTipsHUD*))(Il2CppBase() + 0x3C96E78))(this);
	}
	template <typename T = void> T GetSignsOutOfViewInfo(uintptr_t* LeftNearestSign, uintptr_t* RightNearestSign, uintptr_t* LeftSignCountOutOfView, uintptr_t* RightSignCountOutOfView) {
		return ((T (*)(SignOutOfViewTipsHUD*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3C96F10))(this, LeftNearestSign, RightNearestSign, LeftSignCountOutOfView, RightSignCountOutOfView);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SignOutOfViewTipsHUD*))(Il2CppBase() + 0x3C97334))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SignOutOfViewTipsHUD*, float))(Il2CppBase() + 0x3C9733C))(this, P0);
	}

};

}
