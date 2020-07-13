#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ListChangedEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ListChangedEventArgs"));
	}

	template <typename T = uintptr_t> T& changedType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& oldIndex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& newIndex() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
