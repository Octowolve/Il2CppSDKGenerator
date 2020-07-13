#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsLightenUpReceivePrizeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsLightenUpReceivePrizeController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_liveOpsTask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Activity() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_Index() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_LeftNum() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_TopNum() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_url() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TasksSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EA3EC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EA4F8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EA59C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EA77C))(this);
	}
	template <typename T = void> T SetData(int32_t index, int32_t leftNum, int32_t topNum) {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x34EA934))(this, index, leftNum, topNum);
	}
	template <typename T = void> T OnBtnShareClick() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EB2D4))(this);
	}
	template <typename T = void> T OnBtnClaimClick() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EB638))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EB7B8))(this);
	}
	template <typename T = int32_t> T TasksSort(uintptr_t task1, uintptr_t task2) {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34EB860))(this, task1, task2);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x34EB964))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> static T SetDatam__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34EBA38))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EBA74))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EBA7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EBA84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EBA8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LiveOpsLightenUpReceivePrizeController*))(Il2CppBase() + 0x34EBA94))(this);
	}

};

}
