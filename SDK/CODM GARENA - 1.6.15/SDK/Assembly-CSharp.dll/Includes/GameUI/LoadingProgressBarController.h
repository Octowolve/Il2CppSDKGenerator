#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadingProgressBarController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadingProgressBarController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadingProgressBarController*))(Il2CppBase() + 0x234069C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadingProgressBarController*))(Il2CppBase() + 0x2340740))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LoadingProgressBarController*))(Il2CppBase() + 0x234084C))(this);
	}
	template <typename T = void> T SetData(Il2CppString* tips, float progress, bool showProgress) {
		return ((T (*)(LoadingProgressBarController*, Il2CppString*, float, bool))(Il2CppBase() + 0x2340978))(this, tips, progress, showProgress);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadingProgressBarController*))(Il2CppBase() + 0x2340A60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadingProgressBarController*))(Il2CppBase() + 0x2340A68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LoadingProgressBarController*))(Il2CppBase() + 0x2340A70))(this);
	}

};

}
