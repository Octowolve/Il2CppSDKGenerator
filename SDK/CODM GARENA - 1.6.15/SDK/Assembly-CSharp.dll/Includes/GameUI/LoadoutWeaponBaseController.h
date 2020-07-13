#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponBaseController"));
	}

	template <typename T = uintptr_t> T& mLoadoutWeaponBaseView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& DISABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& ENABLE_WEAPON_VIEW_ALPHA() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompareWeaponBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponEquipedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailEquipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailTakeOffBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponCellClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponFilterItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDecorateTabSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4C248))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4C354))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4C3FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4C9CC))(this);
	}
	template <typename T = void> T OnCompareWeaponBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4CD98))(this);
	}
	template <typename T = void> T OnWeaponEquipBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4CE30))(this);
	}
	template <typename T = void> T OnWeaponEquipedBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4CEC8))(this);
	}
	template <typename T = void> T OnWeaponGotoBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4CF60))(this);
	}
	template <typename T = void> T OnDetailEquipBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4CFF8))(this);
	}
	template <typename T = void> T OnDetailTakeOffBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4D090))(this);
	}
	template <typename T = void> T OnDetailGotoBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4D128))(this);
	}
	template <typename T = void> T OnDetailCloseBtnClick() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4D1C0))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponCellClick(uintptr_t message) {
		return ((T (*)(LoadoutWeaponBaseController*, uintptr_t))(Il2CppBase() + 0x1F4D258))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterClick(uintptr_t message) {
		return ((T (*)(LoadoutWeaponBaseController*, uintptr_t))(Il2CppBase() + 0x1F4D2F8))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponFilterItemClick(uintptr_t message) {
		return ((T (*)(LoadoutWeaponBaseController*, uintptr_t))(Il2CppBase() + 0x1F4D398))(this, message);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutWeaponBaseController*, uintptr_t))(Il2CppBase() + 0x1F4D438))(this, message);
	}
	template <typename T = void> T OnDecorateTabSwitch(int32_t index) {
		return ((T (*)(LoadoutWeaponBaseController*, int32_t))(Il2CppBase() + 0x1F4D4D8))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4D578))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4D580))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4D588))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutWeaponBaseController*))(Il2CppBase() + 0x1F4D590))(this);
	}

};

}
