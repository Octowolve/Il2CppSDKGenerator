#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipmentEachPropertyItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipmentEachPropertyItemController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> static T& GridNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bFirstTimeInit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mGridItemList() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPropertyAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(EquipmentEachPropertyItemController*))(Il2CppBase() + 0x4C5A27C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(EquipmentEachPropertyItemController*))(Il2CppBase() + 0x4C5A320))(this);
	}
	template <typename T = void> T SetData(Il2CppString* name, int32_t propertyNum) {
		return ((T (*)(EquipmentEachPropertyItemController*, Il2CppString*, int32_t))(Il2CppBase() + 0x4C5A530))(this, name, propertyNum);
	}
	template <typename T = void> T SetCurrentProperty(int32_t propertyNum) {
		return ((T (*)(EquipmentEachPropertyItemController*, int32_t))(Il2CppBase() + 0x4C5A634))(this, propertyNum);
	}
	template <typename T = void> T ShowPropertyAnimation() {
		return ((T (*)(EquipmentEachPropertyItemController*))(Il2CppBase() + 0x4C5A948))(this);
	}
	template <typename T = void> T ChangeProperty(int32_t property, int32_t addtion) {
		return ((T (*)(EquipmentEachPropertyItemController*, int32_t, int32_t))(Il2CppBase() + 0x4C5ABE0))(this, property, addtion);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(EquipmentEachPropertyItemController*))(Il2CppBase() + 0x4C5ADA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(EquipmentEachPropertyItemController*))(Il2CppBase() + 0x4C5ADB0))(this);
	}

};

}
