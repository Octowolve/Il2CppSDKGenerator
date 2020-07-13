#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class MoveObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "MoveObject"));
	}

	template <typename T = uintptr_t> T& objectToMove() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& destination() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& fromValue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& toVector() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& fromVector() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& finishInNextStep() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(MoveObject*))(Il2CppBase() + 0x4D7A90C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(MoveObject*))(Il2CppBase() + 0x4D7A938))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(MoveObject*))(Il2CppBase() + 0x4D7AD50))(this);
	}

};

}
