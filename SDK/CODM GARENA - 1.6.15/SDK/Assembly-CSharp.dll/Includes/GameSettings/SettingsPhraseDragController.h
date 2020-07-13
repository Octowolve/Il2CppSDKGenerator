#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsPhraseDragController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsPhraseDragController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewPhraseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPhraseList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T Init() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28AFDE4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28AFF94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28B0060))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SettingsPhraseDragController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x28B012C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28B01E8))(this);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsPhraseDragController*, int32_t))(Il2CppBase() + 0x2890FBC))(this, depth);
	}
	template <typename T = void> T SetList(bool ifReset, Il2CppList<int32_t>* phraseList) {
		return ((T (*)(SettingsPhraseDragController*, bool, Il2CppList<int32_t>*))(Il2CppBase() + 0x288FF18))(this, ifReset, phraseList);
	}
	template <typename T = Il2CppList<int32_t>*> T GetNewPhraseList() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28B07E8))(this);
	}
	template <typename T = void> T SetPhraseList(Il2CppList<int32_t>* tempList) {
		return ((T (*)(SettingsPhraseDragController*, Il2CppList<int32_t>*))(Il2CppBase() + 0x28B0AD8))(this, tempList);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28B0BD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28B0BDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28B0BE4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsPhraseDragController*))(Il2CppBase() + 0x28B0BEC))(this);
	}

};

}
