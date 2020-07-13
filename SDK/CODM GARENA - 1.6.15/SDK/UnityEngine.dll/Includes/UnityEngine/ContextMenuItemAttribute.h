#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ContextMenuItemAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ContextMenuItemAttribute"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& function() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
