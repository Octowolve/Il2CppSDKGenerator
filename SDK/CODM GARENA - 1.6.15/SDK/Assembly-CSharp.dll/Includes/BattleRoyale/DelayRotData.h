#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class DelayRotData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "DelayRotData"));
	}

	template <typename T = float> T& Time() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppQuaternion> T& Rot() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
