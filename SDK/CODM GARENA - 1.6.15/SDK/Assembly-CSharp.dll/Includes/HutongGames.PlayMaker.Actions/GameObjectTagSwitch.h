#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GameObjectTagSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GameObjectTagSwitch"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& compareTo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GameObjectTagSwitch*))(Il2CppBase() + 0x5054128))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GameObjectTagSwitch*))(Il2CppBase() + 0x50541F0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GameObjectTagSwitch*))(Il2CppBase() + 0x5054424))(this);
	}
	template <typename T = void> T DoTagSwitch() {
		return ((T (*)(GameObjectTagSwitch*))(Il2CppBase() + 0x505421C))(this);
	}

};

}
