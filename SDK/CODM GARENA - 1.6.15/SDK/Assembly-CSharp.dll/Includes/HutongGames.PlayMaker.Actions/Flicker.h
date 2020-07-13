#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Flicker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Flicker"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& frequency() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& amountOn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& rendererOnly() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Flicker*))(Il2CppBase() + 0x504FD2C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Flicker*))(Il2CppBase() + 0x504FD78))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Flicker*))(Il2CppBase() + 0x504FDA0))(this);
	}

};

}
