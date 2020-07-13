#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class DigestHeaderParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "DigestHeaderParser"));
	}

	template <typename T = Il2CppString*> T& header() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& keywords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& values() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_Realm() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C0930))(this);
	}
	template <typename T = Il2CppString*> T get_Opaque() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C096C))(this);
	}
	template <typename T = Il2CppString*> T get_Nonce() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C09A8))(this);
	}
	template <typename T = Il2CppString*> T get_Algorithm() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C09E4))(this);
	}
	template <typename T = Il2CppString*> T get_QOP() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C0A20))(this);
	}
	template <typename T = bool> T Parse() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C0A5C))(this);
	}
	template <typename T = void> T SkipWhitespace() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C0EB4))(this);
	}
	template <typename T = Il2CppString*> T GetKey() {
		return ((T (*)(DigestHeaderParser*))(Il2CppBase() + 0x42C0F3C))(this);
	}
	template <typename T = bool> T GetKeywordAndValue(uintptr_t* key, uintptr_t* value) {
		return ((T (*)(DigestHeaderParser*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x42C0CF8))(this, key, value);
	}

};

}
