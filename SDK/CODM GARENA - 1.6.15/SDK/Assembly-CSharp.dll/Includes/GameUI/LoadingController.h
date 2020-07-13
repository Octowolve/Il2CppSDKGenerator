#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadingController"));
	}

	template <typename T = int32_t> static T& TIMEOUT_SECONDS_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRenderLoadingView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233E064))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233E108))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233E214))(this);
	}
	template <typename T = void> T SetRenderLoadingView() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233E304))(this);
	}
	template <typename T = void> T SetData(Il2CppString* tips, bool blockTouch, bool showMask, int32_t timeoutSeconds, float renderDelay, bool invisible) {
		return ((T (*)(LoadingController*, Il2CppString*, bool, bool, int32_t, float, bool))(Il2CppBase() + 0x233E570))(this, tips, blockTouch, showMask, timeoutSeconds, renderDelay, invisible);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233ED30))(this);
	}
	template <typename T = void> T SetPosition(Il2CppVector3 pos) {
		return ((T (*)(LoadingController*, Il2CppVector3))(Il2CppBase() + 0x233EFD8))(this, pos);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233F23C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233F244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadingController*))(Il2CppBase() + 0x233F24C))(this);
	}

};

}
