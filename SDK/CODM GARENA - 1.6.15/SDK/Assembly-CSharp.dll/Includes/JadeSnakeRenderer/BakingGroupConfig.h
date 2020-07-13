#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class BakingGroupConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "BakingGroupConfig"));
	}

	template <typename T = int32_t> T& Resolution() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& PaddingTexels() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
