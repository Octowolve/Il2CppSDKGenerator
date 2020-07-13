#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipmentCommonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipmentCommonData"));
	}

	template <typename T = int32_t> T& PosIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& ServerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& mClientID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& OwnerClientID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& OwnerServerID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Exp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& GainType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ConfBase() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCSVData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLockNewEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uint64_t> T get_ClientID() {
		return ((T (*)(EquipmentCommonData*))(Il2CppBase() + 0x4C58148))(this);
	}
	template <typename T = void> T set_ClientID(uint64_t value) {
		return ((T (*)(EquipmentCommonData*, uint64_t))(Il2CppBase() + 0x4C57C68))(this, value);
	}
	template <typename T = Il2CppString*> T get_ResouceName() {
		return ((T (*)(EquipmentCommonData*))(Il2CppBase() + 0x4C58D50))(this);
	}
	template <typename T = uintptr_t> T get_ItemResouce() {
		return ((T (*)(EquipmentCommonData*))(Il2CppBase() + 0x4C58E7C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(EquipmentCommonData*))(Il2CppBase() + 0x4C58F40))(this);
	}
	template <typename T = void> T UpdateCSVData() {
		return ((T (*)(EquipmentCommonData*))(Il2CppBase() + 0x4C580B0))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t data) {
		return ((T (*)(EquipmentCommonData*, uintptr_t))(Il2CppBase() + 0x4C58C58))(this, data);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(EquipmentCommonData*))(Il2CppBase() + 0x4C59080))(this);
	}
	template <typename T = void> T UnLockNewEquipment(uintptr_t unlockData) {
		return ((T (*)(EquipmentCommonData*, uintptr_t))(Il2CppBase() + 0x4C59144))(this, unlockData);
	}
	template <typename T = void> T UpdateData_1(uintptr_t commonData) {
		return ((T (*)(EquipmentCommonData*, uintptr_t))(Il2CppBase() + 0x4C59258))(this, commonData);
	}

};

}
