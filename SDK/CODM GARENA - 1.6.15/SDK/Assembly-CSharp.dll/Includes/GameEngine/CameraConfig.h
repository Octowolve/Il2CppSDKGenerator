#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CameraConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CameraConfig"));
	}

	template <typename T = uintptr_t> static T& mConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& WindowHeightOffsetForClimb() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& HeightOffsetForClimb90() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& HeightOffsetForClimb120() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& HeightOffsetForClimb160() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& HeightOffsetForClimb180() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& HeightOffsetForClimb200() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& LerpTimeForClimbOver() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& EnableCollisionForClimbOver() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& EnableCheckWindowForClimbOver() {
		return *(T*)((uintptr_t)this + 0x29);
	}
	template <typename T = float> T& CameraCollisionZoomInTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& CameraCollisionZoomOutTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CameraDistInRoom() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& CameraCeilingHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& CameraCollisionPauseTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& CameraCollisionNearClip() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& SlideToJumpCameraSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x41910E4))(0);
	}

};

}
