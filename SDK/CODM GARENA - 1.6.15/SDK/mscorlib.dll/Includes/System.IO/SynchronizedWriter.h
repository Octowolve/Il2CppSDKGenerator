#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class SynchronizedWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "SynchronizedWriter"));
	}

	template <typename T = uintptr_t> T& writer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& neverClose() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T Close() {
		return ((T (*)(SynchronizedWriter*))(Il2CppBase() + 0x40076D4))(this);
	}
	template <typename T = void> T Flush() {
		return ((T (*)(SynchronizedWriter*))(Il2CppBase() + 0x400777C))(this);
	}
	template <typename T = void> T Write(char value) {
		return ((T (*)(SynchronizedWriter*, char))(Il2CppBase() + 0x4007814))(this, value);
	}
	template <typename T = void> T Write_1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SynchronizedWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40078B4))(this, value);
	}
	template <typename T = void> T Write_2(Il2CppString* value) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*))(Il2CppBase() + 0x4007954))(this, value);
	}
	template <typename T = void> T Write_3(Il2CppString* format, uintptr_t value) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40079F4))(this, format, value);
	}
	template <typename T = void> T Write_4(Il2CppString* format, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4007A9C))(this, format, value);
	}
	template <typename T = void> T Write_5(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(SynchronizedWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4007B44))(this, buffer, index, count);
	}
	template <typename T = void> T Write_6(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4007C0C))(this, format, arg0, arg1);
	}
	template <typename T = void> T Write_7(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4007CD4))(this, format, arg0, arg1, arg2);
	}
	template <typename T = void> T WriteLine() {
		return ((T (*)(SynchronizedWriter*))(Il2CppBase() + 0x4007DA0))(this);
	}
	template <typename T = void> T WriteLine_1(char value) {
		return ((T (*)(SynchronizedWriter*, char))(Il2CppBase() + 0x4007E38))(this, value);
	}
	template <typename T = void> T WriteLine_2(Il2CppString* value) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*))(Il2CppBase() + 0x4007ED8))(this, value);
	}
	template <typename T = void> T WriteLine_3(Il2CppString* format, uintptr_t value) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4007F78))(this, format, value);
	}
	template <typename T = void> T WriteLine_4(Il2CppString* format, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4008020))(this, format, value);
	}
	template <typename T = void> T WriteLine_5(Il2CppString* format, uintptr_t arg0, uintptr_t arg1) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40080C8))(this, format, arg0, arg1);
	}
	template <typename T = void> T WriteLine_6(Il2CppString* format, uintptr_t arg0, uintptr_t arg1, uintptr_t arg2) {
		return ((T (*)(SynchronizedWriter*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4008190))(this, format, arg0, arg1, arg2);
	}
	template <typename T = uintptr_t> T get_Encoding() {
		return ((T (*)(SynchronizedWriter*))(Il2CppBase() + 0x400825C))(this);
	}
	template <typename T = Il2CppString*> T get_NewLine() {
		return ((T (*)(SynchronizedWriter*))(Il2CppBase() + 0x4008300))(this);
	}

};

}
