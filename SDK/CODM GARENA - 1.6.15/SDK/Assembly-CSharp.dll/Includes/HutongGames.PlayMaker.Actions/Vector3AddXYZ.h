#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Vector3AddXYZ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Vector3AddXYZ"));
	}

	template <typename T = uintptr_t> T& vector3Variable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& addX() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& addY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& addZ() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& perSecond() {
		return *(T*)((uintptr_t)this + 0x39);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Vector3AddXYZ*))(Il2CppBase() + 0x4F1D51C))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Vector3AddXYZ*))(Il2CppBase() + 0x4F1D574))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(Vector3AddXYZ*))(Il2CppBase() + 0x4F1D728))(this);
	}
	template <typename T = void> T DoVector3AddXYZ() {
		return ((T (*)(Vector3AddXYZ*))(Il2CppBase() + 0x4F1D5A0))(this);
	}

};

}
