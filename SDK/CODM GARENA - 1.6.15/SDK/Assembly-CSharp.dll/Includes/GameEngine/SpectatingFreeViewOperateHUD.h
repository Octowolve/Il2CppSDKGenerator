#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SpectatingFreeViewOperateHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SpectatingFreeViewOperateHUD"));
	}

	template <typename T = uintptr_t> T& joystickOn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& joystickHandleTrans() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& upArrow() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& downArrow() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& buttonMirrored() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& handSpikeMirrored() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = float> static T& kJoyStickButtonSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kHandSpikeButtonSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> T& leftRightCenterPos() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& forwardBackwardCenterPos() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& handSpikeSteerPos() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppVector3> T& handSpikeBackwardPos() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& readyInitDriveHandle() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& currentFrameCount() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetReadyInitDriveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryRefreshDriveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDriveHandle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowGetOnBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetJoySticksPanelController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F8034))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F803C))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F8048))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F8054))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F8128))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(SpectatingFreeViewOperateHUD*, float))(Il2CppBase() + 0x33F8130))(this, dt);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F85FC))(this);
	}
	template <typename T = void> T SetReadyInitDriveHandle() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F86E8))(this);
	}
	template <typename T = void> T TryRefreshDriveHandle() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F84F8))(this);
	}
	template <typename T = void> T InitDriveHandle() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F87CC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F8BB0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F8DC0))(this);
	}
	template <typename T = void> T ShowGetOnBtn() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F8F2C))(this);
	}
	template <typename T = uintptr_t> T GetJoySticksPanelController() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F932C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F9550))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SpectatingFreeViewOperateHUD*, float))(Il2CppBase() + 0x33F9558))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F9560))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F9568))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(SpectatingFreeViewOperateHUD*))(Il2CppBase() + 0x33F9570))(this);
	}

};

}
