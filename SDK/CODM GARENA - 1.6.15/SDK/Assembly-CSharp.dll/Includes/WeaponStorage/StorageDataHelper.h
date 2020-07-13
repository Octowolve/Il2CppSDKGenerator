#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class StorageDataHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "StorageDataHelper"));
	}

	template <typename T = uint64_t> static T& ThirdPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& SecondPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToEquipmentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToWeaponType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToGrenadeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToLethalType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToMeleeType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToTacticalType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToLauncherType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeToAttachmentType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipmentCsv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> static T ChangeToEquipmentType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A330B0))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToWeaponType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A3317C))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToGrenadeType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A33254))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToLethalType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A3332C))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToMeleeType(uint32_t itemID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x4A33418))(0, itemID);
	}
	template <typename T = uintptr_t> static T ChangeToTacticalType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A33504))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToLauncherType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A335F0))(0, clientID);
	}
	template <typename T = uintptr_t> static T ChangeToAttachmentType(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A336DC))(0, clientID);
	}
	template <typename T = uintptr_t> static T GetEquipmentCsv(uint64_t clientID) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x4A3380C))(0, clientID);
	}

};

}
