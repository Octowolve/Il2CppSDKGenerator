#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class TextReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "TextReader"));
	}

	template <typename T = uintptr_t> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Close() {
		return ((T (*)(TextReader*))(Il2CppBase() + 0x40084E4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(TextReader*))(Il2CppBase() + 0x40084F8))(this);
	}
	template <typename T = void> T Dispose_1(bool disposing) {
		return ((T (*)(TextReader*, bool))(Il2CppBase() + 0x4003CF4))(this, disposing);
	}
	template <typename T = int32_t> T Peek() {
		return ((T (*)(TextReader*))(Il2CppBase() + 0x400850C))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(TextReader*))(Il2CppBase() + 0x4008514))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>** buffer, int32_t index, int32_t count) {
		return ((T (*)(TextReader*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x400851C))(this, buffer, index, count);
	}
	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(TextReader*))(Il2CppBase() + 0x40085B8))(this);
	}
	template <typename T = Il2CppString*> T ReadToEnd() {
		return ((T (*)(TextReader*))(Il2CppBase() + 0x4008668))(this);
	}
	template <typename T = uintptr_t> static T Synchronized(uintptr_t reader) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4008718))(0, reader);
	}

};

}
