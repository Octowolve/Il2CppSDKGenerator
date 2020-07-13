#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ContainerContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "ContainerContext"));
	}

	template <typename T = uintptr_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Position() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
