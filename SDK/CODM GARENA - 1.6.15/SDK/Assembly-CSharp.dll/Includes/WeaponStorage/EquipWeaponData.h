#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipWeaponData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipWeaponData"));
	}

	template <typename T = uintptr_t> T& OpticData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AttachmentDataList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& CamoData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& KillNumDic() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> static T& AttachLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCommon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEquipment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCSVData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetKillNumInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKillNumInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T InitCommon() {
		return ((T (*)(EquipWeaponData*))(Il2CppBase() + 0x4C5CE34))(this);
	}
	template <typename T = void> T UpdateEquipment(uintptr_t weaponData) {
		return ((T (*)(EquipWeaponData*, uintptr_t))(Il2CppBase() + 0x4C5D3E4))(this, weaponData);
	}
	template <typename T = void> T UpdateCSVData() {
		return ((T (*)(EquipWeaponData*))(Il2CppBase() + 0x4C5D5B8))(this);
	}
	template <typename T = void> T SetKillNumInfo(Il2CppList<uint32_t>* killNumList) {
		return ((T (*)(EquipWeaponData*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x4C5D6BC))(this, killNumList);
	}
	template <typename T = int32_t> T GetKillNumInfo(uintptr_t type) {
		return ((T (*)(EquipWeaponData*, uintptr_t))(Il2CppBase() + 0x4C5D818))(this, type);
	}
	template <typename T = void> T ClearData() {
		return ((T (*)(EquipWeaponData*))(Il2CppBase() + 0x4C5D938))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCSVData() {
		return ((T (*)(EquipWeaponData*))(Il2CppBase() + 0x4C5DB3C))(this);
	}

};

}
