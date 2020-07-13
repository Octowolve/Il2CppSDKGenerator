#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ContextMenu
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ContextMenu"));
	}

	template <typename T = Il2CppString*> T& menuItem() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& validate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& priority() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
