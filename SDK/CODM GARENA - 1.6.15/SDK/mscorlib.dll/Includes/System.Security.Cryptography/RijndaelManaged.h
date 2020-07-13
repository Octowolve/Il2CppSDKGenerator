#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class RijndaelManaged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "RijndaelManaged"));
	}


	template <typename T = void> T GenerateIV() {
		return ((T (*)(RijndaelManaged*))(Il2CppBase() + 0x3049304))(this);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(RijndaelManaged*))(Il2CppBase() + 0x304932C))(this);
	}
	template <typename T = uintptr_t> T CreateDecryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(RijndaelManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3049354))(this, rgbKey, rgbIV);
	}
	template <typename T = uintptr_t> T CreateEncryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(RijndaelManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30494EC))(this, rgbKey, rgbIV);
	}

};

}
