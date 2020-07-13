#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3Add
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3Add"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& addVector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x31);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3Add*))(Il2CppBase() + 0x4F1D2EC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3Add*))(Il2CppBase() + 0x4F1D3AC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3Add*))(Il2CppBase() + 0x4F1D510))(this);
	}
	template <typename T = void> T DoVector3Add() {
		return ((T (*)(Vector3Add*))(Il2CppBase() + 0x4F1D3D8))(this);
	}

};

}
