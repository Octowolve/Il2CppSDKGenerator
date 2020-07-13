#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class Brand
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "Brand"));
	}

	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& Collider() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ImpactTrans() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& UpSound() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& DownSound() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& SoundBank() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& ShowSignboard() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& HitDown() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& Relife() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = bool> T& m_IsInUpState() {
		return *(T*)((uintptr_t)this + 0x8F);
	}
	template <typename T = int32_t> T& m_HitNum() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& m_HitNumMax() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_DelayPlayUp() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_Signboard() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = int32_t> T get_HitNum() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F34A40))(this);
	}
	template <typename T = int32_t> T get_HitNumMax() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F34A48))(this);
	}
	template <typename T = void> T set_HitNumMax(int32_t value) {
		return ((T (*)(Brand*, int32_t))(Il2CppBase() + 0x4F34A50))(this, value);
	}
	template <typename T = bool> T get_IsAlive() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F34B48))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F34B50))(this);
	}
	template <typename T = void> T DelayPlayUp() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F34D68))(this);
	}
	template <typename T = void> T PlayUp() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F34D84))(this);
	}
	template <typename T = void> T PlayDown() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F35170))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(Brand*))(Il2CppBase() + 0x4F354C4))(this);
	}
	template <typename T = void> T TakeDamage(uintptr_t info) {
		return ((T (*)(Brand*, uintptr_t))(Il2CppBase() + 0x4F354DC))(this, info);
	}

};

}
