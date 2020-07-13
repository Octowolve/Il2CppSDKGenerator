#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class BuffEffectEnemyBodyScan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "BuffEffect_EnemyBodyScan"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerEffectOverImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessTargetEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T TriggerEffectImpl() {
		return ((T (*)(BuffEffectEnemyBodyScan*))(Il2CppBase() + 0x37590D0))(this);
	}
	template <typename T = void> T TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectEnemyBodyScan*))(Il2CppBase() + 0x3759174))(this);
	}
	template <typename T = void> T ProcessTargetEvent(uintptr_t msg) {
		return ((T (*)(BuffEffectEnemyBodyScan*, uintptr_t))(Il2CppBase() + 0x3759218))(this, msg);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectImpl() {
		return ((T (*)(BuffEffectEnemyBodyScan*))(Il2CppBase() + 0x3759634))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TriggerEffectOverImpl() {
		return ((T (*)(BuffEffectEnemyBodyScan*))(Il2CppBase() + 0x3759638))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ProcessTargetEvent(uintptr_t P0) {
		return ((T (*)(BuffEffectEnemyBodyScan*, uintptr_t))(Il2CppBase() + 0x375963C))(this, P0);
	}

};

}
