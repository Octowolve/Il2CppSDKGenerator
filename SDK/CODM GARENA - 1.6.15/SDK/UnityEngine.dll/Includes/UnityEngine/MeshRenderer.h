#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MeshRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MeshRenderer"));
	}


	template <typename T = void> T set_additionalVertexStreams(uintptr_t value) {
		return ((T (*)(MeshRenderer*, uintptr_t))(Il2CppBase() + 0x4AB8FDC))(this, value);
	}
	template <typename T = void> T set_ignorePerformRendering(bool value) {
		return ((T (*)(MeshRenderer*, bool))(Il2CppBase() + 0x4AB907C))(this, value);
	}
	template <typename T = void> T set_overrideLocalAABB(uintptr_t value) {
		return ((T (*)(MeshRenderer*, uintptr_t))(Il2CppBase() + 0x4AB911C))(this, value);
	}
	template <typename T = void> T INTERNAL_set_overrideLocalAABB(uintptr_t value) {
		return ((T (*)(MeshRenderer*, uintptr_t))(Il2CppBase() + 0x4AB9144))(this, value);
	}
	template <typename T = void> T set_FixedBound(uintptr_t value) {
		return ((T (*)(MeshRenderer*, uintptr_t))(Il2CppBase() + 0x4AB91E4))(this, value);
	}
	template <typename T = void> T INTERNAL_set_FixedBound(uintptr_t value) {
		return ((T (*)(MeshRenderer*, uintptr_t))(Il2CppBase() + 0x4AB920C))(this, value);
	}
	template <typename T = void> T set_UseFixedBound(bool value) {
		return ((T (*)(MeshRenderer*, bool))(Il2CppBase() + 0x4AB92AC))(this, value);
	}

};

}
