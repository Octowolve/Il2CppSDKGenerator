#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Texture
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Texture"));
	}


	template <typename T = int32_t> static T get_masterTextureLimit() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D30BF8))(0);
	}
	template <typename T = void> static T set_masterTextureLimit(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4D30C88))(0, value);
	}
	template <typename T = uintptr_t> static T get_anisotropicFiltering() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D30D20))(0);
	}
	template <typename T = void> static T set_anisotropicFiltering(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D30DB0))(0, value);
	}
	template <typename T = void> static T SetGlobalAnisotropicFilteringLimits(int32_t forcedMin, int32_t globalMax) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4D30E48))(0, forcedMin, globalMax);
	}
	template <typename T = int32_t> static T Internal_GetWidth(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D30EE8))(0, t);
	}
	template <typename T = int32_t> static T Internal_GetHeight(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D30F80))(0, t);
	}
	template <typename T = uintptr_t> static T Internal_GetDimension(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4D31018))(0, t);
	}
	template <typename T = int32_t> T get_width() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D310B0))(this);
	}
	template <typename T = void> T set_width(int32_t value) {
		return ((T (*)(Texture*, int32_t))(Il2CppBase() + 0x4D310B8))(this, value);
	}
	template <typename T = int32_t> T get_height() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D31160))(this);
	}
	template <typename T = void> T set_height(int32_t value) {
		return ((T (*)(Texture*, int32_t))(Il2CppBase() + 0x4D31168))(this, value);
	}
	template <typename T = uintptr_t> T get_dimension() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D31210))(this);
	}
	template <typename T = void> T set_dimension(uintptr_t value) {
		return ((T (*)(Texture*, uintptr_t))(Il2CppBase() + 0x4D31218))(this, value);
	}
	template <typename T = uintptr_t> T get_filterMode() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D312C0))(this);
	}
	template <typename T = void> T set_filterMode(uintptr_t value) {
		return ((T (*)(Texture*, uintptr_t))(Il2CppBase() + 0x4D31358))(this, value);
	}
	template <typename T = int32_t> T get_anisoLevel() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D313F8))(this);
	}
	template <typename T = void> T set_anisoLevel(int32_t value) {
		return ((T (*)(Texture*, int32_t))(Il2CppBase() + 0x4D31490))(this, value);
	}
	template <typename T = uintptr_t> T get_wrapMode() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D31530))(this);
	}
	template <typename T = void> T set_wrapMode(uintptr_t value) {
		return ((T (*)(Texture*, uintptr_t))(Il2CppBase() + 0x4D315C8))(this, value);
	}
	template <typename T = float> T get_mipMapBias() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D31668))(this);
	}
	template <typename T = void> T set_mipMapBias(float value) {
		return ((T (*)(Texture*, float))(Il2CppBase() + 0x4D31700))(this, value);
	}
	template <typename T = Il2CppVector2> T get_texelSize() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D317A0))(this);
	}
	template <typename T = void> T INTERNAL_get_texelSize(uintptr_t* value) {
		return ((T (*)(Texture*, uintptr_t*))(Il2CppBase() + 0x4D317DC))(this, value);
	}
	template <typename T = uintptr_t> T GetNativeTexturePtr() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D3187C))(this);
	}
	template <typename T = void> static T INTERNAL_CALL_GetNativeTexturePtr(uintptr_t self, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4D318A8))(0, self, value);
	}
	template <typename T = int32_t> T GetNativeTextureID() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D31948))(this);
	}
	template <typename T = uint64_t> static T get_totalTextureMemory() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D319E0))(0);
	}
	template <typename T = bool> static T get_streamingUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D31A70))(0);
	}
	template <typename T = void> static T set_streamingUI(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4D31B00))(0, value);
	}
	template <typename T = float> static T get_streamingInterval() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D31B98))(0);
	}
	template <typename T = void> static T set_streamingInterval(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x4D31C28))(0, value);
	}
	template <typename T = bool> static T get_streamingWithSubProgram() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D31CC0))(0);
	}
	template <typename T = void> static T set_streamingWithSubProgram(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4D31D50))(0, value);
	}
	template <typename T = uint64_t> static T get_desiredTextureMemory() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D31DE8))(0);
	}
	template <typename T = uint64_t> static T get_targetTextureMemory() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D31E78))(0);
	}
	template <typename T = uint64_t> static T get_currentTextureMemory() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D31F08))(0);
	}
	template <typename T = uint64_t> static T get_nonStreamingTextureMemory() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D31F98))(0);
	}
	template <typename T = uint64_t> static T get_streamingMipmapUploadCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32028))(0);
	}
	template <typename T = uint64_t> static T get_streamingRendererCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D320B8))(0);
	}
	template <typename T = uint64_t> static T get_streamingTextureCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32148))(0);
	}
	template <typename T = uint64_t> static T get_nonStreamingTextureCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D321D8))(0);
	}
	template <typename T = uint64_t> static T get_streamingTexturePendingLoadCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32268))(0);
	}
	template <typename T = uint64_t> static T get_streamingTextureLoadingCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D322F8))(0);
	}
	template <typename T = void> static T SetStreamingTextureMaterialDebugProperties() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32388))(0);
	}
	template <typename T = bool> static T get_streamingTextureForceLoadAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32418))(0);
	}
	template <typename T = void> static T set_streamingTextureForceLoadAll(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4D324A8))(0, value);
	}
	template <typename T = bool> static T get_streamingTextureDiscardUnusedMips() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D32540))(0);
	}
	template <typename T = void> static T set_streamingTextureDiscardUnusedMips(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x4D325D0))(0, value);
	}
	template <typename T = uintptr_t> T CreateNonReadableException(uintptr_t t) {
		return ((T (*)(Texture*, uintptr_t))(Il2CppBase() + 0x4D32668))(this, t);
	}
	template <typename T = bool> T get_isReadable() {
		return ((T (*)(Texture*))(Il2CppBase() + 0x4D327BC))(this);
	}

};

}
