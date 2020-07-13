#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class PropRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "RootMotion.Dynamics", "PropRoot"));
	}

	template <typename T = uintptr_t> T& puppetMaster() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& connectTo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& currentProp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& lastProp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& fixedUpdateCalled() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T OpenUserManual() {
		return ((T (*)(PropRoot*))(Il2CppBase() + 0x38BC208))(this);
	}
	template <typename T = void> T OpenScriptReference() {
		return ((T (*)(PropRoot*))(Il2CppBase() + 0x38BC28C))(this);
	}
	template <typename T = void> T DropImmediate() {
		return ((T (*)(PropRoot*))(Il2CppBase() + 0x38BC310))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PropRoot*))(Il2CppBase() + 0x38BC430))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PropRoot*))(Il2CppBase() + 0x38BC504))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(PropRoot*))(Il2CppBase() + 0x38BC6C0))(this);
	}
	template <typename T = void> T AttachProp(uintptr_t prop) {
		return ((T (*)(PropRoot*, uintptr_t))(Il2CppBase() + 0x38BC970))(this, prop);
	}

};

}
