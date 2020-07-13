#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3Normalize
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3Normalize"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3Normalize*))(Il2CppBase() + 0x4F1E5EC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3Normalize*))(Il2CppBase() + 0x4F1E5FC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3Normalize*))(Il2CppBase() + 0x4F1E698))(this);
	}

};

}
