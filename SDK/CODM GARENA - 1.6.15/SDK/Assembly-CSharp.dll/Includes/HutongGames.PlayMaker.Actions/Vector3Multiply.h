#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3Multiply
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3Multiply"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& multiplyBy() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3Multiply*))(Il2CppBase() + 0x4F1E484))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3Multiply*))(Il2CppBase() + 0x4F1E4B4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3Multiply*))(Il2CppBase() + 0x4F1E558))(this);
	}

};

}
