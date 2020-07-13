#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "SPKey"));
	}

	template <typename T = uintptr_t> T& uri() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& use_connect() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(SPKey*))(Il2CppBase() + 0x3E598D8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(SPKey*, uintptr_t))(Il2CppBase() + 0x3E59918))(this, obj);
	}

};

}
