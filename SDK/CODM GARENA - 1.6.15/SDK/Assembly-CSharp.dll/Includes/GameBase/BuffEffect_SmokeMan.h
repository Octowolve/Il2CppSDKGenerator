#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectSmokeMan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_SmokeMan"));
	}

	template <typename T = bool> T& m_HasApplyEffect() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& m_bOldTestEffectFlag() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = float> T& m_fCurrTickTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_IntervalTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyPropertySet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanSeeSmokeIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanBeSeenCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasObstruct() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddTestEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveTestEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTestEffectFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C3F4C4))(this);
	}
	template <typename T = void> T ApplyPropertySet() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C3F5D4))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C400D4))(this);
	}
	template <typename T = bool> T CanSeeSmokeIn() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C3F744))(this);
	}
	template <typename T = bool> T IsCanBeSeenCondition() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C409AC))(this);
	}
	template <typename T = bool> T HasObstruct() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C40368))(this);
	}
	template <typename T = bool> T IsFriend() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C3FAF8))(this);
	}
	template <typename T = void> T AddTestEffect(bool isFriend) {
		return ((T (*)(BuffEffectSmokeMan*, bool))(Il2CppBase() + 0x3C40B64))(this, isFriend);
	}
	template <typename T = void> T RemoveTestEffect() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C40EEC))(this);
	}
	template <typename T = void> T AddEffect(bool isFriend) {
		return ((T (*)(BuffEffectSmokeMan*, bool))(Il2CppBase() + 0x3C3FC80))(this, isFriend);
	}
	template <typename T = void> T RemoveEffect() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C40228))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BuffEffectSmokeMan*, float))(Il2CppBase() + 0x3C4103C))(this, deltaTime);
	}
	template <typename T = void> T ChangeTestEffectFlag() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C411EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C41374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectSmokeMan*))(Il2CppBase() + 0x3C4137C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BuffEffectSmokeMan*, float))(Il2CppBase() + 0x3C41384))(this, P0);
	}

};

}
