#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FsmStateActionAnimatorBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FsmStateActionAnimatorBase"));
	}

	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& everyFrameOption() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& IklayerIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnActionUpdate() {
		return ((T (*)(FsmStateActionAnimatorBase*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FsmStateActionAnimatorBase*))(Il2CppBase() + 0x50529CC))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(FsmStateActionAnimatorBase*))(Il2CppBase() + 0x50529DC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FsmStateActionAnimatorBase*))(Il2CppBase() + 0x5052A50))(this);
	}
	template <typename T = void> T DoAnimatorMove() {
		return ((T (*)(FsmStateActionAnimatorBase*))(Il2CppBase() + 0x5052A98))(this);
	}
	template <typename T = void> T DoAnimatorIK(int32_t layerIndex) {
		return ((T (*)(FsmStateActionAnimatorBase*, int32_t))(Il2CppBase() + 0x5052AE0))(this, layerIndex);
	}

};

}
