#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdSearchOnSpots
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_SearchOnSpots"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_MovingGoals() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_CurrentMoveGoal() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_DestOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_NextGoalIdx() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Popped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Paused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resumed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasReachedDestination() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdSearchOnSpots*, uintptr_t))(Il2CppBase() + 0x4CF187C))(this, inParam);
	}
	template <typename T = void> T Popped() {
		return ((T (*)(AICmdSearchOnSpots*))(Il2CppBase() + 0x4CF1980))(this);
	}
	template <typename T = void> T Paused(uintptr_t newCmd) {
		return ((T (*)(AICmdSearchOnSpots*, uintptr_t))(Il2CppBase() + 0x4CF1A4C))(this, newCmd);
	}
	template <typename T = void> T Resumed(Il2CppString* oldCmdName) {
		return ((T (*)(AICmdSearchOnSpots*, Il2CppString*))(Il2CppBase() + 0x4CF1B24))(this, oldCmdName);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdSearchOnSpots*))(Il2CppBase() + 0x4CF1BE0))(this);
	}
	template <typename T = Il2CppVector3> T GetNextDestination() {
		return ((T (*)(AICmdSearchOnSpots*))(Il2CppBase() + 0x4CF1CC8))(this);
	}
	template <typename T = bool> T HasReachedDestination() {
		return ((T (*)(AICmdSearchOnSpots*))(Il2CppBase() + 0x4CF1E14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Popped() {
		return ((T (*)(AICmdSearchOnSpots*))(Il2CppBase() + 0x4CF1F9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Paused(uintptr_t P0) {
		return ((T (*)(AICmdSearchOnSpots*, uintptr_t))(Il2CppBase() + 0x4CF1FA4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Resumed(Il2CppString* P0) {
		return ((T (*)(AICmdSearchOnSpots*, Il2CppString*))(Il2CppBase() + 0x4CF1FAC))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdSearchOnSpots*))(Il2CppBase() + 0x4CF1FB4))(this);
	}

};

}
