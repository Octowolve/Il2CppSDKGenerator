#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NullStreamReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "NullStreamReader"));
	}


	template <typename T = int32_t> T Peek() {
		return ((T (*)(NullStreamReader*))(Il2CppBase() + 0x4004EFC))(this);
	}
	template <typename T = int32_t> T Read() {
		return ((T (*)(NullStreamReader*))(Il2CppBase() + 0x4004F04))(this);
	}
	template <typename T = int32_t> T Read_1(Il2CppArray<uintptr_t>** buffer, int32_t index, int32_t count) {
		return ((T (*)(NullStreamReader*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x4004F0C))(this, buffer, index, count);
	}
	template <typename T = Il2CppString*> T ReadLine() {
		return ((T (*)(NullStreamReader*))(Il2CppBase() + 0x4004F14))(this);
	}
	template <typename T = Il2CppString*> T ReadToEnd() {
		return ((T (*)(NullStreamReader*))(Il2CppBase() + 0x4004F1C))(this);
	}

};

}
