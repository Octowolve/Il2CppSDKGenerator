#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DelayAnimValueData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DelayAnimValueData"));
	}

	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Right() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& Forward() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Down() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
