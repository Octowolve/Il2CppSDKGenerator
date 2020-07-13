#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class HardPointManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "HardPointManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_HardPointList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CurHardPoint() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CurHPAreaInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_MatchTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddHardPointArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHardPointArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllHardPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurHardPointInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsStopMatchTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_CurHardPoint() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402A708))(this);
	}
	template <typename T = uintptr_t> T get_CurHPAreaInfo() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402A710))(this);
	}
	template <typename T = int32_t> T get_MatchTime() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402A718))(this);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(HardPointManager*, uintptr_t))(Il2CppBase() + 0x402A720))(this, levelObject);
	}
	template <typename T = void> T AddHardPointArea(uintptr_t area) {
		return ((T (*)(HardPointManager*, uintptr_t))(Il2CppBase() + 0x402A878))(this, area);
	}
	template <typename T = uintptr_t> T GetHardPointArea(int32_t areaID) {
		return ((T (*)(HardPointManager*, int32_t))(Il2CppBase() + 0x402A990))(this, areaID);
	}
	template <typename T = void> T RemoveAllHardPoint() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402AB84))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402AC58))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402AD08))(this);
	}
	template <typename T = void> T SetCurHardPointInfo(int32_t areaID, uintptr_t state, int32_t occupyTime, int32_t matchTime) {
		return ((T (*)(HardPointManager*, int32_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x402AE48))(this, areaID, state, occupyTime, matchTime);
	}
	template <typename T = bool> T IsStopMatchTime() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402B4D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(HardPointManager*, uintptr_t))(Il2CppBase() + 0x402B59C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnExitMatch() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402B5A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(HardPointManager*))(Il2CppBase() + 0x402B5AC))(this);
	}

};

}
