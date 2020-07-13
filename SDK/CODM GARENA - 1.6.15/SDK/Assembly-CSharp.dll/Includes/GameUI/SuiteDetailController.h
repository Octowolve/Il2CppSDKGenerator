#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SuiteDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SuiteDetailController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& buffActiveTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& curShowSuite() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& curSmd() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& curSuiteEquipedCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& curSuiteEquipedAllCount() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& effectObjs() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& curEffectObj() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& isSuiteTab() {
		return *(T*)((uintptr_t)this + 0x70);
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
	template <typename T = uintptr_t> static T& __Hotfix0_PreCloseAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSuiteTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDetailInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFrameEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoGetSuiteBuffActiveTimeReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetSuiteBuffActiveTimeRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x299CF14))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x299CFB8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x299D170))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x299D34C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x299D45C))(this);
	}
	template <typename T = void> T PreCloseAnimation() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x299D514))(this);
	}
	template <typename T = void> T ShowSuiteTab(Il2CppDictionary<uintptr_t, uintptr_t>* suiteSquad) {
		return ((T (*)(SuiteDetailController*, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x299DAB8))(this, suiteSquad);
	}
	template <typename T = void> T RefreshView(uintptr_t smd, uintptr_t suiteConf) {
		return ((T (*)(SuiteDetailController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x299E368))(this, smd, suiteConf);
	}
	template <typename T = void> T RefreshView_1(uintptr_t smd, int32_t suiteId) {
		return ((T (*)(SuiteDetailController*, uintptr_t, int32_t))(Il2CppBase() + 0x299EE58))(this, smd, suiteId);
	}
	template <typename T = void> T SetBaseInfo(uintptr_t smd, uintptr_t suiteConf, int32_t equipedCount, int32_t allCount) {
		return ((T (*)(SuiteDetailController*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x299F000))(this, smd, suiteConf, equipedCount, allCount);
	}
	template <typename T = void> T SetBuffView(uintptr_t suiteConf, int32_t equipedCount, int32_t allCount) {
		return ((T (*)(SuiteDetailController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x299FD58))(this, suiteConf, equipedCount, allCount);
	}
	template <typename T = void> T SetDetailInfo(uintptr_t smd, uintptr_t suiteConf) {
		return ((T (*)(SuiteDetailController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x299E448))(this, smd, suiteConf);
	}
	template <typename T = void> T SetFrameEffect(int32_t frameID) {
		return ((T (*)(SuiteDetailController*, int32_t))(Il2CppBase() + 0x29A12A4))(this, frameID);
	}
	template <typename T = void> T DoGetSuiteBuffActiveTimeReq() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x299D24C))(this);
	}
	template <typename T = void> T OnGetSuiteBuffActiveTimeRes(uintptr_t Msg) {
		return ((T (*)(SuiteDetailController*, uintptr_t))(Il2CppBase() + 0x29A1848))(this, Msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x29A1D24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x29A1D2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x29A1D34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x29A1D3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x29A1D44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreCloseAnimation() {
		return ((T (*)(SuiteDetailController*))(Il2CppBase() + 0x29A1D4C))(this);
	}

};

}
