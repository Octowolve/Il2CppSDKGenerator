#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RandomWait
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RandomWait"));
	}

	template <typename T = uintptr_t> T& min() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& max() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& time() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RandomWait*))(Il2CppBase() + 0x4D81E14))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RandomWait*))(Il2CppBase() + 0x4D81E58))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RandomWait*))(Il2CppBase() + 0x4D81F10))(this);
	}

};

}
