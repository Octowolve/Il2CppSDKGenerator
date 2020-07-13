#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class EquipScoreStreakData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "EquipScoreStreakData"));
	}


	template <typename T = uintptr_t> T get_Conf() {
		return ((T (*)(EquipScoreStreakData*))(Il2CppBase() + 0x4C5C9F4))(this);
	}
	template <typename T = int32_t> T get_Score() {
		return ((T (*)(EquipScoreStreakData*))(Il2CppBase() + 0x4C5CB68))(this);
	}
	template <typename T = void> T UpdateData(uintptr_t data) {
		return ((T (*)(EquipScoreStreakData*, uintptr_t))(Il2CppBase() + 0x4C5CBB0))(this, data);
	}
	template <typename T = void> T UpdateCSVData() {
		return ((T (*)(EquipScoreStreakData*))(Il2CppBase() + 0x4C5CC14))(this);
	}

};

}
