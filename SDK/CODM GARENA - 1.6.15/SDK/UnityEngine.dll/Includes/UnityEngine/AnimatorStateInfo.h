#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimatorStateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimatorStateInfo"));
	}

	template <typename T = int32_t> T& m_Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_Path() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& m_FullPath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_NormalizedTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_Length() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Speed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_SpeedMultiplier() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_Tag() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_Loop() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_inTransition() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& m_transtionNomalizeTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_transitionDuration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = bool> T IsName(Il2CppString* name) {
		return ((T (*)(AnimatorStateInfo*, Il2CppString*))(Il2CppBase() + 0x4698324))(this, name);
	}
	template <typename T = int32_t> T get_fullPathHash() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x469836C))(this);
	}
	template <typename T = int32_t> T get_nameHash() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x4698374))(this);
	}
	template <typename T = int32_t> T get_shortNameHash() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x4698384))(this);
	}
	template <typename T = float> T get_normalizedTime() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x4698394))(this);
	}
	template <typename T = float> T get_length() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x46983A4))(this);
	}
	template <typename T = float> T get_speed() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x46983B4))(this);
	}
	template <typename T = float> T get_speedMultiplier() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x46983BC))(this);
	}
	template <typename T = int32_t> T get_tagHash() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x46983CC))(this);
	}
	template <typename T = bool> T IsTag(Il2CppString* tag) {
		return ((T (*)(AnimatorStateInfo*, Il2CppString*))(Il2CppBase() + 0x46983FC))(this, tag);
	}
	template <typename T = bool> T get_loop() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x4698434))(this);
	}
	template <typename T = bool> T get_inTransition() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x469844C))(this);
	}
	template <typename T = float> T get_transtionNomalizeTime() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x469845C))(this);
	}
	template <typename T = float> T get_transitionDuration() {
		return ((T (*)(AnimatorStateInfo*))(Il2CppBase() + 0x469846C))(this);
	}

};

}
