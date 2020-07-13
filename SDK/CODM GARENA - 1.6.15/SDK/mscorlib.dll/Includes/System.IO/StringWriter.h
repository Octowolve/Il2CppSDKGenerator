#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.IO {

class StringWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.IO", "StringWriter"));
	}

	template <typename T = uintptr_t> T& internalString() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Encoding() {
		return ((T (*)(StringWriter*))(Il2CppBase() + 0x4006BDC))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(StringWriter*))(Il2CppBase() + 0x4006C7C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(StringWriter*, bool))(Il2CppBase() + 0x4006CAC))(this, disposing);
	}
	template <typename T = uintptr_t> T GetStringBuilder() {
		return ((T (*)(StringWriter*))(Il2CppBase() + 0x4006CE0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(StringWriter*))(Il2CppBase() + 0x4006CE8))(this);
	}
	template <typename T = void> T Write(char value) {
		return ((T (*)(StringWriter*, char))(Il2CppBase() + 0x4006D14))(this, value);
	}
	template <typename T = void> T Write_1(Il2CppString* value) {
		return ((T (*)(StringWriter*, Il2CppString*))(Il2CppBase() + 0x4006E1C))(this, value);
	}
	template <typename T = void> T Write_2(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(StringWriter*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4006F24))(this, buffer, index, count);
	}

};

}
