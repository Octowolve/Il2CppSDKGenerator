#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WWWTranscoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WWWTranscoder"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& ucHexChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& lcHexChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = unsigned char> static T& urlEscapeChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = unsigned char> static T& urlSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& urlForbidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = unsigned char> static T& qpEscapeChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = unsigned char> static T& qpSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& qpForbidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = unsigned char> static T Hex2Byte(Il2CppArray<uintptr_t>* b, int32_t offset) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4D41CA0))(0, b, offset);
	}
	template <typename T = Il2CppString*> static T URLDecode(Il2CppString* toEncode, uintptr_t e) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4D4190C))(0, toEncode, e);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T Decode(Il2CppArray<uintptr_t>* input, unsigned char escapeChar, unsigned char space) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, unsigned char, unsigned char))(Il2CppBase() + 0x4D41D60))(0, input, escapeChar, space);
	}

};

}
