#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ShaderVariantCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ShaderVariantCollection"));
	}


	template <typename T = void> static T Internal_Create(uintptr_t mono) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4E821E8))(0, mono);
	}
	template <typename T = int32_t> T get_shaderCount() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E82280))(this);
	}
	template <typename T = int32_t> T get_variantCount() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E82318))(this);
	}
	template <typename T = bool> T Add(uintptr_t variant) {
		return ((T (*)(ShaderVariantCollection*, uintptr_t))(Il2CppBase() + 0x4E823B0))(this, variant);
	}
	template <typename T = bool> T AddInternal(uintptr_t shader, uintptr_t passType, Il2CppArray<uintptr_t>* keywords) {
		return ((T (*)(ShaderVariantCollection*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E823C8))(this, shader, passType, keywords);
	}
	template <typename T = bool> T Remove(uintptr_t variant) {
		return ((T (*)(ShaderVariantCollection*, uintptr_t))(Il2CppBase() + 0x4E82478))(this, variant);
	}
	template <typename T = bool> T RemoveInternal(uintptr_t shader, uintptr_t passType, Il2CppArray<uintptr_t>* keywords) {
		return ((T (*)(ShaderVariantCollection*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E82490))(this, shader, passType, keywords);
	}
	template <typename T = bool> T Contains(uintptr_t variant) {
		return ((T (*)(ShaderVariantCollection*, uintptr_t))(Il2CppBase() + 0x4E82540))(this, variant);
	}
	template <typename T = bool> T ContainsInternal(uintptr_t shader, uintptr_t passType, Il2CppArray<uintptr_t>* keywords) {
		return ((T (*)(ShaderVariantCollection*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4E82558))(this, shader, passType, keywords);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E82608))(this);
	}
	template <typename T = bool> T get_isWarmedUp() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E826A0))(this);
	}
	template <typename T = void> T WarmUp(bool forceWarmUp) {
		return ((T (*)(ShaderVariantCollection*, bool))(Il2CppBase() + 0x4E82738))(this, forceWarmUp);
	}
	template <typename T = void> T WarmUp_1() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E827D8))(this);
	}
	template <typename T = void> T WarmUpThreaded(bool forceWarmUp) {
		return ((T (*)(ShaderVariantCollection*, bool))(Il2CppBase() + 0x4E827E0))(this, forceWarmUp);
	}
	template <typename T = void> T WarmUpThreaded_1() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E82880))(this);
	}
	template <typename T = void> T UnloadSubShaderWithLod(bool force) {
		return ((T (*)(ShaderVariantCollection*, bool))(Il2CppBase() + 0x4E82888))(this, force);
	}
	template <typename T = void> T UnloadSubShaderWithLod_1() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E82928))(this);
	}
	template <typename T = void> T WarmUpShader(Il2CppString* shaderName) {
		return ((T (*)(ShaderVariantCollection*, Il2CppString*))(Il2CppBase() + 0x4E82930))(this, shaderName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAllShaderNames() {
		return ((T (*)(ShaderVariantCollection*))(Il2CppBase() + 0x4E829D0))(this);
	}

};

}
