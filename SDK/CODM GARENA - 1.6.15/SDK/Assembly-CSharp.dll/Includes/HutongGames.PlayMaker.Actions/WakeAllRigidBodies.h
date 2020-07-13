#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WakeAllRigidBodies
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WakeAllRigidBodies"));
	}

	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& bodies() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(WakeAllRigidBodies*))(Il2CppBase() + 0x4F202D4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(WakeAllRigidBodies*))(Il2CppBase() + 0x4F202E0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(WakeAllRigidBodies*))(Il2CppBase() + 0x4F205A0))(this);
	}
	template <typename T = void> T DoWakeAll() {
		return ((T (*)(WakeAllRigidBodies*))(Il2CppBase() + 0x4F20424))(this);
	}

};

}
