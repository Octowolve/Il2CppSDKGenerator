#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonVideoController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonVideoController"));
	}

	template <typename T = uintptr_t> T& mView() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSkipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A084B0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08554))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08660))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08794))(this);
	}
	template <typename T = void> T OnSkipBtnClick() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A088B0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A0896C))(this);
	}
	template <typename T = void> T SetData(Il2CppString* videoPath, Il2CppString* soundBegin, Il2CppString* soundEnd, bool loop) {
		return ((T (*)(UICommonVideoController*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x2A08A34))(this, videoPath, soundBegin, soundEnd, loop);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08C64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08C6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08C74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08C7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UICommonVideoController*))(Il2CppBase() + 0x2A08C84))(this);
	}

};

}
