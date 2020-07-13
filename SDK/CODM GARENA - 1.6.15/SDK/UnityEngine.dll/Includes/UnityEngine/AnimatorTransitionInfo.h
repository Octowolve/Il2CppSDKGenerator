#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimatorTransitionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimatorTransitionInfo"));
	}

	template <typename T = int32_t> T& m_FullPath() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_UserName() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_NormalizedTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_AnyState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_TransitionType() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T IsName(Il2CppString* name) {
		return ((T (*)(AnimatorTransitionInfo*, Il2CppString*))(Il2CppBase() + 0x4698530))(this, name);
	}
	template <typename T = bool> T IsUserName(Il2CppString* name) {
		return ((T (*)(AnimatorTransitionInfo*, Il2CppString*))(Il2CppBase() + 0x4698560))(this, name);
	}
	template <typename T = int32_t> T get_fullPathHash() {
		return ((T (*)(AnimatorTransitionInfo*))(Il2CppBase() + 0x4698590))(this);
	}
	template <typename T = int32_t> T get_nameHash() {
		return ((T (*)(AnimatorTransitionInfo*))(Il2CppBase() + 0x46985A0))(this);
	}
	template <typename T = int32_t> T get_userNameHash() {
		return ((T (*)(AnimatorTransitionInfo*))(Il2CppBase() + 0x46985B0))(this);
	}
	template <typename T = float> T get_normalizedTime() {
		return ((T (*)(AnimatorTransitionInfo*))(Il2CppBase() + 0x46985C0))(this);
	}
	template <typename T = bool> T get_anyState() {
		return ((T (*)(AnimatorTransitionInfo*))(Il2CppBase() + 0x46985D0))(this);
	}
	template <typename T = bool> T get_entry() {
		return ((T (*)(AnimatorTransitionInfo*))(Il2CppBase() + 0x46985D8))(this);
	}
	template <typename T = bool> T get_exit() {
		return ((T (*)(AnimatorTransitionInfo*))(Il2CppBase() + 0x46985E8))(this);
	}

};

}
