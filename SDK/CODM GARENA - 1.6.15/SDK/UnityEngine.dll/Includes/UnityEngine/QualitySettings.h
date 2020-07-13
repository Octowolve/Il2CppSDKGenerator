#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class QualitySettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "QualitySettings"));
	}


	template <typename T = int32_t> static T GetQualityLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC73D0))(0);
	}
	template <typename T = void> static T SetQualityLevel(int32_t index, bool applyExpensiveChanges) {
		return ((T (*)(void *, int32_t, bool))(Il2CppBase() + 0x4AC7460))(0, index, applyExpensiveChanges);
	}
	template <typename T = void> static T SetQualityLevel_1(int32_t index) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC7500))(0, index);
	}
	template <typename T = void> static T set_runtimeMaxLODLevel(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC7508))(0, value);
	}
	template <typename T = int32_t> static T get_pixelLightCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC75A0))(0);
	}
	template <typename T = void> static T set_pixelLightCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC7630))(0, value);
	}
	template <typename T = uintptr_t> static T get_shadowMaskMode() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC76C8))(0);
	}
	template <typename T = void> static T set_shadowMaskMode(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC7758))(0, value);
	}
	template <typename T = uintptr_t> static T get_shadows() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC77F0))(0);
	}
	template <typename T = void> static T set_shadows(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC7880))(0, value);
	}
	template <typename T = uintptr_t> static T get_shadowProjection() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC7918))(0);
	}
	template <typename T = void> static T set_shadowProjection(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC79A8))(0, value);
	}
	template <typename T = int32_t> static T get_shadowCascades() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC7A40))(0);
	}
	template <typename T = void> static T set_shadowCascades(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC7AD0))(0, value);
	}
	template <typename T = void> static T set_depthDistance(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AC7B68))(0, value);
	}
	template <typename T = float> static T get_shadowDistance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC7C00))(0);
	}
	template <typename T = void> static T set_shadowDistance(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AC7C90))(0, value);
	}
	template <typename T = void> static T set_shadowStaticOnly(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AC7D28))(0, value);
	}
	template <typename T = uintptr_t> static T get_shadowResolution() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC7DC0))(0);
	}
	template <typename T = void> static T set_shadowResolution(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC7E50))(0, value);
	}
	template <typename T = void> static T set_shadowCascade2Split(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AC7EE8))(0, value);
	}
	template <typename T = int32_t> static T get_masterTextureLimit() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC7F80))(0);
	}
	template <typename T = uintptr_t> static T get_anisotropicFiltering() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC8010))(0);
	}
	template <typename T = void> static T set_anisotropicFiltering(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AC80A0))(0, value);
	}
	template <typename T = float> static T get_lodBias() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC8138))(0);
	}
	template <typename T = void> static T set_lodBias(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AC81C8))(0, value);
	}
	template <typename T = int32_t> static T get_maximumLODLevel() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC8260))(0);
	}
	template <typename T = int32_t> static T get_vSyncCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC82F0))(0);
	}
	template <typename T = void> static T set_vSyncCount(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4AC8380))(0, value);
	}
	template <typename T = int32_t> static T get_antiAliasing() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC8418))(0);
	}
	template <typename T = uintptr_t> static T get_activeColorSpace() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC84A8))(0);
	}
	template <typename T = uintptr_t> static T get_blendWeights() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC8538))(0);
	}
	template <typename T = bool> static T get_streamingMipmapsActive() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC85C8))(0);
	}
	template <typename T = void> static T set_streamingMipmapsActive(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4AC8658))(0, value);
	}
	template <typename T = float> static T get_streamingMipmapsMemoryBudget() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC86F0))(0);
	}
	template <typename T = void> static T set_streamingMipmapsMemoryBudget(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4AC8780))(0, value);
	}

};

}
