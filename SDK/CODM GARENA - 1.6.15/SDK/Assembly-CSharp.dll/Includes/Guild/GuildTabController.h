#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildTabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildTabController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_GuildDataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_MissionDataStore() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_GuildApplyMsgDataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_GuildWelfareDataStore() {
		return *(T*)((uintptr_t)this + 0x58);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetupTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF52C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF5368))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF59C8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF5ADC))(this);
	}
	template <typename T = void> T SetupTabController() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF5550))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF5BF0))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildTabController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BF60D4))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T NotifyTabChanged(int32_t index) {
		return ((T (*)(GuildTabController*, int32_t))(Il2CppBase() + 0x3BF61A0))(this, index);
	}
	template <typename T = void> T ChangeTabController(int32_t index) {
		return ((T (*)(GuildTabController*, int32_t))(Il2CppBase() + 0x3BF67AC))(this, index);
	}
	template <typename T = void> T ShowController(int32_t index) {
		return ((T (*)(GuildTabController*, int32_t))(Il2CppBase() + 0x3BF62F4))(this, index);
	}
	template <typename T = void> T UpdateRedPoint() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF5F30))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF69CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF69D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF69DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF69E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildTabController*))(Il2CppBase() + 0x3BF69EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NotifyTabChanged(int32_t P0) {
		return ((T (*)(GuildTabController*, int32_t))(Il2CppBase() + 0x3BF69F4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeTabController(int32_t P0) {
		return ((T (*)(GuildTabController*, int32_t))(Il2CppBase() + 0x3BF69FC))(this, P0);
	}

};

}
