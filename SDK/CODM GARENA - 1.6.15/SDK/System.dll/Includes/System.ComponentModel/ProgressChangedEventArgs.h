#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class ProgressChangedEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "ProgressChangedEventArgs"));
	}

	template <typename T = int32_t> T& progress() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
