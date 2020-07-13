#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimTriggerAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimTriggerAction"));
	}

	template <typename T = uintptr_t> T& m_Clip() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_IsBeginPlayTrigger() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsStopPlayTrigger() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = uintptr_t> T& m_PlayMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_PlaySpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerPlayStateIsBeginTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerStop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_Clip() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65884))(this);
	}
	template <typename T = void> T set_Clip(uintptr_t value) {
		return ((T (*)(AnimTriggerAction*, uintptr_t))(Il2CppBase() + 0x2B6588C))(this, value);
	}
	template <typename T = void> T SetClip(uintptr_t Clip) {
		return ((T (*)(AnimTriggerAction*, uintptr_t))(Il2CppBase() + 0x2B6594C))(this, Clip);
	}
	template <typename T = void> T TriggerPlay(float speed) {
		return ((T (*)(AnimTriggerAction*, float))(Il2CppBase() + 0x2B659F4))(this, speed);
	}
	template <typename T = bool> T TriggerPlayStateIsBeginTrigger() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65AB0))(this);
	}
	template <typename T = bool> T get_IsTriggerPlay() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65B58))(this);
	}
	template <typename T = bool> T get_IsTriggerStop() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65B6C))(this);
	}
	template <typename T = void> T TriggerStop() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65B80))(this);
	}
	template <typename T = uintptr_t> T get_PlayMode() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65C24))(this);
	}
	template <typename T = void> T set_PlayMode(uintptr_t value) {
		return ((T (*)(AnimTriggerAction*, uintptr_t))(Il2CppBase() + 0x2B65C2C))(this, value);
	}
	template <typename T = float> T get_PlaySpeed() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65C34))(this);
	}
	template <typename T = void> T set_PlaySpeed(float value) {
		return ((T (*)(AnimTriggerAction*, float))(Il2CppBase() + 0x2B65AA8))(this, value);
	}
	template <typename T = void> T ResetTrigger() {
		return ((T (*)(AnimTriggerAction*))(Il2CppBase() + 0x2B65C3C))(this);
	}

};

}
