#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CTFCountDownHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CTFCountDownHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CountDownLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CountingDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCountDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(CTFCountDownHUD*))(Il2CppBase() + 0x3DFC8F4))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(CTFCountDownHUD*))(Il2CppBase() + 0x3DFC8FC))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CTFCountDownHUD*))(Il2CppBase() + 0x3DFC90C))(this);
	}
	template <typename T = void> T ShowCountDown() {
		return ((T (*)(CTFCountDownHUD*))(Il2CppBase() + 0x3DFCA04))(this);
	}
	template <typename T = void> T CountingDown() {
		return ((T (*)(CTFCountDownHUD*))(Il2CppBase() + 0x3DFCD00))(this);
	}
	template <typename T = void> T EndCountDown() {
		return ((T (*)(CTFCountDownHUD*))(Il2CppBase() + 0x3DFCFCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CTFCountDownHUD*))(Il2CppBase() + 0x3DFD130))(this);
	}

};

}
