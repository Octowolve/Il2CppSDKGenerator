#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AttackableTargetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AttackableTargetInfo"));
	}

	template <typename T = int32_t> T& m_MaxHp_H_Cache() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_Hp_H_Cache() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& DEFINE_MAX_HP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& m_ActorID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_Health() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_MaxHealth() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_EventProcessor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInfoEventType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uint32_t> T get_ActorID() {
		return ((T (*)(AttackableTargetInfo*))(Il2CppBase() + 0x35D17D8))(this);
	}
	template <typename T = float> T get_Health() {
		return ((T (*)(AttackableTargetInfo*))(Il2CppBase() + 0x35D17E0))(this);
	}
	template <typename T = void> T set_Health(float value) {
		return ((T (*)(AttackableTargetInfo*, float))(Il2CppBase() + 0x35D17E8))(this, value);
	}
	template <typename T = float> T get_MaxHealth() {
		return ((T (*)(AttackableTargetInfo*))(Il2CppBase() + 0x35D1858))(this);
	}
	template <typename T = void> T set_MaxHealth(float value) {
		return ((T (*)(AttackableTargetInfo*, float))(Il2CppBase() + 0x35D1860))(this, value);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(AttackableTargetInfo*))(Il2CppBase() + 0x35D1880))(this);
	}
	template <typename T = void> T set_Camp(uintptr_t value) {
		return ((T (*)(AttackableTargetInfo*, uintptr_t))(Il2CppBase() + 0x35D1888))(this, value);
	}
	template <typename T = uintptr_t> T get_EventProcessor() {
		return ((T (*)(AttackableTargetInfo*))(Il2CppBase() + 0x35D1890))(this);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(AttackableTargetInfo*))(Il2CppBase() + 0x35D1898))(this);
	}
	template <typename T = uintptr_t> T GetInfoEventType() {
		return ((T (*)(AttackableTargetInfo*))(Il2CppBase() + 0x35D1B4C))(this);
	}

};

}
