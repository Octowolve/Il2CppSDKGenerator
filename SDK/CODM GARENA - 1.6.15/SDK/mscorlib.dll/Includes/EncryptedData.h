#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EncryptedData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "EncryptedData"));
	}

	template <typename T = unsigned char> T& _version() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _encryptionAlgorithm() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _encrypted() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_EncryptionAlgorithm_1() {
		return ((T (*)(EncryptedData*))(Il2CppBase() + 0x3FB2198))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EncryptedContent_1() {
		return ((T (*)(EncryptedData*))(Il2CppBase() + 0x3FB21A0))(this);
	}

};

}
