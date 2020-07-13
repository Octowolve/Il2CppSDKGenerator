#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker {

class FsmOwnerDefault
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "HutongGames.PlayMaker", "FsmOwnerDefault"));
	}

	template <typename T = uintptr_t> T& ownerOption() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_OwnerOption() {
		return ((T (*)(FsmOwnerDefault*))(Il2CppBase() + 0x2EDC508))(this);
	}
	template <typename T = void> T set_OwnerOption(uintptr_t value) {
		return ((T (*)(FsmOwnerDefault*, uintptr_t))(Il2CppBase() + 0x2EE0734))(this, value);
	}
	template <typename T = uintptr_t> T get_GameObject() {
		return ((T (*)(FsmOwnerDefault*))(Il2CppBase() + 0x2EDC3D0))(this);
	}
	template <typename T = void> T set_GameObject(uintptr_t value) {
		return ((T (*)(FsmOwnerDefault*, uintptr_t))(Il2CppBase() + 0x2EDC3D8))(this, value);
	}

};

}
