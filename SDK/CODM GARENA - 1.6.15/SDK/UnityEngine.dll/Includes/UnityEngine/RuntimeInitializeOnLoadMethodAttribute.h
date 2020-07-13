#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class RuntimeInitializeOnLoadMethodAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute"));
	}

	template <typename T = uintptr_t> T& loadType() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T set_loadType(uintptr_t value) {
		return ((T (*)(RuntimeInitializeOnLoadMethodAttribute*, uintptr_t))(Il2CppBase() + 0x4E7B7E0))(this, value);
	}

};

}
