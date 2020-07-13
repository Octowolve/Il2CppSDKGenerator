#pragma once
#include <Il2Cpp/Il2Cpp.h>

class INodeHelper1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "INodeHelper`1"));
	}


	template <typename T = int32_t> T Compare(uintptr_t key, uintptr_t node) {
		return ((T (*)(INodeHelper1*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, node);
	}
	template <typename T = uintptr_t> T CreateNode(uintptr_t key) {
		return ((T (*)(INodeHelper1*, uintptr_t))(Il2CppBase() + 0x0))(this, key);
	}

};

}
