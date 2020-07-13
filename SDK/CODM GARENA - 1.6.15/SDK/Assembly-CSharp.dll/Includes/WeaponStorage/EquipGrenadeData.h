#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipGrenadeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipGrenadeData"));
	}

	template <typename T = uintptr_t> T& LethalGrendeData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& TacticalGrenadeData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInUseGrenade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipmentInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetServerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T IsInUseGrenade(uint64_t clientID) {
		return ((T (*)(EquipGrenadeData*, uint64_t))(Il2CppBase() + 0x4C58488))(this, clientID);
	}
	template <typename T = uintptr_t> T GetEquipmentInfo(uint64_t clientID) {
		return ((T (*)(EquipGrenadeData*, uint64_t))(Il2CppBase() + 0x4C58594))(this, clientID);
	}
	template <typename T = bool> T IsEmpty(uintptr_t type) {
		return ((T (*)(EquipGrenadeData*, uintptr_t))(Il2CppBase() + 0x4C58670))(this, type);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(EquipGrenadeData*))(Il2CppBase() + 0x4C58744))(this);
	}
	template <typename T = uint64_t> T GetServerID(uint64_t ClientID) {
		return ((T (*)(EquipGrenadeData*, uint64_t))(Il2CppBase() + 0x4C58844))(this, ClientID);
	}

};

}
