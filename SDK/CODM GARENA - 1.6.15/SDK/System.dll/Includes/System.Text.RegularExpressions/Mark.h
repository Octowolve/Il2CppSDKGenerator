#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class Mark
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "Mark"));
	}

	template <typename T = int32_t> T& Start() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& End() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Previous() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_IsDefined() {
		return ((T (*)(Mark*))(Il2CppBase() + 0x4AD9C50))(this);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(Mark*))(Il2CppBase() + 0x4AD9C78))(this);
	}
	template <typename T = int32_t> T get_Length() {
		return ((T (*)(Mark*))(Il2CppBase() + 0x4AD9C8C))(this);
	}

};

}
