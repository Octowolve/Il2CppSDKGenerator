#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class HMACSHA512
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "HMACSHA512"));
	}

	template <typename T = bool> static T& legacy_mode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& legacy() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T set_ProduceLegacyHmacValues(bool value) {
		return ((T (*)(HMACSHA512*, bool))(Il2CppBase() + 0x3042C9C))(this, value);
	}

};

}
