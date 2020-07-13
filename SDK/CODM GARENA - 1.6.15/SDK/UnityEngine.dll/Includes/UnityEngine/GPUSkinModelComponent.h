#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GPUSkinModelComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GPUSkinModelComponent"));
	}


	template <typename T = void> static T set_executionOrder(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47722F0))(0, value);
	}
	template <typename T = bool> T get_isGpuSkinEnable() {
		return ((T (*)(GPUSkinModelComponent*))(Il2CppBase() + 0x4772388))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_AllBones() {
		return ((T (*)(GPUSkinModelComponent*))(Il2CppBase() + 0x4772420))(this);
	}
	template <typename T = void> T set_AllBones(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GPUSkinModelComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47724B8))(this, value);
	}
	template <typename T = void> T set_AllPaths(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GPUSkinModelComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4772558))(this, value);
	}
	template <typename T = void> T set_AllBindPoses(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GPUSkinModelComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47725F8))(this, value);
	}
	template <typename T = void> T set_RuntimeAllBones(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(GPUSkinModelComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4772698))(this, value);
	}
	template <typename T = void> T ClearRuntimeAllBones() {
		return ((T (*)(GPUSkinModelComponent*))(Il2CppBase() + 0x4772738))(this);
	}
	template <typename T = bool> T AddGPUSkinData(uintptr_t inMeshRenderer, Il2CppArray<uintptr_t>* inBones, int32_t size, bool inIsAttach) {
		return ((T (*)(GPUSkinModelComponent*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x47727D0))(this, inMeshRenderer, inBones, size, inIsAttach);
	}
	template <typename T = bool> T AddGPUSkinData_1(uintptr_t inMeshRenderer, Il2CppArray<uintptr_t>* inBones, int32_t size) {
		return ((T (*)(GPUSkinModelComponent*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x477288C))(this, inMeshRenderer, inBones, size);
	}
	template <typename T = bool> T AddExtraMaterial(uintptr_t inMeshRenderer, uintptr_t inMaterial) {
		return ((T (*)(GPUSkinModelComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x47728AC))(this, inMeshRenderer, inMaterial);
	}
	template <typename T = bool> T RemoveExtraMaterial(uintptr_t inMeshRenderer, uintptr_t inMaterial) {
		return ((T (*)(GPUSkinModelComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4772954))(this, inMeshRenderer, inMaterial);
	}

};

}
