#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInfoSelectorEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInfoSelector_En"));
	}

	template <typename T = int32_t> static T& MAP_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MODE_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CHAPTER_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAP_OUTERGLOW_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MODE_OUTERGLOW_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CHAPTER_OUTERGLOW_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& DynamicCell() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& AdaptMaxHeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AdaptActualHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& ScrollAdapt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& BtnExpand() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& StaticCell() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ContainerExpand() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& MaskColider() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ShowInExpand() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ShowInRetract() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Grid() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mDataSource() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CellList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& m_SelectedRow() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Expand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__Prepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_Room_IRoomInfoCellController_En_OnClickCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExpandClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T set_Controller(uintptr_t value) {
		return ((T (*)(RoomInfoSelectorEn*, uintptr_t))(Il2CppBase() + 0x20D000C))(this, value);
	}
	template <typename T = void> T set_DataSource(uintptr_t value) {
		return ((T (*)(RoomInfoSelectorEn*, uintptr_t))(Il2CppBase() + 0x20D0014))(this, value);
	}
	template <typename T = void> T set_SelectedRow(int32_t value) {
		return ((T (*)(RoomInfoSelectorEn*, int32_t))(Il2CppBase() + 0x20D001C))(this, value);
	}
	template <typename T = void> T Expand(bool expanded) {
		return ((T (*)(RoomInfoSelectorEn*, bool))(Il2CppBase() + 0x20D01CC))(this, expanded);
	}
	template <typename T = bool> T _Prepare(int32_t number) {
		return ((T (*)(RoomInfoSelectorEn*, int32_t))(Il2CppBase() + 0x20D0E04))(this, number);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RoomInfoSelectorEn*))(Il2CppBase() + 0x20D1170))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RoomInfoSelectorEn*))(Il2CppBase() + 0x20D1520))(this);
	}
	template <typename T = void> T GameUI_Room_IRoomInfoCellController_En_OnClickCell(uintptr_t cell) {
		return ((T (*)(RoomInfoSelectorEn*, uintptr_t))(Il2CppBase() + 0x20D1790))(this, cell);
	}
	template <typename T = void> T OnBtnExpandClick() {
		return ((T (*)(RoomInfoSelectorEn*))(Il2CppBase() + 0x20D19B4))(this);
	}
	template <typename T = void> T ClickMask() {
		return ((T (*)(RoomInfoSelectorEn*))(Il2CppBase() + 0x20D1DF0))(this);
	}
	template <typename T = void> T AdaptHeight(int32_t num, int32_t cellHeight) {
		return ((T (*)(RoomInfoSelectorEn*, int32_t, int32_t))(Il2CppBase() + 0x20D08F8))(this, num, cellHeight);
	}

};

}
