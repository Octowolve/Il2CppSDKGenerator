#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class AesManaged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System.Security.Cryptography", "AesManaged"));
	}


	template <typename T = void> T GenerateIV() {
		return ((T (*)(AesManaged*))(Il2CppBase() + 0x4EC7BAC))(this);
	}
	template <typename T = void> T GenerateKey() {
		return ((T (*)(AesManaged*))(Il2CppBase() + 0x4EC7BCC))(this);
	}
	template <typename T = uintptr_t> T CreateDecryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(AesManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC7BEC))(this, rgbKey, rgbIV);
	}
	template <typename T = uintptr_t> T CreateEncryptor(Il2CppArray<uintptr_t>* rgbKey, Il2CppArray<uintptr_t>* rgbIV) {
		return ((T (*)(AesManaged*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC8818))(this, rgbKey, rgbIV);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_IV() {
		return ((T (*)(AesManaged*))(Il2CppBase() + 0x4EC88C4))(this);
	}
	template <typename T = void> T set_IV(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AesManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC88CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Key() {
		return ((T (*)(AesManaged*))(Il2CppBase() + 0x4EC88D4))(this);
	}
	template <typename T = void> T set_Key(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AesManaged*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EC88DC))(this, value);
	}
	template <typename T = int32_t> T get_KeySize() {
		return ((T (*)(AesManaged*))(Il2CppBase() + 0x4EC88E4))(this);
	}
	template <typename T = void> T set_KeySize(int32_t value) {
		return ((T (*)(AesManaged*, int32_t))(Il2CppBase() + 0x4EC88EC))(this, value);
	}
	template <typename T = uintptr_t> T CreateDecryptor_1() {
		return ((T (*)(AesManaged*))(Il2CppBase() + 0x4EC88F4))(this);
	}
	template <typename T = uintptr_t> T CreateEncryptor_1() {
		return ((T (*)(AesManaged*))(Il2CppBase() + 0x4EC892C))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(AesManaged*, bool))(Il2CppBase() + 0x4EC8964))(this, disposing);
	}

};

}
