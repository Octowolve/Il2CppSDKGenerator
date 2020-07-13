#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipOpticData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipOpticData"));
	}

	template <typename T = uintptr_t> T& ReticleData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCSVData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_OpticCSV() {
		return ((T (*)(EquipOpticData*))(Il2CppBase() + 0x4C5C0B8))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t data) {
		return ((T (*)(EquipOpticData*, uintptr_t))(Il2CppBase() + 0x4C5C234))(this, data);
	}
	template <typename T = void> T UpdateCSVData() {
		return ((T (*)(EquipOpticData*))(Il2CppBase() + 0x4C5C37C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCSVData() {
		return ((T (*)(EquipOpticData*))(Il2CppBase() + 0x4C5C488))(this);
	}

};

}
