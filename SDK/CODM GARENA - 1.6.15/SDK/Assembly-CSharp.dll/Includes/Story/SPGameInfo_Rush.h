#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class SPGameInfoRush
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "SPGameInfo_Rush"));
	}

	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& m_CurrentTargetNum() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = int32_t> T& m_TotalTargetNum() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& m_IsFirstTick() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& m_RushTarget() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRadarCompAssetIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRushTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEndGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrepareModeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_TotalTime() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F12E6C))(this);
	}
	template <typename T = int32_t> T get_CurrentTargetNum() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F12E7C))(this);
	}
	template <typename T = int32_t> T get_TotalTargetNum() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F12E84))(this);
	}
	template <typename T = uintptr_t> T get_RushTarget() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F12E8C))(this);
	}
	template <typename T = bool> T get_ShowEnemyOnRadar() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F12E94))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRadarCompAssetIDList() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F12E9C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F12FD0))(this);
	}
	template <typename T = void> T SetRushTarget(uintptr_t rushTarget) {
		return ((T (*)(SPGameInfoRush*, uintptr_t))(Il2CppBase() + 0x3F13194))(this, rushTarget);
	}
	template <typename T = void> T UpdateTargetProgress(int32_t currentNum, int32_t totalNum) {
		return ((T (*)(SPGameInfoRush*, int32_t, int32_t))(Il2CppBase() + 0x3F1323C))(this, currentNum, totalNum);
	}
	template <typename T = bool> T CheckEndGame() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13300))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13524))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SPGameInfoRush*, float))(Il2CppBase() + 0x3F13958))(this, deltaTime);
	}
	template <typename T = Il2CppString*> T GetPrepareModeInfo() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13C28))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T xLuaBaseProxy_GetRadarCompAssetIDList() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13D70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13D78))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CheckEndGame() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13D80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13F2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SPGameInfoRush*, float))(Il2CppBase() + 0x3F13F30))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetPrepareModeInfo() {
		return ((T (*)(SPGameInfoRush*))(Il2CppBase() + 0x3F13F34))(this);
	}

};

}
