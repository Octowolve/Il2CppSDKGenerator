#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomInstanceType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "CustomInstanceType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& BIOME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ROCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
