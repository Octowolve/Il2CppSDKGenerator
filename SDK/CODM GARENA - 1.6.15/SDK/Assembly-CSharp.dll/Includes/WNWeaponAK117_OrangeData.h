#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WNWeaponAK117OrangeData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WNWeaponAK117_OrangeData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ContinueKill() {
		return *(T*)((uintptr_t)this + 0x34C);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(WNWeaponAK117OrangeData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A59DE0))(this, bytes, position, targetType, mask, index, interrupt);
	}

};

}
