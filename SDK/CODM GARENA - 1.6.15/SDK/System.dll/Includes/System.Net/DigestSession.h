#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class DigestSession
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "DigestSession"));
	}

	template <typename T = uintptr_t> static T& rng() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& lastUse() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _nc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& hash() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& parser() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _cnonce() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = Il2CppString*> T get_Algorithm() {
		return ((T (*)(DigestSession*))(Il2CppBase() + 0x42C1070))(this);
	}
	template <typename T = Il2CppString*> T get_Realm() {
		return ((T (*)(DigestSession*))(Il2CppBase() + 0x42C1098))(this);
	}
	template <typename T = Il2CppString*> T get_Nonce() {
		return ((T (*)(DigestSession*))(Il2CppBase() + 0x42C10C0))(this);
	}
	template <typename T = Il2CppString*> T get_Opaque() {
		return ((T (*)(DigestSession*))(Il2CppBase() + 0x42C10E8))(this);
	}
	template <typename T = Il2CppString*> T get_QOP() {
		return ((T (*)(DigestSession*))(Il2CppBase() + 0x42C1110))(this);
	}
	template <typename T = Il2CppString*> T get_CNonce() {
		return ((T (*)(DigestSession*))(Il2CppBase() + 0x42C1138))(this);
	}
	template <typename T = bool> T Parse(Il2CppString* challenge) {
		return ((T (*)(DigestSession*, Il2CppString*))(Il2CppBase() + 0x42BFB24))(this, challenge);
	}
	template <typename T = Il2CppString*> T HashToHexString(Il2CppString* toBeHashed) {
		return ((T (*)(DigestSession*, Il2CppString*))(Il2CppBase() + 0x42C12C4))(this, toBeHashed);
	}
	template <typename T = Il2CppString*> T HA1(Il2CppString* username, Il2CppString* password) {
		return ((T (*)(DigestSession*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x42C14A8))(this, username, password);
	}
	template <typename T = Il2CppString*> T HA2(uintptr_t webRequest) {
		return ((T (*)(DigestSession*, uintptr_t))(Il2CppBase() + 0x42C16CC))(this, webRequest);
	}
	template <typename T = Il2CppString*> T Response(Il2CppString* username, Il2CppString* password, uintptr_t webRequest) {
		return ((T (*)(DigestSession*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x42C1830))(this, username, password, webRequest);
	}
	template <typename T = uintptr_t> T Authenticate(uintptr_t webRequest, uintptr_t credentials) {
		return ((T (*)(DigestSession*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42BFC84))(this, webRequest, credentials);
	}
	template <typename T = uintptr_t> T get_LastUse() {
		return ((T (*)(DigestSession*))(Il2CppBase() + 0x42BF734))(this);
	}

};

}
