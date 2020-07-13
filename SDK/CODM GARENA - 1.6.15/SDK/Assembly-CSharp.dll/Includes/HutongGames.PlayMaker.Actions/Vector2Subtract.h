#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector2Subtract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector2Subtract"));
	}

	template <typename T = uintptr_t> T& vector2Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& subtractVector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector2Subtract*))(Il2CppBase() + 0x4F1D0EC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector2Subtract*))(Il2CppBase() + 0x4F1D1AC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector2Subtract*))(Il2CppBase() + 0x4F1D254))(this);
	}

};

}
