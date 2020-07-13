#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CameraFadeOut
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CameraFadeOut"));
	}

	template <typename T = uintptr_t> T& color() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& finishEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& realTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& currentTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& colorLerp() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(CameraFadeOut*))(Il2CppBase() + 0x4F38D78))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CameraFadeOut*))(Il2CppBase() + 0x4F38DD8))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CameraFadeOut*))(Il2CppBase() + 0x4F38E2C))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(CameraFadeOut*))(Il2CppBase() + 0x4F38F90))(this);
	}

};

}
