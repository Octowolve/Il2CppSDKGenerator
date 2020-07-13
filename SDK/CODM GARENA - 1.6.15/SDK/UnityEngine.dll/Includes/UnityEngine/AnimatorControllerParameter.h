#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimatorControllerParameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimatorControllerParameter"));
	}

	template <typename T = Il2CppString*> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_DefaultFloat() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_DefaultInt() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& m_DefaultBool() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(AnimatorControllerParameter*))(Il2CppBase() + 0x4697560))(this);
	}
	template <typename T = int32_t> T get_nameHash() {
		return ((T (*)(AnimatorControllerParameter*))(Il2CppBase() + 0x4697568))(this);
	}
	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(AnimatorControllerParameter*))(Il2CppBase() + 0x4697570))(this);
	}
	template <typename T = float> T get_defaultFloat() {
		return ((T (*)(AnimatorControllerParameter*))(Il2CppBase() + 0x4697578))(this);
	}
	template <typename T = int32_t> T get_defaultInt() {
		return ((T (*)(AnimatorControllerParameter*))(Il2CppBase() + 0x4697580))(this);
	}
	template <typename T = bool> T get_defaultBool() {
		return ((T (*)(AnimatorControllerParameter*))(Il2CppBase() + 0x4697588))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(AnimatorControllerParameter*, uintptr_t))(Il2CppBase() + 0x4697590))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(AnimatorControllerParameter*))(Il2CppBase() + 0x46976E0))(this);
	}

};

}
