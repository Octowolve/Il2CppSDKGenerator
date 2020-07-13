#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginCommonProgressView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginCommonProgressView"));
	}

	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ProgressBar() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PercentageLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoginCommonProgressView*))(Il2CppBase() + 0x33D7A64))(this);
	}
	template <typename T = void> T ShowSelf(bool show) {
		return ((T (*)(LoginCommonProgressView*, bool))(Il2CppBase() + 0x33D73B4))(this, show);
	}
	template <typename T = void> T SetTips(Il2CppString* tips) {
		return ((T (*)(LoginCommonProgressView*, Il2CppString*))(Il2CppBase() + 0x33D7B0C))(this, tips);
	}
	template <typename T = void> T SetProgress(float progress) {
		return ((T (*)(LoginCommonProgressView*, float))(Il2CppBase() + 0x33D77E0))(this, progress);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoginCommonProgressView*))(Il2CppBase() + 0x33D7C00))(this);
	}

};

}
