#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CameraShakeAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CameraShakeAction"));
	}

	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Intensity() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(CameraShakeAction*))(Il2CppBase() + 0x4F3910C))(this);
	}

};

}
