#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class MACTripleDES
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "MACTripleDES"));
	}

	template <typename T = uintptr_t> T& tdes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mac() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_disposed() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Setup(Il2CppString* strTripleDES, Il2CppArray<uintptr_t>* rgbKey) {
		return ((T (*)(MACTripleDES*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3042F88))(this, strTripleDES, rgbKey);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(MACTripleDES*))(Il2CppBase() + 0x30430E8))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(MACTripleDES*, bool))(Il2CppBase() + 0x304315C))(this, disposing);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(MACTripleDES*))(Il2CppBase() + 0x3043200))(this);
	}
	template <typename T = void> T HashCore(Il2CppArray<uintptr_t>* rgbData, int32_t ibStart, int32_t cbSize) {
		return ((T (*)(MACTripleDES*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x30432E8))(this, rgbData, ibStart, cbSize);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T HashFinal() {
		return ((T (*)(MACTripleDES*))(Il2CppBase() + 0x3043410))(this);
	}

};

}
