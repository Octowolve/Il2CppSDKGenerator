#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ShakeGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ShakeGroup"));
	}

	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& intensity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& groupId() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
