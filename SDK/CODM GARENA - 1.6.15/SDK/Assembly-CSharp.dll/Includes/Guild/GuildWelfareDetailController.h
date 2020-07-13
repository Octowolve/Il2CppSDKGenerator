#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildWelfareDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildWelfareDetailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mItemEasyList() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& m_WelfareID() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWelfareId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x4747BD8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x4747C7C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x4747F30))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x4747FFC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x47480C8))(this);
	}
	template <typename T = void> T SetWelfareId(uint32_t id) {
		return ((T (*)(GuildWelfareDetailController*, uint32_t))(Il2CppBase() + 0x4748170))(this, id);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildWelfareDetailController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4748240))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x47483FC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x4748598))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x47485A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x47485A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x47485B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildWelfareDetailController*))(Il2CppBase() + 0x47485B8))(this);
	}

};

}
