#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SmoothLookAtDirection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SmoothLookAtDirection"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& targetDirection() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& minMagnitude() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& upVector() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& keepVertical() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& speed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& lateUpdate() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& finish() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& previousGo() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppQuaternion> T& lastRotation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppQuaternion> T& desiredRotation() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SmoothLookAtDirection*))(Il2CppBase() + 0x50307E4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SmoothLookAtDirection*))(Il2CppBase() + 0x5030934))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SmoothLookAtDirection*))(Il2CppBase() + 0x5030940))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(SmoothLookAtDirection*))(Il2CppBase() + 0x5030D6C))(this);
	}
	template <typename T = void> T DoSmoothLookAtDirection() {
		return ((T (*)(SmoothLookAtDirection*))(Il2CppBase() + 0x5030950))(this);
	}

};

}
