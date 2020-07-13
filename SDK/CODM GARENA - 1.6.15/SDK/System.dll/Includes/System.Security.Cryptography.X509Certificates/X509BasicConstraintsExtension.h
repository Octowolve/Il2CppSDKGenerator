#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509BasicConstraintsExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension"));
	}

	template <typename T = Il2CppString*> static T& oid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& friendlyName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& _certificateAuthority() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& _hasPathLengthConstraint() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = int32_t> T& _pathLengthConstraint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_CertificateAuthority() {
		return ((T (*)(X509BasicConstraintsExtension*))(Il2CppBase() + 0x3E7D330))(this);
	}
	template <typename T = bool> T get_HasPathLengthConstraint() {
		return ((T (*)(X509BasicConstraintsExtension*))(Il2CppBase() + 0x3E7D3F0))(this);
	}
	template <typename T = int32_t> T get_PathLengthConstraint() {
		return ((T (*)(X509BasicConstraintsExtension*))(Il2CppBase() + 0x3E7D4B0))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t asnEncodedData) {
		return ((T (*)(X509BasicConstraintsExtension*, uintptr_t))(Il2CppBase() + 0x3E7D570))(this, asnEncodedData);
	}
	template <typename T = uintptr_t> T Decode(Il2CppArray<uintptr_t>* extension) {
		return ((T (*)(X509BasicConstraintsExtension*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E7CD68))(this, extension);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Encode() {
		return ((T (*)(X509BasicConstraintsExtension*))(Il2CppBase() + 0x3E7D12C))(this);
	}
	template <typename T = Il2CppString*> T ToString(bool multiLine) {
		return ((T (*)(X509BasicConstraintsExtension*, bool))(Il2CppBase() + 0x3E78F30))(this, multiLine);
	}

};

}
