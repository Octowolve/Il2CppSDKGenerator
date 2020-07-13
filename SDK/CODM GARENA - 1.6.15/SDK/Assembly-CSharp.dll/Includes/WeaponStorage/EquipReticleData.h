#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipReticleData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipReticleData"));
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

	template <typename T = uintptr_t> T get_Conf() {
		return ((T (*)(EquipReticleData*))(Il2CppBase() + 0x4C5C760))(this);
	}
	template <typename T = void> T UpdateCSVData() {
		return ((T (*)(EquipReticleData*))(Il2CppBase() + 0x4C5C8DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateCSVData() {
		return ((T (*)(EquipReticleData*))(Il2CppBase() + 0x4C5C9E8))(this);
	}

};

}
