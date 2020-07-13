#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Compass
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Compass"));
	}


	template <typename T = Il2CppVector3> T get_rawVector() {
		return ((T (*)(Compass*))(Il2CppBase() + 0x4DA0E90))(this);
	}
	template <typename T = void> T INTERNAL_get_rawVector(uintptr_t* value) {
		return ((T (*)(Compass*, uintptr_t*))(Il2CppBase() + 0x4DA0ED8))(this, value);
	}
	template <typename T = void> T set_enabled(bool value) {
		return ((T (*)(Compass*, bool))(Il2CppBase() + 0x4DA0F78))(this, value);
	}

};

}
