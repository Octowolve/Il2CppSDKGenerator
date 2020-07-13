#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareOnCaptureShownController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareOnCaptureShownController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLogo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShareOnCaptureShownController*))(Il2CppBase() + 0x4499530))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShareOnCaptureShownController*))(Il2CppBase() + 0x44995D4))(this);
	}
	template <typename T = void> T Reset(uintptr_t onCaptureShownInfo) {
		return ((T (*)(ShareOnCaptureShownController*, uintptr_t))(Il2CppBase() + 0x44996E0))(this, onCaptureShownInfo);
	}
	template <typename T = void> T ResetPlayerInfo(bool isShowPlayerInfo) {
		return ((T (*)(ShareOnCaptureShownController*, bool))(Il2CppBase() + 0x44998A0))(this, isShowPlayerInfo);
	}
	template <typename T = void> T ResetLogo(bool isShowLogo) {
		return ((T (*)(ShareOnCaptureShownController*, bool))(Il2CppBase() + 0x4499AE0))(this, isShowLogo);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShareOnCaptureShownController*))(Il2CppBase() + 0x4499BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShareOnCaptureShownController*))(Il2CppBase() + 0x4499BF4))(this);
	}

};

}
