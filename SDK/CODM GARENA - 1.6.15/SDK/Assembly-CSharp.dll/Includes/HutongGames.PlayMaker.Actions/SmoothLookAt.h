#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SmoothLookAt
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SmoothLookAt"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& targetObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& targetPosition() {
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
	template <typename T = uintptr_t> T& debug() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& finishTolerance() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& finishEvent() {
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
		return ((T (*)(SmoothLookAt*))(Il2CppBase() + 0x502FE94))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SmoothLookAt*))(Il2CppBase() + 0x502FFEC))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(SmoothLookAt*))(Il2CppBase() + 0x502FFF8))(this);
	}
	template <typename T = void> T DoSmoothLookAt() {
		return ((T (*)(SmoothLookAt*))(Il2CppBase() + 0x502FFFC))(this);
	}

};

}
