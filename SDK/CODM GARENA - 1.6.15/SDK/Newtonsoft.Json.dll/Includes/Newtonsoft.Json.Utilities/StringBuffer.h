#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class StringBuffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "StringBuffer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _buffer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _position() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = int32_t> T get_Position() {
		return ((T (*)(StringBuffer*))(Il2CppBase() + 0x4DFA160))(this);
	}
	template <typename T = void> T set_Position(int32_t value) {
		return ((T (*)(StringBuffer*, int32_t))(Il2CppBase() + 0x4DFA170))(this, value);
	}
	template <typename T = bool> T get_IsEmpty() {
		return ((T (*)(StringBuffer*))(Il2CppBase() + 0x4DFA18C))(this);
	}
	template <typename T = void> T Append(void* bufferPool, char value) {
		return ((T (*)(StringBuffer*, void*, char))(Il2CppBase() + 0x4DFA2D0))(this, bufferPool, value);
	}
	template <typename T = void> T Append_1(void* bufferPool, Il2CppArray<uintptr_t>* buffer, int32_t startIndex, int32_t count) {
		return ((T (*)(StringBuffer*, void*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4DFA364))(this, bufferPool, buffer, startIndex, count);
	}
	template <typename T = void> T Clear(void* bufferPool) {
		return ((T (*)(StringBuffer*, void*))(Il2CppBase() + 0x4DFA3B8))(this, bufferPool);
	}
	template <typename T = void> T EnsureSize(void* bufferPool, int32_t appendLength) {
		return ((T (*)(StringBuffer*, void*, int32_t))(Il2CppBase() + 0x4DFA3E8))(this, bufferPool, appendLength);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StringBuffer*))(Il2CppBase() + 0x4DFA3F0))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(int32_t start, int32_t length) {
		return ((T (*)(StringBuffer*, int32_t, int32_t))(Il2CppBase() + 0x4DFA420))(this, start, length);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_InternalBuffer() {
		return ((T (*)(StringBuffer*))(Il2CppBase() + 0x4DFA458))(this);
	}

};

}
