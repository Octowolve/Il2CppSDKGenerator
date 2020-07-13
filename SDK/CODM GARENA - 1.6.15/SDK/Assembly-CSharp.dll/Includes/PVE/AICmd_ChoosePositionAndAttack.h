#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdChoosePositionAndAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_ChoosePositionAndAttack"));
	}

	template <typename T = float> T& SecondsBetweenChangePosition() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& LastTimeChangePosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& TimeOutSecondsForAttack() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& EndWaitTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& ShouldCrouch() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init(uintptr_t param) {
		return ((T (*)(AICmdChoosePositionAndAttack*, uintptr_t))(Il2CppBase() + 0x4CE4D40))(this, param);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdChoosePositionAndAttack*))(Il2CppBase() + 0x4CE4E60))(this);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdChoosePositionAndAttack*))(Il2CppBase() + 0x4CE4F48))(this);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdChoosePositionAndAttack*))(Il2CppBase() + 0x4CE4FFC))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdChoosePositionAndAttack*, uintptr_t))(Il2CppBase() + 0x4CE516C))(this, newCmd);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdChoosePositionAndAttack*, Il2CppString*))(Il2CppBase() + 0x4CE5220))(this, oldCmdName);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdChoosePositionAndAttack*))(Il2CppBase() + 0x4CE52D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdChoosePositionAndAttack*))(Il2CppBase() + 0x4CE52DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdChoosePositionAndAttack*))(Il2CppBase() + 0x4CE52E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdChoosePositionAndAttack*, uintptr_t))(Il2CppBase() + 0x4CE52EC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdChoosePositionAndAttack*, Il2CppString*))(Il2CppBase() + 0x4CE52F4))(this, P0);
	}

};

}
