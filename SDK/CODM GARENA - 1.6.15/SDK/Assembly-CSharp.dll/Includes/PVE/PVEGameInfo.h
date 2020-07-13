#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEGameInfo"));
	}

	template <typename T = uintptr_t> T& m_LevelHardness() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_FireWallInfo() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanZombieChooseThisTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInitWeightForTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentTargetList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPVEGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddFireArea_Wall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanTriggerKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowKnife() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInAssistAimRotateTimeAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_LevelHardness() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438DD10))(this);
	}
	template <typename T = void> T set_LevelHardness(uintptr_t value) {
		return ((T (*)(PVEGameInfo*, uintptr_t))(Il2CppBase() + 0x438DD18))(this, value);
	}
	template <typename T = bool> T get_ShouldDisableAimAssistance() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438DD20))(this);
	}
	template <typename T = bool> T get_CanUseULTSkill() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438DD28))(this);
	}
	template <typename T = uintptr_t> T get_FireWallInfo() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438DD30))(this);
	}
	template <typename T = bool> T CanZombieChooseThisTarget(uintptr_t zombie, uintptr_t target) {
		return ((T (*)(PVEGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x438DD38))(this, zombie, target);
	}
	template <typename T = float> T GetInitWeightForTarget(uintptr_t zombie, uintptr_t target) {
		return ((T (*)(PVEGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x438DDF8))(this, zombie, target);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurrentTargetList() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438DEB8))(this);
	}
	template <typename T = bool> T IsPVEGame() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E008))(this);
	}
	template <typename T = void> T OnExitMatch() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E0A8))(this);
	}
	template <typename T = void> T AddFireArea_Wall(uint32_t id, float createTime, Il2CppVector3 startPoint, Il2CppVector3 endPoint, float duration, int32_t rotationY, Il2CppVector3 extent) {
		return ((T (*)(PVEGameInfo*, uint32_t, float, Il2CppVector3, Il2CppVector3, float, int32_t, Il2CppVector3))(Il2CppBase() + 0x438C984))(this, id, createTime, startPoint, endPoint, duration, rotationY, extent);
	}
	template <typename T = bool> T IsCanTriggerKnife() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E420))(this);
	}
	template <typename T = bool> T IsShowKnife() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E4C0))(this);
	}
	template <typename T = bool> T IsInAssistAimRotateTimeAiming() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E684))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsPVEGame() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E80C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnExitMatch() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E814))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCanTriggerKnife() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E81C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowKnife() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E824))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsInAssistAimRotateTimeAiming() {
		return ((T (*)(PVEGameInfo*))(Il2CppBase() + 0x438E82C))(this);
	}

};

}
