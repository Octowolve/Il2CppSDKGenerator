#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class OpenBoxShack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "OpenBoxShack"));
	}

	template <typename T = uintptr_t> T& OnFinished() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& openBoxCamera() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& cameraBlurUtil() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& cameraBlurTweener() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& BoxSequencer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& chestSocket() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& effectSocket() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& smokeSocket() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& musicSocket() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& mCacheChestMap() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& mCacheChestOpenEffectMap() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& mCacheChestSmokeEffectMap() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& mCacheOpenEffect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mCacheChestAnimator() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& mCacheSmokeEffect() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& goToRestoreUICameraAndResize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> static T& kCameraDepth_Top() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kCameraDepth_LowerThanUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kUIShowDelay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UICameraList() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartBlur() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStartOpenBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginShowTipsView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareSockets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Callback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCameraToTop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCameraDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideUICamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_tryResizeAllChildren() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T SetCameraActive(bool active) {
		return ((T (*)(OpenBoxShack*, bool))(Il2CppBase() + 0x383BF64))(this, active);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383C084))(this);
	}
	template <typename T = void> T ResetBlur() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383C1B0))(this);
	}
	template <typename T = void> T StartBlur() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383C32C))(this);
	}
	template <typename T = void> T StartOpenBox(int32_t boxId) {
		return ((T (*)(OpenBoxShack*, int32_t))(Il2CppBase() + 0x383C46C))(this, boxId);
	}
	template <typename T = void> T PrepareScene() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383D528))(this);
	}
	template <typename T = void> T DoStartOpenBox() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383D91C))(this);
	}
	template <typename T = void> T BeginShowTipsView() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383DB98))(this);
	}
	template <typename T = void> T SetActive(bool active) {
		return ((T (*)(OpenBoxShack*, bool))(Il2CppBase() + 0x383DD0C))(this, active);
	}
	template <typename T = void> T PrepareSockets(bool enable) {
		return ((T (*)(OpenBoxShack*, bool))(Il2CppBase() + 0x383D3A4))(this, enable);
	}
	template <typename T = void> T HandleAudio() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383E18C))(this);
	}
	template <typename T = void> T HandleAnim() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383DA70))(this);
	}
	template <typename T = void> T Callback() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383DC44))(this);
	}
	template <typename T = void> T SetCameraToTop() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383CF90))(this);
	}
	template <typename T = void> T ResetCameraDepth() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383DE00))(this);
	}
	template <typename T = void> T RestoreUICamera() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383DF18))(this);
	}
	template <typename T = void> T HideUICamera() {
		return ((T (*)(OpenBoxShack*))(Il2CppBase() + 0x383D0A8))(this);
	}
	template <typename T = void> T tryResizeAllChildren(uintptr_t UInode) {
		return ((T (*)(OpenBoxShack*, uintptr_t))(Il2CppBase() + 0x383E2C0))(this, UInode);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0) {
		return ((T (*)(OpenBoxShack*, bool))(Il2CppBase() + 0x383E4A4))(this, P0);
	}

};

}
