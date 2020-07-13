#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class CommonAvatarController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "CommonAvatarController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& CameraScreenCenterPos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& CameraScreenCenterPosRole() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarViewAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLobbySceneType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonAvatarViewChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyStopCameraShake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSomething() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAvatarTweenPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonAvatarViewCameraSmooth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothCameraToCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SmoothRecoverCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x29221AC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x292224C))(this);
	}
	template <typename T = int32_t> T GetAvatarViewAsset() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x29224B4))(this);
	}
	template <typename T = uintptr_t> T GetLobbySceneType() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x2922558))(this);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x29222FC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x29225F8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x29227B0))(this);
	}
	template <typename T = void> T OnNotifyCommonAvatarViewChanged(uintptr_t message) {
		return ((T (*)(CommonAvatarController*, uintptr_t))(Il2CppBase() + 0x2922894))(this, message);
	}
	template <typename T = void> T OnNotifyStopCameraShake(uintptr_t message) {
		return ((T (*)(CommonAvatarController*, uintptr_t))(Il2CppBase() + 0x29240F4))(this, message);
	}
	template <typename T = void> T CheckSomething() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x292311C))(this);
	}
	template <typename T = void> T SetVisible(bool visible, bool showEffect, bool closeOtherScene, uintptr_t uiType) {
		return ((T (*)(CommonAvatarController*, bool, bool, bool, uintptr_t))(Il2CppBase() + 0x29248D4))(this, visible, showEffect, closeOtherScene, uiType);
	}
	template <typename T = void> T PlayAvatarTweenPosition(Il2CppVector3 from, Il2CppVector3 to, float duration, uintptr_t style, bool reset) {
		return ((T (*)(CommonAvatarController*, Il2CppVector3, Il2CppVector3, float, uintptr_t, bool))(Il2CppBase() + 0x2924FD8))(this, from, to, duration, style, reset);
	}
	template <typename T = void> T SetViewPosition(Il2CppVector3 position) {
		return ((T (*)(CommonAvatarController*, Il2CppVector3))(Il2CppBase() + 0x29253F0))(this, position);
	}
	template <typename T = void> T OnNotifyCommonAvatarViewCameraSmooth(uintptr_t message) {
		return ((T (*)(CommonAvatarController*, uintptr_t))(Il2CppBase() + 0x2925548))(this, message);
	}
	template <typename T = void> T SmoothCameraToCenter() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x2925688))(this);
	}
	template <typename T = void> T SmoothRecoverCameraPosition() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x29257FC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x2926040))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x2926048))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x2926050))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommonAvatarController*))(Il2CppBase() + 0x2926058))(this);
	}

};

}
