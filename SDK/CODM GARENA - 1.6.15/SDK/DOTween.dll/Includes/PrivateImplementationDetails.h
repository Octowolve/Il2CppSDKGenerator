#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrivateImplementationDetails
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "", "<PrivateImplementationDetails>"));
	}

	template <typename T = uintptr_t> static T& 6F98278EFCD257898AD01BE39D1D0AEFB78FC551() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& 8C4C6C4E493EC2BEEF5F6F6A9C4472C13BED42E8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x32);
	}
	template <typename T = uintptr_t> static T& 9DC5F4D0A1418B4EC71B22D21E93D134922FA735() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x46);
	}
	template <typename T = uintptr_t> static T& FD0BD55CDDDFD0B323012A45F83437763AF58952() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBE);
	}


};

}
