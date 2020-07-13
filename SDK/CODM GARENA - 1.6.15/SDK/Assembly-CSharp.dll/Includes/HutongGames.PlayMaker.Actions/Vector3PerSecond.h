#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3PerSecond
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3PerSecond"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3PerSecond*))(Il2CppBase() + 0x4F1EB40))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3PerSecond*))(Il2CppBase() + 0x4F1EB50))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3PerSecond*))(Il2CppBase() + 0x4F1EBEC))(this);
	}

};

}
