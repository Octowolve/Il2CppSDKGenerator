#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LimitLocalPlayerRotationAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LimitLocalPlayerRotationAction"));
	}

	template <typename T = uintptr_t> T& m_AllowLimitX() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_LimitXRotation() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_AllowLimitY() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_LimitYRotation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_LockYRotation() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_StoreXRotation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_StoreYRotation() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Restore() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(LimitLocalPlayerRotationAction*))(Il2CppBase() + 0x4D75278))(this);
	}

};

}
