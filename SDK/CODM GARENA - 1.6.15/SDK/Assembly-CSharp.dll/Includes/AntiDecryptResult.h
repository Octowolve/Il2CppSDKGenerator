#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AntiDecryptResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AntiDecryptResult"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ANTI_DECRYPT_OK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ANTI_DECRYPT_FAIL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
