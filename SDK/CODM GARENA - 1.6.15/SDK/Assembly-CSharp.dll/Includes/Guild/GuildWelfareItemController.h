#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildWelfareItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildWelfareItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_WelfareID() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGuildWelfareClaimed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x47494C8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x474956C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x47496C8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x4749880))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(GuildWelfareItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4749A14))(this, list, index, data);
	}
	template <typename T = void> T OnDetailClick() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x474A640))(this);
	}
	template <typename T = void> T OnClaimClick() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x474A748))(this);
	}
	template <typename T = void> T SetWeaponData(uintptr_t csv) {
		return ((T (*)(GuildWelfareItemController*, uintptr_t))(Il2CppBase() + 0x474A09C))(this, csv);
	}
	template <typename T = void> T OnGuildWelfareClaimed(int32_t welfare_id) {
		return ((T (*)(GuildWelfareItemController*, int32_t))(Il2CppBase() + 0x474A840))(this, welfare_id);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildWelfareItemController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x474AC8C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x474ADCC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x474ADD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x474ADDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildWelfareItemController*))(Il2CppBase() + 0x474ADE4))(this);
	}

};

}
