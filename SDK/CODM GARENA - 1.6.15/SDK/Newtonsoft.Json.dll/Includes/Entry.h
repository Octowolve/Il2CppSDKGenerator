#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Entry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "", "Entry"));
	}

	template <typename T = Il2CppString*> T& Value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& HashCode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Next() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
