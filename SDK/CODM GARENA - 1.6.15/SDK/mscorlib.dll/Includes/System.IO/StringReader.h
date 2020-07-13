#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class StringReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "StringReader"));
	}

	template <typename T = Il2CppString*> T& source() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& nextChar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& sourceLength() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Close() {
		return ((T (*)(StringReader*))(Il2CppBase() + 0x4006508))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(StringReader*, bool))(Il2CppBase() + 0x400651C))(this, disposing);
	}
	template <typename T = int32_t> T Peek() {
		return ((T (*)(StringReader*))(Il2CppBase() + 0x4006530))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(StringReader*))(Il2CppBase() + 0x4006654))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>** buffer, int32_t index, int32_t count) {
		return ((T (*)(StringReader*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x40066A4))(this, buffer, index, count);
	}
	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(StringReader*))(Il2CppBase() + 0x4006844))(this);
	}
	template <typename T = Il2CppString*> T ReadToEnd() {
		return ((T (*)(StringReader*))(Il2CppBase() + 0x400694C))(this);
	}
	template <typename T = void> T CheckObjectDisposedException() {
		return ((T (*)(StringReader*))(Il2CppBase() + 0x4006578))(this);
	}

};

}
