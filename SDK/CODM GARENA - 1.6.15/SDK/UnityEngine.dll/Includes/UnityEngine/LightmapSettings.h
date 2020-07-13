#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LightmapSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LightmapSettings"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> static T get_lightmaps() {
		return ((T (*)(void *))(Il2CppBase() + 0x47A7320))(0);
	}
	template <typename T = void> static T set_lightmaps(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47A73B0))(0, value);
	}
	template <typename T = void> static T set_lightmapsMode(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A7448))(0, value);
	}
	template <typename T = void> static T AddLightProbesStreamable(uintptr_t lightProbes, uintptr_t transform, uintptr_t localAABB) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A74E0))(0, lightProbes, transform, localAABB);
	}
	template <typename T = void> static T INTERNAL_CALL_AddLightProbesStreamable(uintptr_t lightProbes, uintptr_t transform, uintptr_t localAABB) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x47A7524))(0, lightProbes, transform, localAABB);
	}
	template <typename T = void> static T RemoveLightProbesStreamable(uintptr_t transform) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47A75CC))(0, transform);
	}
	template <typename T = void> static T set_lightProbesStreamableFadeFactor(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x47A7664))(0, value);
	}
	template <typename T = void> static T set_useLightProbesStreamable(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x47A76FC))(0, value);
	}

};

}
