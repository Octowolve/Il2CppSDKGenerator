#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class CspParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "CspParameters"));
	}

	template <typename T = uintptr_t> T& _Flags() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& KeyContainerName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& KeyNumber() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ProviderName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ProviderType() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_Flags() {
		return ((T (*)(CspParameters*))(Il2CppBase() + 0x303A458))(this);
	}
	template <typename T = void> T set_Flags(uintptr_t value) {
		return ((T (*)(CspParameters*, uintptr_t))(Il2CppBase() + 0x303A460))(this, value);
	}

};

}
