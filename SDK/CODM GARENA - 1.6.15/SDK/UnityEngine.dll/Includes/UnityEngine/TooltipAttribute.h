#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TooltipAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TooltipAttribute"));
	}

	template <typename T = Il2CppString*> T& tooltip() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
