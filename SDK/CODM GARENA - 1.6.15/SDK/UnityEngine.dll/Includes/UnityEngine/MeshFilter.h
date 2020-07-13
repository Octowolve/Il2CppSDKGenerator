#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MeshFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MeshFilter"));
	}


	template <typename T = uintptr_t> T get_mesh() {
		return ((T (*)(MeshFilter*))(Il2CppBase() + 0x4AB8D6C))(this);
	}
	template <typename T = void> T set_mesh(uintptr_t value) {
		return ((T (*)(MeshFilter*, uintptr_t))(Il2CppBase() + 0x4AB8E04))(this, value);
	}
	template <typename T = uintptr_t> T get_sharedMesh() {
		return ((T (*)(MeshFilter*))(Il2CppBase() + 0x4AB8EA4))(this);
	}
	template <typename T = void> T set_sharedMesh(uintptr_t value) {
		return ((T (*)(MeshFilter*, uintptr_t))(Il2CppBase() + 0x4AB8F3C))(this, value);
	}

};

}
