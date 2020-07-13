#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionSlerp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionSlerp"));
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
		return ((T (*)(QuaternionSlerp*))(Il2CppBase() + 0x4D816FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionSlerp*))(Il2CppBase() + 0x4D8181C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionSlerp*))(Il2CppBase() + 0x4D8191C))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionSlerp*))(Il2CppBase() + 0x4D8192C))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionSlerp*))(Il2CppBase() + 0x4D8193C))(this);
	}
	template <typename T = void> T DoQuatSlerp() {
		return ((T (*)(QuaternionSlerp*))(Il2CppBase() + 0x4D81848))(this);
	}

};

}
