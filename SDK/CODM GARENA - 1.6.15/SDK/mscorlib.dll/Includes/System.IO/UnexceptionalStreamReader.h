#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class UnexceptionalStreamReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "UnexceptionalStreamReader"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& newline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = char> static T& newlineChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T Peek() {
		return ((T (*)(UnexceptionalStreamReader*))(Il2CppBase() + 0x4009478))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(UnexceptionalStreamReader*))(Il2CppBase() + 0x4009580))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>** dest_buffer, int32_t index, int32_t count) {
		return ((T (*)(UnexceptionalStreamReader*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x4009688))(this, dest_buffer, index, count);
	}
	template <typename T = bool> T CheckEOL(char current) {
		return ((T (*)(UnexceptionalStreamReader*, char))(Il2CppBase() + 0x40099E4))(this, current);
	}
	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(UnexceptionalStreamReader*))(Il2CppBase() + 0x4009CC8))(this);
	}
	template <typename T = Il2CppString*> T ReadToEnd() {
		return ((T (*)(UnexceptionalStreamReader*))(Il2CppBase() + 0x4009DD0))(this);
	}

};

}
