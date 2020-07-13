#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class SkinnedMeshRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "SkinnedMeshRenderer"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_bones() {
		return ((T (*)(SkinnedMeshRenderer*))(Il2CppBase() + 0x4E82BC4))(this);
	}
	template <typename T = void> T set_bones(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SkinnedMeshRenderer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E82C5C))(this, value);
	}
	template <typename T = uintptr_t> T get_rootBone() {
		return ((T (*)(SkinnedMeshRenderer*))(Il2CppBase() + 0x4E82CFC))(this);
	}
	template <typename T = void> T set_rootBone(uintptr_t value) {
		return ((T (*)(SkinnedMeshRenderer*, uintptr_t))(Il2CppBase() + 0x4E82D94))(this, value);
	}
	template <typename T = uintptr_t> T get_sharedMesh() {
		return ((T (*)(SkinnedMeshRenderer*))(Il2CppBase() + 0x4E82E34))(this);
	}
	template <typename T = void> T set_sharedMesh(uintptr_t value) {
		return ((T (*)(SkinnedMeshRenderer*, uintptr_t))(Il2CppBase() + 0x4E82ECC))(this, value);
	}
	template <typename T = void> T set_ignorePerformRendering(bool value) {
		return ((T (*)(SkinnedMeshRenderer*, bool))(Il2CppBase() + 0x4E82F6C))(this, value);
	}

};

}
