#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EncryptedPrivateKeyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Mono.Security.dll", "", "EncryptedPrivateKeyInfo"));
	}

	template <typename T = Il2CppString*> T& _algorithm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _salt() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _iterations() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _data() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppString*> T get_Algorithm() {
		return ((T (*)(EncryptedPrivateKeyInfo*))(Il2CppBase() + 0x47D2534))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_EncryptedData() {
		return ((T (*)(EncryptedPrivateKeyInfo*))(Il2CppBase() + 0x47D253C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Salt() {
		return ((T (*)(EncryptedPrivateKeyInfo*))(Il2CppBase() + 0x47D25D8))(this);
	}
	template <typename T = int32_t> T get_IterationCount() {
		return ((T (*)(EncryptedPrivateKeyInfo*))(Il2CppBase() + 0x47D26E4))(this);
	}
	template <typename T = void> T Decode(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(EncryptedPrivateKeyInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47D2218))(this, data);
	}

};

}
