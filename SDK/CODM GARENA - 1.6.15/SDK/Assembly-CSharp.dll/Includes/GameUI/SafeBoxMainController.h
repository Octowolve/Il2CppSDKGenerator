#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SafeBoxMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SafeBoxMainController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& SafeBoxSvrBuyStat() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bSendRequest() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& nEntranceFrom() {
		return *(T*)((uintptr_t)this + 0x5C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateUnlocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateSoldOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowReceiveItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClaimReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPaySucess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSafeBoxBuyCheckFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPayFail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSafeBoxPayInfoArrived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446B9D0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446BA74))(this);
	}
	template <typename T = bool> T get_HasResUpate() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446BCC4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446BCCC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446BDD4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446C294))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446C59C))(this);
	}
	template <typename T = void> T RefreshView(bool bEnableSFX) {
		return ((T (*)(SafeBoxMainController*, bool))(Il2CppBase() + 0x446C714))(this, bEnableSFX);
	}
	template <typename T = void> T OnStateFull() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446CF68))(this);
	}
	template <typename T = void> T OnStateUnlocked() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446D328))(this);
	}
	template <typename T = void> T OnStateLocked() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446D7C0))(this);
	}
	template <typename T = void> T OnStateEmpty() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446DC18))(this);
	}
	template <typename T = void> T OnStateSoldOut() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446DDD4))(this);
	}
	template <typename T = void> T ShowReceiveItems() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446E050))(this);
	}
	template <typename T = void> T ClaimReward() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446E3E4))(this);
	}
	template <typename T = void> T set_EntranceFrom(int32_t value) {
		return ((T (*)(SafeBoxMainController*, int32_t))(Il2CppBase() + 0x446E4F4))(this, value);
	}
	template <typename T = void> T OnPaySucess(uintptr_t obj) {
		return ((T (*)(SafeBoxMainController*, uintptr_t))(Il2CppBase() + 0x446E4FC))(this, obj);
	}
	template <typename T = void> T OnSafeBoxBuyCheckFailed(uintptr_t obj) {
		return ((T (*)(SafeBoxMainController*, uintptr_t))(Il2CppBase() + 0x446E9EC))(this, obj);
	}
	template <typename T = void> T OnPayFail(uintptr_t obj) {
		return ((T (*)(SafeBoxMainController*, uintptr_t))(Il2CppBase() + 0x446F16C))(this, obj);
	}
	template <typename T = void> T OnSafeBoxPayInfoArrived(uintptr_t obj) {
		return ((T (*)(SafeBoxMainController*, uintptr_t))(Il2CppBase() + 0x446F670))(this, obj);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F858))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F900))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F90C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F910))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F914))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView(bool P0) {
		return ((T (*)(SafeBoxMainController*, bool))(Il2CppBase() + 0x446F918))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateFull() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F91C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateUnlocked() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F920))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateLocked() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F924))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEmpty() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateSoldOut() {
		return ((T (*)(SafeBoxMainController*))(Il2CppBase() + 0x446F92C))(this);
	}

};

}
