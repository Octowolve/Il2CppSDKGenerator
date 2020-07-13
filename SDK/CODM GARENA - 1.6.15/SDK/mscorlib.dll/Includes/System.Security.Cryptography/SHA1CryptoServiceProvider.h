#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHA1CryptoServiceProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHA1CryptoServiceProvider"));
	}

	template <typename T = uintptr_t> T& sha() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Finalize() {
		return ((T (*)(SHA1CryptoServiceProvider*))(Il2CppBase() + 0x4273F58))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(SHA1CryptoServiceProvider*, bool))(Il2CppBase() + 0x4273FC4))(this, disposing);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgb, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(SHA1CryptoServiceProvider*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4273FCC))(this, rgb, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(SHA1CryptoServiceProvider*))(Il2CppBase() + 0x427410C))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SHA1CryptoServiceProvider*))(Il2CppBase() + 0x42742A4))(this);
	}

};

}
