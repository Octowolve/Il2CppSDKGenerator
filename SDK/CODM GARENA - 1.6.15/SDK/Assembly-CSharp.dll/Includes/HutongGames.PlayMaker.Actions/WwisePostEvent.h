#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WwisePostEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WwisePostEvent"));
	}

	template <typename T = Il2CppString*> T& WwiseEvent() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(WwisePostEvent*))(Il2CppBase() + 0x4F20C0C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(WwisePostEvent*))(Il2CppBase() + 0x4F20CC4))(this);
	}

};

}
