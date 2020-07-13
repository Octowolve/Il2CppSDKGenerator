#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Shader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Shader"));
	}

	template <typename T = uintptr_t> static T& customShaderStripping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& customShaderStrippingWithDetail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T Find(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E809C4))(0, name);
	}
	template <typename T = int32_t> static T CallCustomShaderStripping(uintptr_t shader, uint64_t keywordSetPart1, uint64_t keywordSetPart2, uint64_t keywordSetPart3, uint64_t keywordSetPart4, bool isCompilingForGameRelease, int32_t shaderLod, Il2CppString* passName) {
		return ((T (*)(void *, uintptr_t, uint64_t, uint64_t, uint64_t, uint64_t, bool, int32_t, Il2CppString*))(Il2CppBase() + 0x4E80A5C))(0, shader, keywordSetPart1, keywordSetPart2, keywordSetPart3, keywordSetPart4, isCompilingForGameRelease, shaderLod, passName);
	}
	template <typename T = bool> T get_isSupported() {
		return ((T (*)(Shader*))(Il2CppBase() + 0x4E80EF0))(this);
	}
	template <typename T = void> static T EnableKeyword(Il2CppString* keyword) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E80F88))(0, keyword);
	}
	template <typename T = void> static T DisableKeyword(Il2CppString* keyword) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E81020))(0, keyword);
	}
	template <typename T = bool> static T IsKeywordEnabled(Il2CppString* keyword) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E810B8))(0, keyword);
	}
	template <typename T = void> T set_maximumLOD(int32_t value) {
		return ((T (*)(Shader*, int32_t))(Il2CppBase() + 0x4E81150))(this, value);
	}
	template <typename T = int32_t> static T get_globalMaximumLOD() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E811F0))(0);
	}
	template <typename T = void> static T set_globalMaximumLOD(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4E81280))(0, value);
	}
	template <typename T = void> static T SetGlobalFloatImpl(int32_t nameID, float value) {
		return ((T (*)(void *, int32_t, float))(Il2CppBase() + 0x4E81318))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalIntImpl(int32_t nameID, int32_t value) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4E813B8))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalVectorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81458))(0, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetGlobalVectorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81488))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalColorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81528))(0, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetGlobalColorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81558))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalMatrixImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E815F8))(0, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetGlobalMatrixImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E8167C))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalTextureImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E8171C))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalFloatArrayImpl(int32_t nameID, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E817BC))(0, nameID, values);
	}
	template <typename T = void> static T SetGlobalVectorArrayImpl(int32_t nameID, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E8185C))(0, nameID, values);
	}
	template <typename T = int32_t> static T PropertyToID(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4E7444C))(0, name);
	}
	template <typename T = void> static T AllocSharedWarmUpBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E818FC))(0);
	}
	template <typename T = void> static T FreeSharedWarmUpBuffer() {
		return ((T (*)(void *))(Il2CppBase() + 0x4E8198C))(0);
	}
	template <typename T = void> static T SetGlobalFloat(Il2CppString* name, float value) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x4E81A1C))(0, name, value);
	}
	template <typename T = void> static T SetGlobalFloat_1(int32_t nameID, float value) {
		return ((T (*)(void *, int32_t, float))(Il2CppBase() + 0x4E81A3C))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalInt(int32_t nameID, int32_t value) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x4E81A40))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalVector(Il2CppString* name, uintptr_t value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E81A44))(0, name, value);
	}
	template <typename T = void> static T SetGlobalVector_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81A88))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalColor(Il2CppString* name, uintptr_t value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E81AB8))(0, name, value);
	}
	template <typename T = void> static T SetGlobalColor_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81AFC))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalMatrix(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81B2C))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalTexture(Il2CppString* name, uintptr_t value) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4E81BAC))(0, name, value);
	}
	template <typename T = void> static T SetGlobalTexture_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x4E81BCC))(0, nameID, value);
	}
	template <typename T = void> static T SetGlobalFloatArray(int32_t nameID, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E81BD0))(0, nameID, values);
	}
	template <typename T = void> static T SetGlobalVectorArray(int32_t nameID, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E81CE8))(0, nameID, values);
	}

};

}
