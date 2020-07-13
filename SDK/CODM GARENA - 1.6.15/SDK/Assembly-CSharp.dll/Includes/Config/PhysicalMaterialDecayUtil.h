#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PhysicalMaterialDecayUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PhysicalMaterialDecayUtil"));
	}

	template <typename T = bool> static T& m_Cached() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& EnablePenArr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BackToSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnablePenetration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDecay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetDecay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> static T Check() {
		return ((T (*)(void *))(Il2CppBase() + 0x3780190))(0);
	}
	template <typename T = void> static T BackToSource() {
		return ((T (*)(void *))(Il2CppBase() + 0x3780720))(0);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x37802D8))(0);
	}
	template <typename T = bool> static T EnablePenetration(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3780960))(0, type);
	}
	template <typename T = float> static T GetDecay(uintptr_t type, uintptr_t bType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x377A354))(0, type, bType);
	}
	template <typename T = float> static T GetDecay_1(uintptr_t type, uintptr_t bType, float thickness, bool isBRGame) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, bool))(Il2CppBase() + 0x3780AA4))(0, type, bType, thickness, isBRGame);
	}

};

}
