#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetCameraCullingMask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetCameraCullingMask"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cullingMask() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& invertMask() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetCameraCullingMask*))(Il2CppBase() + 0x4FB606C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetCameraCullingMask*))(Il2CppBase() + 0x4FB6120))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetCameraCullingMask*))(Il2CppBase() + 0x4FB6274))(this);
	}
	template <typename T = void> T DoSetCameraCullingMask() {
		return ((T (*)(SetCameraCullingMask*))(Il2CppBase() + 0x4FB614C))(this);
	}

};

}
