#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FsmStateSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FsmStateSwitch"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& compareTo() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sendEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& previousGo() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(FsmStateSwitch*))(Il2CppBase() + 0x5052BB0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(FsmStateSwitch*))(Il2CppBase() + 0x5052C7C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(FsmStateSwitch*))(Il2CppBase() + 0x5052F6C))(this);
	}
	template <typename T = void> T DoFsmStateSwitch() {
		return ((T (*)(FsmStateSwitch*))(Il2CppBase() + 0x5052CA8))(this);
	}

};

}
