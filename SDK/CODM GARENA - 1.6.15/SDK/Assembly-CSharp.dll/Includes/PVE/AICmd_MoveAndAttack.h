#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdMoveAndAttack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_MoveAndAttack"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(AICmdMoveAndAttack*, float))(Il2CppBase() + 0x4CEC104))(this, deltaTime);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdMoveAndAttack*))(Il2CppBase() + 0x4CEC1CC))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdMoveAndAttack*, uintptr_t))(Il2CppBase() + 0x4CEC2B4))(this, newCmd);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(AICmdMoveAndAttack*, float))(Il2CppBase() + 0x4CEC37C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdMoveAndAttack*))(Il2CppBase() + 0x4CEC384))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdMoveAndAttack*, uintptr_t))(Il2CppBase() + 0x4CEC38C))(this, P0);
	}

};

}
