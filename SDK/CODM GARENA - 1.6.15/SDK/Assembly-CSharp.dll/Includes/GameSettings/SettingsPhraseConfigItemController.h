#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsPhraseConfigItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsPhraseConfigItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& cacheMsg() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AF350))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AF4A0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AF544))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AF610))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SettingsPhraseConfigItemController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x28AF6DC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(SettingsPhraseConfigItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x28AF8E0))(this, list, index, data);
	}
	template <typename T = void> T RefreshAllView() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AFAB8))(this);
	}
	template <typename T = void> T OnClickEvent(uintptr_t msgData) {
		return ((T (*)(SettingsPhraseConfigItemController*, uintptr_t))(Il2CppBase() + 0x2891680))(this, msgData);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AFC7C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AFC84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AFC8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsPhraseConfigItemController*))(Il2CppBase() + 0x28AFC94))(this);
	}

};

}
