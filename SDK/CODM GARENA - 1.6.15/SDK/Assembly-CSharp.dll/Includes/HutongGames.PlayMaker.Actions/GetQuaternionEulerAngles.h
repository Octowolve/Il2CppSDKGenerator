#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetQuaternionEulerAngles
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetQuaternionEulerAngles"));
	}

	template <typename T = uintptr_t> T& quaternion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& eulerAngles() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetQuaternionEulerAngles*))(Il2CppBase() + 0x508FFE8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetQuaternionEulerAngles*))(Il2CppBase() + 0x5090004))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetQuaternionEulerAngles*))(Il2CppBase() + 0x50900B0))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(GetQuaternionEulerAngles*))(Il2CppBase() + 0x50900C0))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(GetQuaternionEulerAngles*))(Il2CppBase() + 0x50900D0))(this);
	}
	template <typename T = void> T GetQuatEuler() {
		return ((T (*)(GetQuaternionEulerAngles*))(Il2CppBase() + 0x5090030))(this);
	}

};

}
