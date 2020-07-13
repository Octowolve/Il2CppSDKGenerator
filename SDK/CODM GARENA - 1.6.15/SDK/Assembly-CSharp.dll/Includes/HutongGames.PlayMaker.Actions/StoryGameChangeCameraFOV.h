#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameChangeCameraFOV
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameChangeCameraFOV"));
	}

	template <typename T = float> T& FOV() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& blendTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& WorldCam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& currentFOV() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& blendEndTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameChangeCameraFOV*))(Il2CppBase() + 0x503356C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameChangeCameraFOV*))(Il2CppBase() + 0x50336AC))(this);
	}

};

}
