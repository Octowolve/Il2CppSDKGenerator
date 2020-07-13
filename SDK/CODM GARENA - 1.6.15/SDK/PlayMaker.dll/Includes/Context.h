#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Context
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "Context"));
	}

	template <typename T = uintptr_t> T& currentFsm() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& currentAction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& currentActionIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& currentParameter() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
