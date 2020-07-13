#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3ClampMagnitude
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3ClampMagnitude"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& maxLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3ClampMagnitude*))(Il2CppBase() + 0x4F1D734))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3ClampMagnitude*))(Il2CppBase() + 0x4F1D748))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3ClampMagnitude*))(Il2CppBase() + 0x4F1D800))(this);
	}
	template <typename T = void> T DoVector3ClampMagnitude() {
		return ((T (*)(Vector3ClampMagnitude*))(Il2CppBase() + 0x4F1D774))(this);
	}

};

}
