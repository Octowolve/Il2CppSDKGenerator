#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionLookRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionLookRotation"));
	}

	template <typename T = uintptr_t> T& direction() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& upVector() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(QuaternionLookRotation*))(Il2CppBase() + 0x4D80EEC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(QuaternionLookRotation*))(Il2CppBase() + 0x4D80FB8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(QuaternionLookRotation*))(Il2CppBase() + 0x4D810EC))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(QuaternionLookRotation*))(Il2CppBase() + 0x4D810FC))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(QuaternionLookRotation*))(Il2CppBase() + 0x4D8110C))(this);
	}
	template <typename T = void> T DoQuatLookRotation() {
		return ((T (*)(QuaternionLookRotation*))(Il2CppBase() + 0x4D80FE4))(this);
	}

};

}
