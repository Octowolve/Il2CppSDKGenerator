#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ListEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ListEntry"));
	}

	template <typename T = uintptr_t> T& key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& next() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
