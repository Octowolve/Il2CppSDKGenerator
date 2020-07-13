#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScreenCaptureAnimationWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScreenCaptureAnimationWindowController"));
	}

	template <typename T = float> T& alphaDuration() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& alphaDelay() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _uiview() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& finishCallback() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Play() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LinkAnimationFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLinkAnimationFinishCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTweenAnimationFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4475998))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4475A3C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4475B94))(this);
	}
	template <typename T = void> static T Show(uintptr_t finishCallback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4475CA0))(0, finishCallback);
	}
	template <typename T = void> T Play(uintptr_t finishCallback) {
		return ((T (*)(ScreenCaptureAnimationWindowController*, uintptr_t))(Il2CppBase() + 0x4475E68))(this, finishCallback);
	}
	template <typename T = void> T InternalPlay() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4475F18))(this);
	}
	template <typename T = void> T InternalClose() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4476148))(this);
	}
	template <typename T = void> T LinkAnimationFinishCallback() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4476208))(this);
	}
	template <typename T = void> T UnLinkAnimationFinishCallback() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4475AEC))(this);
	}
	template <typename T = void> T OnTweenAnimationFinish() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x44763F0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x4476494))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x447649C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ScreenCaptureAnimationWindowController*))(Il2CppBase() + 0x44764A4))(this);
	}

};

}
