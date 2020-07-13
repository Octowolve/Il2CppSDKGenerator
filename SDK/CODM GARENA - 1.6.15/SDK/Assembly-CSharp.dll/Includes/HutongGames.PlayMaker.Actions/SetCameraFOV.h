#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetCameraFOV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetCameraFOV"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& fieldOfView() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetCameraFOV*))(Il2CppBase() + 0x4FB62FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetCameraFOV*))(Il2CppBase() + 0x4FB6330))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(SetCameraFOV*))(Il2CppBase() + 0x4FB646C))(this);
	}
	template <typename T = void> T DoSetCameraFOV() {
		return ((T (*)(SetCameraFOV*))(Il2CppBase() + 0x4FB635C))(this);
	}

};

}
