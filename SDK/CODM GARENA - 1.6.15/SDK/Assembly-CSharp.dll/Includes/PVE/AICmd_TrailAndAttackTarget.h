#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdTrailAndAttackTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_TrailAndAttackTarget"));
	}

	template <typename T = uintptr_t> T& m_DesiredTarget() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_DistToLostTarget() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldLostTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveToTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldContinueAttacking() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAttack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdTrailAndAttackTarget*, uintptr_t))(Il2CppBase() + 0x4CF3EAC))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF4010))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF413C))(this);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdTrailAndAttackTarget*, Il2CppString*))(Il2CppBase() + 0x4CF4220))(this, oldCmdName);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdTrailAndAttackTarget*, uintptr_t))(Il2CppBase() + 0x4CF4454))(this, newCmd);
	}
	template <typename T = bool> T ShouldLostTarget() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF4528))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF465C))(this);
	}
	template <typename T = void> T MoveToTarget() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF42F0))(this);
	}
	template <typename T = bool> T ShouldContinueAttacking() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF4744))(this);
	}
	template <typename T = void> T OnAttack() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF47E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF487C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF4884))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdTrailAndAttackTarget*, Il2CppString*))(Il2CppBase() + 0x4CF488C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdTrailAndAttackTarget*, uintptr_t))(Il2CppBase() + 0x4CF4894))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdTrailAndAttackTarget*))(Il2CppBase() + 0x4CF489C))(this);
	}

};

}
