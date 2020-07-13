#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class AddExplosionForce
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "AddExplosionForce"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& center() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& force() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& radius() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& upwardsModifier() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& forceMode() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AddExplosionForce*))(Il2CppBase() + 0x476C324))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(AddExplosionForce*))(Il2CppBase() + 0x476C3FC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(AddExplosionForce*))(Il2CppBase() + 0x476C430))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(AddExplosionForce*))(Il2CppBase() + 0x476C624))(this);
	}
	template <typename T = void> T DoAddExplosionForce() {
		return ((T (*)(AddExplosionForce*))(Il2CppBase() + 0x476C45C))(this);
	}

};

}
