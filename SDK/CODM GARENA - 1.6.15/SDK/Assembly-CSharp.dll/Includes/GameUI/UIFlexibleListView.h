#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlexibleListView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlexibleListView"));
	}

	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& mTable() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& cellSize() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& DataSource() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppList<uintptr_t>*>*> T& mCellCacheDic() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& mCellCacheUsedDic() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& Controller() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocResuedCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AllocResuedCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllCells() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIFlexibleListView*))(Il2CppBase() + 0x3ADA268))(this);
	}
	template <typename T = void> T set_DataSource(uintptr_t value) {
		return ((T (*)(UIFlexibleListView*, uintptr_t))(Il2CppBase() + 0x3ADA4E4))(this, value);
	}
	template <typename T = uintptr_t> T get_DataSource() {
		return ((T (*)(UIFlexibleListView*))(Il2CppBase() + 0x3ADA4EC))(this);
	}
	template <typename T = uintptr_t> T AllocResuedCell(uintptr_t assetID) {
		return ((T (*)(UIFlexibleListView*, uintptr_t))(Il2CppBase() + 0x3354DF8))(this, assetID);
	}
	template <typename T = uintptr_t> T AllocResuedCell_1(uintptr_t type, uintptr_t assetID, uintptr_t typ) {
		return ((T (*)(UIFlexibleListView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ADA4F4))(this, type, assetID, typ);
	}
	template <typename T = uintptr_t> T CreateCell(uintptr_t assetID) {
		return ((T (*)(UIFlexibleListView*, uintptr_t))(Il2CppBase() + 0x3355134))(this, assetID);
	}
	template <typename T = uintptr_t> T CreateCell_1(uintptr_t type, uintptr_t assetID) {
		return ((T (*)(UIFlexibleListView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3ADA744))(this, type, assetID);
	}
	template <typename T = void> T HideAllCells() {
		return ((T (*)(UIFlexibleListView*))(Il2CppBase() + 0x3ADADE8))(this);
	}
	template <typename T = void> T Refresh(bool resetposition) {
		return ((T (*)(UIFlexibleListView*, bool))(Il2CppBase() + 0x3ADB340))(this, resetposition);
	}
	template <typename T = void> T set_Controller(uintptr_t value) {
		return ((T (*)(UIFlexibleListView*, uintptr_t))(Il2CppBase() + 0x3ADB724))(this, value);
	}
	template <typename T = uintptr_t> T get_Controller() {
		return ((T (*)(UIFlexibleListView*))(Il2CppBase() + 0x3ADB72C))(this);
	}
	template <typename T = void> T OnClickCell(int32_t index) {
		return ((T (*)(UIFlexibleListView*, int32_t))(Il2CppBase() + 0x3ADB734))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(UIFlexibleListView*))(Il2CppBase() + 0x3ADB864))(this);
	}

};

}
