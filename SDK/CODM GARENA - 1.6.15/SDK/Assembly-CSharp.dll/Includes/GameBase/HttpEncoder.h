#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HttpEncoder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HttpEncoder"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& hexChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& currentEncoder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotEncoded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UrlEncode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UrlEncodeToBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UrlEncodeChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T get_Current() {
		return ((T (*)(void *))(Il2CppBase() + 0x1EEC854))(0);
	}
	template <typename T = bool> static T NotEncoded(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x1EEC9B0))(0, c);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T UrlEncode(Il2CppArray<uintptr_t>* bytes, int32_t offset, int32_t count) {
		return ((T (*)(HttpEncoder*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1EECABC))(this, bytes, offset, count);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T UrlEncodeToBytes(Il2CppArray<uintptr_t>* bytes, int32_t offset, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1EECBE0))(0, bytes, offset, count);
	}
	template <typename T = void> static T UrlEncodeChar(char c, uintptr_t result, bool isUnicode) {
		return ((T (*)(void *, char, uintptr_t, bool))(Il2CppBase() + 0x1EECEC0))(0, c, result, isUnicode);
	}

};

}
