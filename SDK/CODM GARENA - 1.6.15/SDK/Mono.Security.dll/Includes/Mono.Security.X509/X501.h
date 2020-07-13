#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security.X509 {

class X501
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "Mono.Security.X509", "X501"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& countryName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& organizationName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& organizationalUnitName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& commonName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& localityName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& stateOrProvinceName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& streetAddress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& domainComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& userid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& email() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& dnQualifier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& title() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& surname() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& givenName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& initial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = Il2CppString*> static T ToString(uintptr_t seq) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4BFD414))(0, seq);
	}
	template <typename T = Il2CppString*> static T ToString_1(uintptr_t seq, bool reversed, Il2CppString* separator, bool quotes) {
		return ((T (*)(void *, uintptr_t, bool, Il2CppString*, bool))(Il2CppBase() + 0x4C0AC34))(0, seq, reversed, separator, quotes);
	}
	template <typename T = void> static T AppendEntry(uintptr_t sb, uintptr_t entry, bool quotes) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4C09DF0))(0, sb, entry, quotes);
	}
	template <typename T = uintptr_t> static T GetAttributeFromOid(Il2CppString* attributeType) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C0AE5C))(0, attributeType);
	}
	template <typename T = bool> static T IsOid(Il2CppString* oid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C0BF04))(0, oid);
	}
	template <typename T = uintptr_t> static T ReadAttribute(Il2CppString* value, uintptr_t pos) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C0C044))(0, value, pos);
	}
	template <typename T = bool> static T IsHex(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4C0C268))(0, c);
	}
	template <typename T = Il2CppString*> static T ReadHex(Il2CppString* value, uintptr_t pos) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C0C3C0))(0, value, pos);
	}
	template <typename T = int32_t> static T ReadEscaped(uintptr_t sb, Il2CppString* value, int32_t pos) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4C0C614))(0, sb, value, pos);
	}
	template <typename T = int32_t> static T ReadQuoted(uintptr_t sb, Il2CppString* value, int32_t pos) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4C0C84C))(0, sb, value, pos);
	}
	template <typename T = Il2CppString*> static T ReadValue(Il2CppString* value, uintptr_t pos) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C0CA50))(0, value, pos);
	}
	template <typename T = uintptr_t> static T FromString(Il2CppString* rdn) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4C0CDB0))(0, rdn);
	}

};

}
