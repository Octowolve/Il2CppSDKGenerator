#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class GenericGrid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "GenericGrid"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& sds() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& _callBack() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& itemClick() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& itemSelect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& itemHold() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _dataCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& _itemScale() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& lastSelectItemIdx() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _sameSelect() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppArray<uintptr_t>*>*> T& itemRenders() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindItemClickEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindItemSelectEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindItemHoldEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAllChild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScrollX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollerToIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCullingCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T BindGrid(uintptr_t itemPrefab, void* callBack, float itemScale, bool sameSelect) {
		return ((T (*)(GenericGrid*, uintptr_t, void*, float, bool))(Il2CppBase() + 0x22DC170))(this, itemPrefab, callBack, itemScale, sameSelect);
	}
	template <typename T = void> T BindItemClickEvent(void* callBack) {
		return ((T (*)(GenericGrid*, void*))(Il2CppBase() + 0x22DC2FC))(this, callBack);
	}
	template <typename T = void> T BindItemSelectEvent(void* callBack) {
		return ((T (*)(GenericGrid*, void*))(Il2CppBase() + 0x22DC3A4))(this, callBack);
	}
	template <typename T = void> T BindItemHoldEvent(void* callBack) {
		return ((T (*)(GenericGrid*, void*))(Il2CppBase() + 0x22DC44C))(this, callBack);
	}
	template <typename T = void> T SetDataCount(int32_t count) {
		return ((T (*)(GenericGrid*, int32_t))(Il2CppBase() + 0x22DC4F4))(this, count);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(GenericGrid*))(Il2CppBase() + 0x22DCC34))(this);
	}
	template <typename T = void> T ResetPos() {
		return ((T (*)(GenericGrid*))(Il2CppBase() + 0x22DCA78))(this);
	}
	template <typename T = void> T CheckAllChild() {
		return ((T (*)(GenericGrid*))(Il2CppBase() + 0x22DC694))(this);
	}
	template <typename T = void> T OnItemPress(uintptr_t go, bool state) {
		return ((T (*)(GenericGrid*, uintptr_t, bool))(Il2CppBase() + 0x22DCD78))(this, go, state);
	}
	template <typename T = void> T SetSelectItem(int32_t idx) {
		return ((T (*)(GenericGrid*, int32_t))(Il2CppBase() + 0x22DCF40))(this, idx);
	}
	template <typename T = void> T OnItemClick(uintptr_t go) {
		return ((T (*)(GenericGrid*, uintptr_t))(Il2CppBase() + 0x22DD134))(this, go);
	}
	template <typename T = void> T SetScrollX(float x) {
		return ((T (*)(GenericGrid*, float))(Il2CppBase() + 0x22DD2F8))(this, x);
	}
	template <typename T = void> T ScrollerToIndex(int32_t index, int32_t LineCount) {
		return ((T (*)(GenericGrid*, int32_t, int32_t))(Il2CppBase() + 0x22DD4DC))(this, index, LineCount);
	}
	template <typename T = void> T SetCulling(uintptr_t p, Il2CppString* shderName) {
		return ((T (*)(GenericGrid*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x22DD664))(this, p, shderName);
	}
	template <typename T = void> T SetCullingCallBack(void* OnCullingCallBack) {
		return ((T (*)(GenericGrid*, void*))(Il2CppBase() + 0x22DD928))(this, OnCullingCallBack);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GenericGrid*))(Il2CppBase() + 0x22DDB34))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(GenericGrid*))(Il2CppBase() + 0x22DDBDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GenericGrid*))(Il2CppBase() + 0x22DDC84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(GenericGrid*))(Il2CppBase() + 0x22DDC8C))(this);
	}

};

}
