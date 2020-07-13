#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarViewCameraShaker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarView_CameraShaker"));
	}

	template <typename T = uintptr_t> T& shaker() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& curve() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& playTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& playDuration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppQuaternion> T& defaultRot() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& defaultPos() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AvatarViewCameraShaker*))(Il2CppBase() + 0x28E4748))(this);
	}
	template <typename T = void> T ResetStart() {
		return ((T (*)(AvatarViewCameraShaker*))(Il2CppBase() + 0x28E4860))(this);
	}
	template <typename T = void> T Play(uintptr_t cameraShakeParam) {
		return ((T (*)(AvatarViewCameraShaker*, uintptr_t))(Il2CppBase() + 0x28E48EC))(this, cameraShakeParam);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AvatarViewCameraShaker*))(Il2CppBase() + 0x28E49A0))(this);
	}

};

}
