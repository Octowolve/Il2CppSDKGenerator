#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomInfoCellEn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomInfoCell_En"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Title1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& BtnSelect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Sprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& SpriteIcon1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Mode_Tag_hot() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Mode_Tag_new() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SpriteSelect() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Map_Tag_hot() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& Map_Tag_new() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SpriteLine() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SpriteArrow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& mDisable() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& mSelected() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = int32_t> T& Row() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Controller() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mMainContainer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mMainColider() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mDragScrollView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix4_Configure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSelectClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHover() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwnerView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T set_Disable(bool value) {
		return ((T (*)(RoomInfoCellEn*, bool))(Il2CppBase() + 0x20CE7F0))(this, value);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(RoomInfoCellEn*, bool))(Il2CppBase() + 0x20CE9A4))(this, value);
	}
	template <typename T = void> T set_Row(int32_t value) {
		return ((T (*)(RoomInfoCellEn*, int32_t))(Il2CppBase() + 0x20CEA70))(this, value);
	}
	template <typename T = int32_t> T get_Row() {
		return ((T (*)(RoomInfoCellEn*))(Il2CppBase() + 0x20CEA78))(this);
	}
	template <typename T = void> T set_Controller(uintptr_t value) {
		return ((T (*)(RoomInfoCellEn*, uintptr_t))(Il2CppBase() + 0x20CEA80))(this, value);
	}
	template <typename T = uintptr_t> T get_Controller() {
		return ((T (*)(RoomInfoCellEn*))(Il2CppBase() + 0x20CEA88))(this);
	}
	template <typename T = void> T Configure(uintptr_t data) {
		return ((T (*)(RoomInfoCellEn*, uintptr_t))(Il2CppBase() + 0x20CEA90))(this, data);
	}
	template <typename T = void> T Configure_1(uintptr_t mapConfig) {
		return ((T (*)(RoomInfoCellEn*, uintptr_t))(Il2CppBase() + 0x20CEC2C))(this, mapConfig);
	}
	template <typename T = void> T Configure_2(uintptr_t zombieMpMapConfig) {
		return ((T (*)(RoomInfoCellEn*, uintptr_t))(Il2CppBase() + 0x20CEDB0))(this, zombieMpMapConfig);
	}
	template <typename T = void> T Configure_3(uintptr_t modeConfig) {
		return ((T (*)(RoomInfoCellEn*, uintptr_t))(Il2CppBase() + 0x20CF0D0))(this, modeConfig);
	}
	template <typename T = void> T Configure_4(uintptr_t chapterInfo) {
		return ((T (*)(RoomInfoCellEn*, uintptr_t))(Il2CppBase() + 0x20CEF28))(this, chapterInfo);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RoomInfoCellEn*))(Il2CppBase() + 0x20CF450))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RoomInfoCellEn*))(Il2CppBase() + 0x20CF758))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RoomInfoCellEn*))(Il2CppBase() + 0x20CF8EC))(this);
	}
	template <typename T = void> T OnBtnSelectClick() {
		return ((T (*)(RoomInfoCellEn*))(Il2CppBase() + 0x20CFA80))(this);
	}
	template <typename T = void> T OnHover(bool isOver) {
		return ((T (*)(RoomInfoCellEn*, bool))(Il2CppBase() + 0x20CFC68))(this, isOver);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(RoomInfoCellEn*, bool))(Il2CppBase() + 0x20CFD08))(this, isPressed);
	}
	template <typename T = void> T SetOwnerView(bool bOwner) {
		return ((T (*)(RoomInfoCellEn*, bool))(Il2CppBase() + 0x20CFE60))(this, bOwner);
	}

};

}
