#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmAnimationCurve
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmAnimationCurve"));
	}

	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
