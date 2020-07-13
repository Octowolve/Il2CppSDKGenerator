#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreatorPropertyContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "CreatorPropertyContext"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Property() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ConstructorProperty() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& Presence() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& Used() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
