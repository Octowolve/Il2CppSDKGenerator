#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CutToCamera
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CutToCamera"));
	}

	template <typename T = uintptr_t> T& camera() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& makeMainCamera() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& cutBackOnExit() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& oldCamera() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CutToCamera*))(Il2CppBase() + 0x4FC4330))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CutToCamera*))(Il2CppBase() + 0x4FC4344))(this);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(CutToCamera*))(Il2CppBase() + 0x4FC45E4))(this);
	}
	template <typename T = void> static T SwitchCamera(uintptr_t camera1, uintptr_t camera2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4FC44A4))(0, camera1, camera2);
	}

};

}
