#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Skybox
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Skybox"));
	}


	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(Skybox*))(Il2CppBase() + 0x4E8300C))(this);
	}
	template <typename T = void> T set_material(uintptr_t value) {
		return ((T (*)(Skybox*, uintptr_t))(Il2CppBase() + 0x4E830A4))(this, value);
	}

};

}
