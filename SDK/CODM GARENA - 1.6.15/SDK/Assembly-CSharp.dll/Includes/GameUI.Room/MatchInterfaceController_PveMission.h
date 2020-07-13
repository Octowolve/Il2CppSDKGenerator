#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class MatchInterfaceControllerPveMission
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "MatchInterfaceController_PveMission"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMatchStartAllocResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnConfirmClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD71D8))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD72E4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD7388))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD7498))(this);
	}
	template <typename T = void> T OnRoomMatchStartAllocResponse(uintptr_t Msg) {
		return ((T (*)(MatchInterfaceControllerPveMission*, uintptr_t))(Il2CppBase() + 0x2CD7550))(this, Msg);
	}
	template <typename T = void> T OnBtnConfirmClick(uintptr_t result, int32_t userContext) {
		return ((T (*)(MatchInterfaceControllerPveMission*, uintptr_t, int32_t))(Il2CppBase() + 0x2CD7A08))(this, result, userContext);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD7ADC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD7AE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD7AEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MatchInterfaceControllerPveMission*))(Il2CppBase() + 0x2CD7AF4))(this);
	}

};

}
