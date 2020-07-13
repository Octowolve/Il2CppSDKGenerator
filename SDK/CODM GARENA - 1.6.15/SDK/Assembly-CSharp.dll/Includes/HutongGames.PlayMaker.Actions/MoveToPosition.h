#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MoveToPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MoveToPosition"));
	}

	template <typename T = uintptr_t> T& StartPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NavAgent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MoveToPosition*))(Il2CppBase() + 0x4D7B0F0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(MoveToPosition*))(Il2CppBase() + 0x4D7B0F4))(this);
	}

};

}
