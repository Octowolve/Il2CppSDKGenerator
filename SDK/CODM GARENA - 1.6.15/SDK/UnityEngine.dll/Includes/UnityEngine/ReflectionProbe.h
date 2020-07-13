#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ReflectionProbe
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ReflectionProbe"));
	}


	template <typename T = void> T set_bakedTexture(uintptr_t value) {
		return ((T (*)(ReflectionProbe*, uintptr_t))(Il2CppBase() + 0x4ACFA94))(this, value);
	}

};

}
