#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2ClampMagnitude
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2ClampMagnitude"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& maxLength() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2ClampMagnitude*))(Il2CppBase() + 0x4F1B96C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector2ClampMagnitude*))(Il2CppBase() + 0x4F1B980))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2ClampMagnitude*))(Il2CppBase() + 0x4F1BA30))(this);
	}
	template <typename T = void> T DoVector2ClampMagnitude() {
		return ((T (*)(Vector2ClampMagnitude*))(Il2CppBase() + 0x4F1B9AC))(this);
	}

};

}
