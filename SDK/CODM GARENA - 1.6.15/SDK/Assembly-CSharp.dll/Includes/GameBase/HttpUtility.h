#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HttpUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HttpUtility"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UrlEncode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UrlEncode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UrlEncodeToBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppString*> static T UrlEncode(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x1EED49C))(0, str);
	}
	template <typename T = Il2CppString*> static T UrlEncode_1(Il2CppString* str, uintptr_t e) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x1EED588))(0, str, e);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T UrlEncodeToBytes(Il2CppArray<uintptr_t>* bytes, int32_t offset, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x1EED8D8))(0, bytes, offset, count);
	}

};

}
