#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTrainingSkillTipsVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTrainingSkillTipsVolume"));
	}

	template <typename T = int32_t> T& m_ItemId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_NeedCheck() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_LastState() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = Il2CppString*> static T& m_KeyFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSkillItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T get_IsTickable() {
		return ((T (*)(BRTrainingSkillTipsVolume*))(Il2CppBase() + 0x2638F74))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRTrainingSkillTipsVolume*, uintptr_t))(Il2CppBase() + 0x2638F7C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRTrainingSkillTipsVolume*, uintptr_t))(Il2CppBase() + 0x26390F4))(this, other);
	}
	template <typename T = void> T Tick(float fDeltaTime) {
		return ((T (*)(BRTrainingSkillTipsVolume*, float))(Il2CppBase() + 0x263926C))(this, fDeltaTime);
	}
	template <typename T = bool> T CheckSkillItem() {
		return ((T (*)(BRTrainingSkillTipsVolume*))(Il2CppBase() + 0x2639658))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(BRTrainingSkillTipsVolume*, uintptr_t))(Il2CppBase() + 0x2639800))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(BRTrainingSkillTipsVolume*, uintptr_t))(Il2CppBase() + 0x2639808))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRTrainingSkillTipsVolume*, float))(Il2CppBase() + 0x2639810))(this, P0);
	}

};

}
