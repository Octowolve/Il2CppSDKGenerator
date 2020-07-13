#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TreePrototype
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TreePrototype"));
	}

	template <typename T = uintptr_t> T& m_Prefab() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_BendFactor() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_prefab(uintptr_t value) {
		return ((T (*)(TreePrototype*, uintptr_t))(Il2CppBase() + 0x4D39D0C))(this, value);
	}
	template <typename T = void> T set_bendFactor(float value) {
		return ((T (*)(TreePrototype*, float))(Il2CppBase() + 0x4D39D14))(this, value);
	}

};

}
