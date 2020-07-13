#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3Subtract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3Subtract"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& subtractVector() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3Subtract*))(Il2CppBase() + 0x4F1EEA4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3Subtract*))(Il2CppBase() + 0x4F1EF64))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3Subtract*))(Il2CppBase() + 0x4F1F010))(this);
	}

};

}
