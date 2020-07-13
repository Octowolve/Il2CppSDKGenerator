#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class UnexceptionalStreamWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "UnexceptionalStreamWriter"));
	}


	template <typename T = void> T Flush() {
		return ((T (*)(UnexceptionalStreamWriter*))(Il2CppBase() + 0x4009F94))(this);
	}
	template <typename T = void> T Write(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(UnexceptionalStreamWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x400A098))(this, buffer, index, count);
	}
	template <typename T = void> T Write_1(char value) {
		return ((T (*)(UnexceptionalStreamWriter*, char))(Il2CppBase() + 0x400A1C0))(this, value);
	}
	template <typename T = void> T Write_2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(UnexceptionalStreamWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x400A2CC))(this, value);
	}
	template <typename T = void> T Write_3(Il2CppString* value) {
		return ((T (*)(UnexceptionalStreamWriter*, Il2CppString*))(Il2CppBase() + 0x400A3D8))(this, value);
	}

};

}
