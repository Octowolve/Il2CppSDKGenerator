#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class MaterialPropertyBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "MaterialPropertyBlock"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T InitBlock() {
		return ((T (*)(MaterialPropertyBlock*))(Il2CppBase() + 0x4AB025C))(this);
	}
	template <typename T = void> T DestroyBlock() {
		return ((T (*)(MaterialPropertyBlock*))(Il2CppBase() + 0x4AB02F4))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(MaterialPropertyBlock*))(Il2CppBase() + 0x4AB038C))(this);
	}
	template <typename T = void> T SetFloatImpl(int32_t nameID, float value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, float))(Il2CppBase() + 0x4AB03F0))(this, nameID, value);
	}
	template <typename T = void> T SetVectorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB0498))(this, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetVectorImpl(uintptr_t self, int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AB04D8))(0, self, nameID, value);
	}
	template <typename T = void> T SetTextureImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB0580))(this, nameID, value);
	}
	template <typename T = void> T SetColorImpl(int32_t nameID, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB0628))(this, nameID, value);
	}
	template <typename T = void> static T INTERNAL_CALL_SetColorImpl(uintptr_t self, int32_t nameID, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x4AB0668))(0, self, nameID, value);
	}
	template <typename T = uintptr_t> static T ExtractArrayFromList(uintptr_t list) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AB0710))(0, list);
	}
	template <typename T = void> T SetVectorArrayImpl(int32_t nameID, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB07A8))(this, nameID, values);
	}
	template <typename T = void> T SetFloat(Il2CppString* name, float value) {
		return ((T (*)(MaterialPropertyBlock*, Il2CppString*, float))(Il2CppBase() + 0x4AB0850))(this, name, value);
	}
	template <typename T = void> T SetFloat_1(int32_t nameID, float value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, float))(Il2CppBase() + 0x4AB0880))(this, nameID, value);
	}
	template <typename T = void> T SetVector(int32_t nameID, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB0884))(this, nameID, value);
	}
	template <typename T = void> T SetColor(Il2CppString* name, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AB08C4))(this, name, value);
	}
	template <typename T = void> T SetColor_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB0918))(this, nameID, value);
	}
	template <typename T = void> T SetTexture(Il2CppString* name, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4AB0958))(this, name, value);
	}
	template <typename T = void> T SetTexture_1(int32_t nameID, uintptr_t value) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, uintptr_t))(Il2CppBase() + 0x4AB0988))(this, nameID, value);
	}
	template <typename T = void> T SetVectorArray(Il2CppString* name, Il2CppList<uintptr_t>* values) {
		return ((T (*)(MaterialPropertyBlock*, Il2CppString*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4AB0B44))(this, name, values);
	}
	template <typename T = void> T SetVectorArray_1(int32_t nameID, Il2CppList<uintptr_t>* values) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4AB0B74))(this, nameID, values);
	}
	template <typename T = void> T SetVectorArray_2(int32_t nameID, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(MaterialPropertyBlock*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4AB0D1C))(this, nameID, values);
	}

};

}
