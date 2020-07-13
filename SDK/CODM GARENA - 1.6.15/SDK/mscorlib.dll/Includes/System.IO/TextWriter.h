#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class TextWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "TextWriter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& CoreNewLine() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& internalFormatProvider() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& Null() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_Encoding() {
		return ((T (*)(TextWriter*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T get_NewLine() {
		return ((T (*)(TextWriter*))(Il2CppBase() + 0x4008974))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(TextWriter*))(Il2CppBase() + 0x4008984))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(TextWriter*, bool))(Il2CppBase() + 0x4006CD4))(this, disposing);
	}
	template <typename T = void> T Dispose_1() {
		return ((T (*)(TextWriter*))(Il2CppBase() + 0x4008998))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(TextWriter*))(Il2CppBase() + 0x40089C8))(this);
	}
	template <typename T = uintptr_t> static T Synchronized(uintptr_t writer, bool neverClose) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x40089CC))(0, writer, neverClose);
	}
	template <typename T = void> T Write(char value) {
		return ((T (*)(TextWriter*, char))(Il2CppBase() + 0x4008AEC))(this, value);
	}
	template <typename T = void> T Write_1(Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(TextWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4008AF0))(this, buffer);
	}
	template <typename T = void> T Write_2(Il2CppString* value) {
		return ((T (*)(TextWriter*, Il2CppString*))(Il2CppBase() + 0x4008B28))(this, value);
	}
	template <typename T = void> T Write_3(Il2CppString* format, uintptr_t arg0) {
		return ((T (*)(TextWriter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4008B64))(this, format, arg0);
	}
	template <typename T = void> T Write_4(Il2CppString* format, Il2CppArray<uintptr_t>* arg) {
		return ((T (*)(TextWriter*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4008C30))(this, format, arg);
	}
	template <typename T = void> T Write_5(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(TextWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4008CFC))(this, buffer, index, count);
	}
	template <typename T = void> T Write_6(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(TextWriter*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4008EA4))(this, format, arg0, arg1);
	}
	template <typename T = void> T Write_7(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(TextWriter*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4008F84))(this, format, arg0, arg1, arg2);
	}
	template <typename T = void> T WriteLine() {
		return ((T (*)(TextWriter*))(Il2CppBase() + 0x400906C))(this);
	}
	template <typename T = void> T WriteLine_1(char value) {
		return ((T (*)(TextWriter*, char))(Il2CppBase() + 0x4009080))(this, value);
	}
	template <typename T = void> T WriteLine_2(Il2CppString* value) {
		return ((T (*)(TextWriter*, Il2CppString*))(Il2CppBase() + 0x40090B8))(this, value);
	}
	template <typename T = void> T WriteLine_3(Il2CppString* format, uintptr_t arg0) {
		return ((T (*)(TextWriter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40090F0))(this, format, arg0);
	}
	template <typename T = void> T WriteLine_4(Il2CppString* format, Il2CppArray<uintptr_t>* arg) {
		return ((T (*)(TextWriter*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4009128))(this, format, arg);
	}
	template <typename T = void> T WriteLine_5(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(TextWriter*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4009160))(this, format, arg0, arg1);
	}
	template <typename T = void> T WriteLine_6(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(TextWriter*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40091A4))(this, format, arg0, arg1, arg2);
	}

};

}
