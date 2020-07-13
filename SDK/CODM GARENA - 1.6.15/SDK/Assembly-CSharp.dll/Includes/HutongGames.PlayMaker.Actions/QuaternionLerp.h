#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionLerp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionLerp"));
	}

	template <typename T = uintptr_t> T& fromQuaternion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& toQuaternion() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& amount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& storeResult() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionLerp*))(Il2CppBase() + 0x4D80C98))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionLerp*))(Il2CppBase() + 0x4D80DB4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionLerp*))(Il2CppBase() + 0x4D80EB4))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionLerp*))(Il2CppBase() + 0x4D80EC4))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionLerp*))(Il2CppBase() + 0x4D80ED4))(this);
	}
	template <typename T = void> T DoQuatLerp() {
		return ((T (*)(QuaternionLerp*))(Il2CppBase() + 0x4D80DE0))(this);
	}

};

}
