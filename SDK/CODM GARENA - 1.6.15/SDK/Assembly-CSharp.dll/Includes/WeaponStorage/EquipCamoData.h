#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipCamoData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipCamoData"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateData(uintptr_t data) {
		return ((T (*)(EquipCamoData*, uintptr_t))(Il2CppBase() + 0x4C582A8))(this, data);
	}

};

}
