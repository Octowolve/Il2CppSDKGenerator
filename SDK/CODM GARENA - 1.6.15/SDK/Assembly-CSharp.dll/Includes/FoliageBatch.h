#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageBatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageBatch"));
	}

	template <typename T = uintptr_t> T& Batch() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Renderers() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
