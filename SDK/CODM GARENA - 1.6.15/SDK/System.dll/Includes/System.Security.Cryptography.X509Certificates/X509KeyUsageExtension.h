#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509KeyUsageExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension"));
	}

	template <typename T = Il2CppString*> static T& oid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& friendlyName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& all() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _keyUsages() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_KeyUsages() {
		return ((T (*)(X509KeyUsageExtension*))(Il2CppBase() + 0x3E58780))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t encodedData) {
		return ((T (*)(X509KeyUsageExtension*, uintptr_t))(Il2CppBase() + 0x3E8A1A4))(this, encodedData);
	}
	template <typename T = uintptr_t> T GetValidFlags(uintptr_t flags) {
		return ((T (*)(X509KeyUsageExtension*, uintptr_t))(Il2CppBase() + 0x3E89F38))(this, flags);
	}
	template <typename T = uintptr_t> T Decode(Il2CppArray<uintptr_t>* extension) {
		return ((T (*)(X509KeyUsageExtension*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E89C14))(this, extension);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T Encode() {
		return ((T (*)(X509KeyUsageExtension*))(Il2CppBase() + 0x3E89F4C))(this);
	}
	template <typename T = Il2CppString*> T ToString(bool multiLine) {
		return ((T (*)(X509KeyUsageExtension*, bool))(Il2CppBase() + 0x3E799EC))(this, multiLine);
	}

};

}
