#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Entry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "Entry"));
	}

	template <typename T = Il2CppString*> T& str() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& hash() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& len() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& next() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

}
