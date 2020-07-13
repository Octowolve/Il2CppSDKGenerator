#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Blink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Blink"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& timeOff() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& timeOn() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& startOn() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& rendererOnly() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& blinkOn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Blink*))(Il2CppBase() + 0x4F33F9C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Blink*))(Il2CppBase() + 0x4F33FFC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Blink*))(Il2CppBase() + 0x4F34214))(this);
	}
	template <typename T = void> T UpdateBlinkState(bool state) {
		return ((T (*)(Blink*, bool))(Il2CppBase() + 0x4F34050))(this, state);
	}

};

}
