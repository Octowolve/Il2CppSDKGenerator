#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponShakeModeMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponShakeModeMgr"));
	}

	template <typename T = uintptr_t> static T& m_instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& m_WeaponShakeModeMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x33A75A8))(0);
	}
	template <typename T = uintptr_t> T CreateWeaponShakeMode(uintptr_t mode, uintptr_t modeData, uintptr_t ownerPawn) {
		return ((T (*)(WeaponShakeModeMgr*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x33A7744))(this, mode, modeData, ownerPawn);
	}

};

}
