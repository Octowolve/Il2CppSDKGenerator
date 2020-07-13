#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class InvokeMethod
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "InvokeMethod"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& behaviour() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& methodName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& delay() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& repeating() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& repeatDelay() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& cancelOnExit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& component() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(InvokeMethod*))(Il2CppBase() + 0x4F0A2D8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(InvokeMethod*))(Il2CppBase() + 0x4F0A3E8))(this);
	}
	template <typename T = void> T DoInvokeMethod(uintptr_t go) {
		return ((T (*)(InvokeMethod*, uintptr_t))(Il2CppBase() + 0x4F0A438))(this, go);
	}
	template <typename T = void> T OnExit() {
		return ((T (*)(InvokeMethod*))(Il2CppBase() + 0x4F0A788))(this);
	}

};

}
