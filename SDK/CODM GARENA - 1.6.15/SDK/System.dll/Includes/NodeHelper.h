#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NodeHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "NodeHelper"));
	}

	template <typename T = void*> T& cmp() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = void*> static T& Default() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T Compare(uintptr_t key, uintptr_t node) {
		return ((T (*)(NodeHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x188721C))(this, key, node);
	}
	template <typename T = uintptr_t> T CreateNode(uintptr_t key) {
		return ((T (*)(NodeHelper*, uintptr_t))(Il2CppBase() + 0x1887318))(this, key);
	}
	template <typename T = void*> static T GetHelper(void* cmp) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x188736C))(0, cmp);
	}

};

}
