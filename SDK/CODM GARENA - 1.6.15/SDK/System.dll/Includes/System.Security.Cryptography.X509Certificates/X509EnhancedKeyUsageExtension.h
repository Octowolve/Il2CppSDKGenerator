#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509EnhancedKeyUsageExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension"));
	}

	template <typename T = uintptr_t> T& _enhKeyUsage() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$mapE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_EnhancedKeyUsages() {
		return ((T (*)(X509EnhancedKeyUsageExtension*))(Il2CppBase() + 0x3E58840))(this);
	}
	template <typename T = void> T CopyFrom(uintptr_t asnEncodedData) {
		return ((T (*)(X509EnhancedKeyUsageExtension*, uintptr_t))(Il2CppBase() + 0x3E89328))(this, asnEncodedData);
	}
	template <typename T = uintptr_t> T Decode(Il2CppArray<uintptr_t>* extension) {
		return ((T (*)(X509EnhancedKeyUsageExtension*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E8904C))(this, extension);
	}
	template <typename T = Il2CppString*> T ToString(bool multiLine) {
		return ((T (*)(X509EnhancedKeyUsageExtension*, bool))(Il2CppBase() + 0x3E793B0))(this, multiLine);
	}

};

}
