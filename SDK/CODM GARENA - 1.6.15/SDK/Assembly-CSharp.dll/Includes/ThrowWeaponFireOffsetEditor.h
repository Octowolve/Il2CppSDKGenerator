#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ThrowWeaponFireOffsetEditor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ThrowWeaponFireOffsetEditor"));
	}

	template <typename T = uintptr_t> T& FireOffset1P() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FireOffset3P() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& DirectOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& VehicleOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& ModityOffset() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsInit() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ThrowWeaponFireOffsetEditor*))(Il2CppBase() + 0x4658F6C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ThrowWeaponFireOffsetEditor*))(Il2CppBase() + 0x4659290))(this);
	}

};

}
