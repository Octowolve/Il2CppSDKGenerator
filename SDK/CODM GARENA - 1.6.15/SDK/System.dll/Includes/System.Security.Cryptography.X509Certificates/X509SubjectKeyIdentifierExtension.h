#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509SubjectKeyIdentifierExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension"));
	}

	template <typename T = Il2CppString*> static T& oid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& friendlyName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _subjectKeyIdentifier() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _ski() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = Il2CppString*> T get_SubjectKeyIdentifier() {
		return ((T (*)(X509SubjectKeyIdentifierExtension*))(Il2CppBase() + 0x3E829A4))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t encodedData) {
		return ((T (*)(X509SubjectKeyIdentifierExtension*, uintptr_t))(Il2CppBase() + 0x3E8B134))(this, encodedData);
	}
	template <typename T = unsigned char> static T FromHexChar(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3E8B34C))(0, c);
	}
	template <typename T = unsigned char> static T FromHexChars(char c1, char c2) {
		return ((T (*)(void *, char, char))(Il2CppBase() + 0x3E8B398))(0, c1, c2);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromHex(Il2CppString* hex) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E8AAD4))(0, hex);
	}
	template <typename T = uintptr_t> T Decode(Il2CppArray<uintptr_t>* extension) {
		return ((T (*)(X509SubjectKeyIdentifierExtension*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E8A4A8))(this, extension);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Encode() {
		return ((T (*)(X509SubjectKeyIdentifierExtension*))(Il2CppBase() + 0x3E8A874))(this);
	}
	template <typename T = Il2CppString*> T ToString(bool multiLine) {
		return ((T (*)(X509SubjectKeyIdentifierExtension*, bool))(Il2CppBase() + 0x3E7A248))(this, multiLine);
	}

};

}
