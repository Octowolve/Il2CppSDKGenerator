#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Item
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "_Item"));
	}

	template <typename T = Il2CppString*> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
