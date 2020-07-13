#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RootMotion.Dynamics {

class RagdollEditor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RootMotion.Dynamics", "RagdollEditor"));
	}

	template <typename T = uintptr_t> T& selectedRigidbody() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& selectedCollider() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& symmetry() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T OpenUserManual() {
		return ((T (*)(RagdollEditor*))(Il2CppBase() + 0x41412F8))(this);
	}
	template <typename T = void> T OpenScriptReference() {
		return ((T (*)(RagdollEditor*))(Il2CppBase() + 0x414137C))(this);
	}
	template <typename T = void> T OpenTutorial() {
		return ((T (*)(RagdollEditor*))(Il2CppBase() + 0x4141400))(this);
	}

};

}
