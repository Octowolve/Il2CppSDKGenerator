#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntTacticalBtnViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntTacticalBtnViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_TacticalCnt() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyUpdateTacticalCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_TacticalCnt() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7810))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7818))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B78BC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B79CC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7B50))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7C78))(this);
	}
	template <typename T = void> T OnNotifyUpdateTacticalCount(uintptr_t msg) {
		return ((T (*)(PropHuntTacticalBtnViewController*, uintptr_t))(Il2CppBase() + 0x34B7D34))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7E90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7E98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7EA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7EA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntTacticalBtnViewController*))(Il2CppBase() + 0x34B7EB0))(this);
	}

};

}
