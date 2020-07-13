#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DecodableBankHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DecodableBankHandle"));
	}

	template <typename T = bool> T& decodeBank() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& decodedBankPath() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& saveDecodedBank() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T DoLoadBank() {
		return ((T (*)(DecodableBankHandle*))(Il2CppBase() + 0x4A2BF74))(this);
	}
	template <typename T = void> T UnloadBank() {
		return ((T (*)(DecodableBankHandle*))(Il2CppBase() + 0x4A2C1F4))(this);
	}

};

}
