#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Key
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "Key"));
	}

	template <typename T = Il2CppString*> T& pattern() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& options() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Key*))(Il2CppBase() + 0x4AD3534))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(Key*, uintptr_t))(Il2CppBase() + 0x4AD356C))(this, o);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Key*))(Il2CppBase() + 0x4AD3670))(this);
	}

};

}
