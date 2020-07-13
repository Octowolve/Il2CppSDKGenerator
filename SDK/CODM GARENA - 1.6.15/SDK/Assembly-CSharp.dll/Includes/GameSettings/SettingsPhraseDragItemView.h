#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsPhraseDragItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsPhraseDragItemView"));
	}

	template <typename T = uintptr_t> T& onObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& offObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& editObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& indexLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& descLabel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& deleteButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mCsv() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AddStatus() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& DisableAddStatus() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& mIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMsgId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCacheCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEditState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> T get_Index() {
		return ((T (*)(SettingsPhraseDragItemView*))(Il2CppBase() + 0x28B0F6C))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(SettingsPhraseDragItemView*, int32_t))(Il2CppBase() + 0x28B0F74))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SettingsPhraseDragItemView*))(Il2CppBase() + 0x28B0F7C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SettingsPhraseDragItemView*))(Il2CppBase() + 0x28B11EC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SettingsPhraseDragItemView*))(Il2CppBase() + 0x28B12AC))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SettingsPhraseDragItemView*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x28B136C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = int32_t> T GetMsgId() {
		return ((T (*)(SettingsPhraseDragItemView*))(Il2CppBase() + 0x28B1734))(this);
	}
	template <typename T = void> T SetCacheCsv(uintptr_t csv, int32_t index) {
		return ((T (*)(SettingsPhraseDragItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x28B17EC))(this, csv, index);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(SettingsPhraseDragItemView*))(Il2CppBase() + 0x28B18B8))(this);
	}
	template <typename T = void> T SetEditState(bool isActive) {
		return ((T (*)(SettingsPhraseDragItemView*, bool))(Il2CppBase() + 0x28B1540))(this, isActive);
	}
	template <typename T = void> T OnDeleteBtnClick(uintptr_t obj) {
		return ((T (*)(SettingsPhraseDragItemView*, uintptr_t))(Il2CppBase() + 0x28B1B7C))(this, obj);
	}
	template <typename T = void> T OnItemClick(uintptr_t obj) {
		return ((T (*)(SettingsPhraseDragItemView*, uintptr_t))(Il2CppBase() + 0x28B1CE0))(this, obj);
	}

};

}
