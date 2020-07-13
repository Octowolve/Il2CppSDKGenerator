#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Explosion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Explosion"));
	}

	template <typename T = uintptr_t> T& center() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& force() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& radius() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& upwardsModifier() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& forceMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& layerMask() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& invertMask() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x4FCCBB4))(this);
	}
	template <typename T = void> T OnPreprocess() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x4FCCBE8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x4FCCC1C))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x4FCCE98))(this);
	}
	template <typename T = void> T DoExplosion() {
		return ((T (*)(Explosion*))(Il2CppBase() + 0x4FCCC48))(this);
	}
	template <typename T = bool> T ShouldApplyForce(uintptr_t go) {
		return ((T (*)(Explosion*, uintptr_t))(Il2CppBase() + 0x4FCCE9C))(this, go);
	}

};

}
