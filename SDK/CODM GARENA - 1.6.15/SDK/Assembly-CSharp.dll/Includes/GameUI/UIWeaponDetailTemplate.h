#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIWeaponDetailTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIWeaponDetailTemplate"));
	}

	template <typename T = uintptr_t> T& WeaponTable() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& info_1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& property_2() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& skill_3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& desc_4() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& level_5() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& WeaponNameLabel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& WeaponQualitySprite() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DetailBtn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& DetailSprite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& line1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& line2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& line3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& line4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& line5() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& WeaponSkillGrid() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& WeaponSkillTemplate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeaponSkillList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& PropertyGrid() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& PropertySprite() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& PropGrid() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& PropTemplate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& PropBackground() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& WeaponPropList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ExpLabel() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& bShowDetail() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& bDirty() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPropertyProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEquipmentProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponSkillView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDataWeaponDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UIWeaponDetailTemplate*))(Il2CppBase() + 0x2A20304))(this);
	}
	template <typename T = void> T SetWeaponData(uintptr_t weaponInfo) {
		return ((T (*)(UIWeaponDetailTemplate*, uintptr_t))(Il2CppBase() + 0x2A20658))(this, weaponInfo);
	}
	template <typename T = void> T SetWeaponData_1(uint32_t itemId, uintptr_t weaponInfo, bool isUnlock) {
		return ((T (*)(UIWeaponDetailTemplate*, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x2A2073C))(this, itemId, weaponInfo, isUnlock);
	}
	template <typename T = void> T ShowDetail(bool bShow) {
		return ((T (*)(UIWeaponDetailTemplate*, bool))(Il2CppBase() + 0x2A22594))(this, bShow);
	}
	template <typename T = void> T OnDetailBtnClick(uintptr_t obj) {
		return ((T (*)(UIWeaponDetailTemplate*, uintptr_t))(Il2CppBase() + 0x2A22EB0))(this, obj);
	}
	template <typename T = void> T RefreshLevel(uintptr_t weaponInfo) {
		return ((T (*)(UIWeaponDetailTemplate*, uintptr_t))(Il2CppBase() + 0x2A20CD4))(this, weaponInfo);
	}
	template <typename T = void> T SetPropertyProgress(uint32_t weaponId) {
		return ((T (*)(UIWeaponDetailTemplate*, uint32_t))(Il2CppBase() + 0x2A2110C))(this, weaponId);
	}
	template <typename T = void> T SetEquipmentProperty(uint32_t equipId) {
		return ((T (*)(UIWeaponDetailTemplate*, uint32_t))(Il2CppBase() + 0x2A227DC))(this, equipId);
	}
	template <typename T = void> T SetWeaponSkillView(Il2CppList<int32_t>* skillList) {
		return ((T (*)(UIWeaponDetailTemplate*, Il2CppList<int32_t>*))(Il2CppBase() + 0x2A21994))(this, skillList);
	}
	template <typename T = void> T SetWeaponProperty(Il2CppArray<uintptr_t>* propList) {
		return ((T (*)(UIWeaponDetailTemplate*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2A21EE0))(this, propList);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIWeaponDetailTemplate*))(Il2CppBase() + 0x2A22F74))(this);
	}
	template <typename T = void> T SetDataWeaponDetail(uintptr_t data, uint32_t itemId) {
		return ((T (*)(UIWeaponDetailTemplate*, uintptr_t, uint32_t))(Il2CppBase() + 0x2A230A0))(this, data, itemId);
	}

};

}
