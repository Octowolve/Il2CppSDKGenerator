#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CameraFadeIn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CameraFadeIn"));
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
		return ((T (*)(CameraFadeIn*))(Il2CppBase() + 0x4F389D0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(CameraFadeIn*))(Il2CppBase() + 0x4F38A30))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(CameraFadeIn*))(Il2CppBase() + 0x4F38A98))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(CameraFadeIn*))(Il2CppBase() + 0x4F38C08))(this);
	}

};

}
