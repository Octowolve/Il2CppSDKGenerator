#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class StringInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "StringInfo"));
	}

	template <typename T = Il2CppString*> T& s() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(StringInfo*, uintptr_t))(Il2CppBase() + 0x3FDCE40))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(StringInfo*))(Il2CppBase() + 0x3FDCF48))(this);
	}
	template <typename T = int32_t> T get_LengthInTextElements() {
		return ((T (*)(StringInfo*))(Il2CppBase() + 0x3FDCF74))(this);
	}
	template <typename T = void> T set_String(Il2CppString* value) {
		return ((T (*)(StringInfo*, Il2CppString*))(Il2CppBase() + 0x3FDCD7C))(this, value);
	}
	template <typename T = Il2CppString*> static T GetNextTextElement(Il2CppString* str, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3FDD264))(0, str, index);
	}
	template <typename T = int32_t> static T GetNextTextElementLength(Il2CppString* str, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3FDCFEC))(0, str, index);
	}
	template <typename T = uintptr_t> static T GetTextElementEnumerator(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FDD2CC))(0, str);
	}

};

}
