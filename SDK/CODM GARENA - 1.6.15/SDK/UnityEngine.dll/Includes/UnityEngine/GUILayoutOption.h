#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUILayoutOption
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUILayoutOption"));
	}

	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& value() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
