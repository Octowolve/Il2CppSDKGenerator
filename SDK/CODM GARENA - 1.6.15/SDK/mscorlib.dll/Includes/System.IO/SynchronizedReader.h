#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class SynchronizedReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "SynchronizedReader"));
	}

	template <typename T = uintptr_t> T& reader() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Close() {
		return ((T (*)(SynchronizedReader*))(Il2CppBase() + 0x4007234))(this);
	}
	template <typename T = int32_t> T Peek() {
		return ((T (*)(SynchronizedReader*))(Il2CppBase() + 0x40072CC))(this);
	}
	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(SynchronizedReader*))(Il2CppBase() + 0x4007370))(this);
	}
	template <typename T = Il2CppString*> T ReadToEnd() {
		return ((T (*)(SynchronizedReader*))(Il2CppBase() + 0x4007414))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(SynchronizedReader*))(Il2CppBase() + 0x40074B8))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(SynchronizedReader*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x400755C))(this, buffer, index, count);
	}

};

}
