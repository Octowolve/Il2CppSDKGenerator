#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Cubemap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Cubemap"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T GetPixels(uintptr_t face, int32_t miplevel) {
		return ((T (*)(Cubemap*, uintptr_t, int32_t))(Il2CppBase() + 0x4DA369C))(this, face, miplevel);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetPixels_1(uintptr_t face) {
		return ((T (*)(Cubemap*, uintptr_t))(Il2CppBase() + 0x4DA3744))(this, face);
	}
	template <typename T = void> static T Internal_Create(uintptr_t mono, int32_t size, uintptr_t format, bool mipmap) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x4DA35EC))(0, mono, size, format, mipmap);
	}

};

}
