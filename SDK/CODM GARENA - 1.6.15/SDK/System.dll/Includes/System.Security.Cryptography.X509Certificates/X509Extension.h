#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography.X509Certificates {

class X509Extension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Extension"));
	}

	template <typename T = bool> T& _critical() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_Critical() {
		return ((T (*)(X509Extension*))(Il2CppBase() + 0x3E7D788))(this);
	}
	template <typename T = void> T set_Critical(bool value) {
		return ((T (*)(X509Extension*, bool))(Il2CppBase() + 0x3E7CD60))(this, value);
	}
	template <typename T = void> T CopyFrom(uintptr_t asnEncodedData) {
		return ((T (*)(X509Extension*, uintptr_t))(Il2CppBase() + 0x3E89560))(this, asnEncodedData);
	}
	template <typename T = Il2CppString*> T FormatUnkownData(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(X509Extension*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3E7D790))(this, data);
	}

};

}
