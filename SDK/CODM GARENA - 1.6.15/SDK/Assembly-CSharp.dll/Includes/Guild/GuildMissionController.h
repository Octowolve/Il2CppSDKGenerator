#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMissionController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMissionController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMissonView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateObtainPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMissionValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnObtainAwardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCannotObtainClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGotoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTipsClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDA860))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDA904))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDAA54))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDAC74))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDAE68))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildMissionController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BDB770))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T UpdateMissonView() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDB080))(this);
	}
	template <typename T = void> T UpdateProgress() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDBFCC))(this);
	}
	template <typename T = void> T UpdateAward() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDB980))(this);
	}
	template <typename T = void> T UpdateObtainPanel() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDBCE8))(this);
	}
	template <typename T = int32_t> T GetMissionValue(int32_t value) {
		return ((T (*)(GuildMissionController*, int32_t))(Il2CppBase() + 0x3BDB844))(this, value);
	}
	template <typename T = void> T OnObtainAwardClick() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDCAAC))(this);
	}
	template <typename T = void> T OnCannotObtainClick() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDCC98))(this);
	}
	template <typename T = void> T OnGotoClick() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDCF44))(this);
	}
	template <typename T = void> T OnTipsClick() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDD0DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDD23C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDD244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDD24C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDD254))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildMissionController*))(Il2CppBase() + 0x3BDD25C))(this);
	}

};

}
