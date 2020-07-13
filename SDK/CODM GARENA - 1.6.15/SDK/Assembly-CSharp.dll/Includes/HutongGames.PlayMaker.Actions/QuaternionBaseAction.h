#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class QuaternionBaseAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "QuaternionBaseAction"));
	}

	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = uintptr_t> T& everyFrameOption() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(QuaternionBaseAction*))(Il2CppBase() + 0x4D80744))(this);
	}

};

}
