#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalTopViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalTopViewController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyOpenUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetDatum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowPlaceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReceiveEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSwitchClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTacticalMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x277DD48))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x277E180))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x277E2A8))(this);
	}
	template <typename T = void> T NotifyOpenUI(uintptr_t msg) {
		return ((T (*)(TacticalTopViewController*, uintptr_t))(Il2CppBase() + 0x27B6654))(this, msg);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B6864))(this);
	}
	template <typename T = bool> T IsShow() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B686C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x277E5F8))(this);
	}
	template <typename T = void> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalTopViewController*, uintptr_t))(Il2CppBase() + 0x27B6A24))(this, inGPS);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B6BA8))(this);
	}
	template <typename T = void> T OnResetDatum(uintptr_t inMsg) {
		return ((T (*)(TacticalTopViewController*, uintptr_t))(Il2CppBase() + 0x27B6DB0))(this, inMsg);
	}
	template <typename T = void> T OnShowView(uintptr_t inMsg) {
		return ((T (*)(TacticalTopViewController*, uintptr_t))(Il2CppBase() + 0x277E6A0))(this, inMsg);
	}
	template <typename T = void> T OnTacticalTeamPlayerLoginOrLogoutNotify() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x277B98C))(this);
	}
	template <typename T = void> T OnShowPlaceName(uintptr_t inMsg) {
		return ((T (*)(TacticalTopViewController*, uintptr_t))(Il2CppBase() + 0x27B6F30))(this, inMsg);
	}
	template <typename T = void> T OnReceiveEvent(uintptr_t inMsg) {
		return ((T (*)(TacticalTopViewController*, uintptr_t))(Il2CppBase() + 0x27B6FD0))(this, inMsg);
	}
	template <typename T = void> T OnHideCollider(uintptr_t inMsg) {
		return ((T (*)(TacticalTopViewController*, uintptr_t))(Il2CppBase() + 0x27B7154))(this, inMsg);
	}
	template <typename T = void> T GamepadSwitchClick() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7380))(this);
	}
	template <typename T = void> T OnSettlement() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B74E8))(this);
	}
	template <typename T = void> T RefreshTacticalMaterial() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7650))(this);
	}
	template <typename T = int32_t> T GetWidth() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7810))(this);
	}
	template <typename T = int32_t> T GetHeight() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7914))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7A18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7A20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7A28))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalTopViewController*))(Il2CppBase() + 0x27B7A30))(this);
	}

};

}
