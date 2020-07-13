#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RandomEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RandomEvent"));
	}

	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& noRepeat() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& delayedEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& randomEventIndex() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& lastEventIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RandomEvent*))(Il2CppBase() + 0x4D819D0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RandomEvent*))(Il2CppBase() + 0x4D819DC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RandomEvent*))(Il2CppBase() + 0x4D81C30))(this);
	}
	template <typename T = uintptr_t> T GetRandomEvent() {
		return ((T (*)(RandomEvent*))(Il2CppBase() + 0x4D81B1C))(this);
	}

};

}
