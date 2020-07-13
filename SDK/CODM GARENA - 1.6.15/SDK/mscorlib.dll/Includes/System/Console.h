#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Console
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Console"));
	}

	template <typename T = uintptr_t> static T& stdout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& stderr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& stdin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& inputEncoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& outputEncoding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T SetEncodings(uintptr_t inputEncoding, uintptr_t outputEncoding) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3644A3C))(0, inputEncoding, outputEncoding);
	}
	template <typename T = uintptr_t> static T get_Error() {
		return ((T (*)(void *))(Il2CppBase() + 0x36450A4))(0);
	}
	template <typename T = uintptr_t> static T get_Out() {
		return ((T (*)(void *))(Il2CppBase() + 0x3645154))(0);
	}
	template <typename T = uintptr_t> static T Open(uintptr_t handle, uintptr_t access, int32_t bufferSize) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3645204))(0, handle, access, bufferSize);
	}
	template <typename T = uintptr_t> static T OpenStandardError(int32_t bufferSize) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3644DBC))(0, bufferSize);
	}
	template <typename T = uintptr_t> static T OpenStandardInput(int32_t bufferSize) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3644FAC))(0, bufferSize);
	}
	template <typename T = uintptr_t> static T OpenStandardOutput(int32_t bufferSize) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3644EB4))(0, bufferSize);
	}
	template <typename T = void> static T WriteLine(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3645394))(0, value);
	}
	template <typename T = void> static T WriteLine_1(Il2CppString* format, Il2CppArray<uintptr_t>* arg) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3645470))(0, format, arg);
	}
	template <typename T = void> static T WriteLine_2(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3645554))(0, format, arg0, arg1);
	}
	template <typename T = void> static T WriteLine_3(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x364564C))(0, format, arg0, arg1, arg2);
	}

};

}
