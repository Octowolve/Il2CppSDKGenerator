#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class PlayableHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "PlayableHandle"));
	}

	template <typename T = uintptr_t> T& m_Handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_Version() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> T GetObject() {
		return ((T (*)(PlayableHandle*))(Il2CppBase() + 0x33947D4))(this);
	}
	template <typename T = uintptr_t> static T GetScriptInstance(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB1618))(0, playable);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_GetScriptInstance(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB161C))(0, playable);
	}
	template <typename T = void> static T SetScriptInstance(uintptr_t playable, uintptr_t scriptInstance) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB16B4))(0, playable, scriptInstance);
	}
	template <typename T = void> static T INTERNAL_CALL_SetScriptInstance(uintptr_t playable, uintptr_t scriptInstance) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB16B8))(0, playable, scriptInstance);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(PlayableHandle*))(Il2CppBase() + 0x4DB175C))(this);
	}
	template <typename T = bool> static T IsValidInternal(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB1758))(0, playable);
	}
	template <typename T = bool> static T INTERNAL_CALL_IsValidInternal(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB1764))(0, playable);
	}
	template <typename T = uintptr_t> static T GetPlayableTypeOf(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB17FC))(0, playable);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_GetPlayableTypeOf(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB1800))(0, playable);
	}
	template <typename T = uintptr_t> static T get_Null() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DADB78))(0);
	}
	template <typename T = int32_t> T get_inputCount() {
		return ((T (*)(PlayableHandle*))(Il2CppBase() + 0x4DB189C))(this);
	}
	template <typename T = void> T set_inputCount(int32_t value) {
		return ((T (*)(PlayableHandle*, int32_t))(Il2CppBase() + 0x4DB18A8))(this, value);
	}
	template <typename T = int32_t> T get_outputCount() {
		return ((T (*)(PlayableHandle*))(Il2CppBase() + 0x4DB18C0))(this);
	}
	template <typename T = int32_t> static T GetInputCountInternal(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB1898))(0, playable);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetInputCountInternal(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB18C8))(0, playable);
	}
	template <typename T = void> static T SetInputCountInternal(uintptr_t playable, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB18A4))(0, playable, count);
	}
	template <typename T = void> static T INTERNAL_CALL_SetInputCountInternal(uintptr_t playable, int32_t count) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB1960))(0, playable, count);
	}
	template <typename T = int32_t> static T GetOutputCountInternal(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB18BC))(0, playable);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetOutputCountInternal(uintptr_t playable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DB1A00))(0, playable);
	}
	template <typename T = uintptr_t> T GetOutput(int32_t outputPort) {
		return ((T (*)(PlayableHandle*, int32_t))(Il2CppBase() + 0x4DB1B14))(this, outputPort);
	}
	template <typename T = uintptr_t> static T GetOutputInternal(uintptr_t playable, int32_t index) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4DB1AD0))(0, playable, index);
	}
	template <typename T = void> static T INTERNAL_CALL_GetOutputInternal(uintptr_t playable, int32_t index, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*))(Il2CppBase() + 0x4DB1B50))(0, playable, index, value);
	}
	template <typename T = void> static T SetInputWeightFromIndexInternal(uintptr_t playable, int32_t index, float weight) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DB1BF8))(0, playable, index, weight);
	}
	template <typename T = void> static T INTERNAL_CALL_SetInputWeightFromIndexInternal(uintptr_t playable, int32_t index, float weight) {
		return ((T (*)(void *, uintptr_t, int32_t, float))(Il2CppBase() + 0x4DB1C10))(0, playable, index, weight);
	}
	template <typename T = bool> T SetInputWeight(int32_t inputIndex, float weight) {
		return ((T (*)(PlayableHandle*, int32_t, float))(Il2CppBase() + 0x4DB1CF4))(this, inputIndex, weight);
	}
	template <typename T = bool> static T op_Equality(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB1D34))(0, x, y);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB1D9C))(0, x, y);
	}
	template <typename T = bool> T Equals(uintptr_t p) {
		return ((T (*)(PlayableHandle*, uintptr_t))(Il2CppBase() + 0x4DB1EA4))(this, p);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(PlayableHandle*))(Il2CppBase() + 0x4DB1EAC))(this);
	}
	template <typename T = bool> static T CompareVersion(uintptr_t lhs, uintptr_t rhs) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB1D68))(0, lhs, rhs);
	}
	template <typename T = bool> T CheckInputBounds(int32_t inputIndex) {
		return ((T (*)(PlayableHandle*, int32_t))(Il2CppBase() + 0x4DB22B8))(this, inputIndex);
	}
	template <typename T = bool> T CheckInputBounds_1(int32_t inputIndex, bool acceptAny) {
		return ((T (*)(PlayableHandle*, int32_t, bool))(Il2CppBase() + 0x4DB22D4))(this, inputIndex, acceptAny);
	}

};

}
