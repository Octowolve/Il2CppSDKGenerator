#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZMGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZMGameInfo"));
	}

	template <typename T = bool> T& bFightingBoss() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = void*> T& OnBossShow() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = void*> T& OnBossClear() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = int32_t> T& m_CurrentTaskIdx() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = int32_t> T& m_CurrentTaskFinishLeft() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& m_NextTaskBeginTime() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& m_EndGameTime() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = float> T& LastInteractiveTime() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uint32_t> T& m_EggMark() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInBossFighting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_OnBossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_OnBossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_add_OnBossClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_remove_OnBossClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBossShowCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterBossClearCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterBossShowCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnregisterBossClearCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BossShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BossClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SyncGameInfoProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RespawnAfterDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAIPawnNumberChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZombieNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T IsInBossFighting() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x405EF60))(this);
	}
	template <typename T = void> T add_OnBossShow(void* value) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F008))(this, value);
	}
	template <typename T = void> T remove_OnBossShow(void* value) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F200))(this, value);
	}
	template <typename T = void> T add_OnBossClear(void* value) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F3F8))(this, value);
	}
	template <typename T = void> T remove_OnBossClear(void* value) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F5F0))(this, value);
	}
	template <typename T = void> T RegisterBossShowCallBack(void* callback) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F7E8))(this, callback);
	}
	template <typename T = void> T RegisterBossClearCallBack(void* callback) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F898))(this, callback);
	}
	template <typename T = void> T UnregisterBossShowCallBack(void* callback) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F948))(this, callback);
	}
	template <typename T = void> T UnregisterBossClearCallBack(void* callback) {
		return ((T (*)(ZMGameInfo*, void*))(Il2CppBase() + 0x405F9F8))(this, callback);
	}
	template <typename T = void> T BossShow(uintptr_t pawn) {
		return ((T (*)(ZMGameInfo*, uintptr_t))(Il2CppBase() + 0x405FAA8))(this, pawn);
	}
	template <typename T = void> T BossClear(uintptr_t pawn) {
		return ((T (*)(ZMGameInfo*, uintptr_t))(Il2CppBase() + 0x405FBDC))(this, pawn);
	}
	template <typename T = int32_t> T get_CurrentTaskIdx() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x405FD10))(this);
	}
	template <typename T = void> T set_CurrentTaskIdx(int32_t value) {
		return ((T (*)(ZMGameInfo*, int32_t))(Il2CppBase() + 0x405FD18))(this, value);
	}
	template <typename T = int32_t> T get_CurrentTaskFinishLeft() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x405FD20))(this);
	}
	template <typename T = void> T set_CurrentTaskFinishLeft(int32_t value) {
		return ((T (*)(ZMGameInfo*, int32_t))(Il2CppBase() + 0x405FD28))(this, value);
	}
	template <typename T = int32_t> T get_NextTaskBeginTime() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x405FD30))(this);
	}
	template <typename T = void> T set_NextTaskBeginTime(int32_t value) {
		return ((T (*)(ZMGameInfo*, int32_t))(Il2CppBase() + 0x405FD38))(this, value);
	}
	template <typename T = int32_t> T get_EndGameTime() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x405FD40))(this);
	}
	template <typename T = void> T set_EndGameTime(int32_t value) {
		return ((T (*)(ZMGameInfo*, int32_t))(Il2CppBase() + 0x405FD48))(this, value);
	}
	template <typename T = float> T get_LastInteractiveTime() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x405FD50))(this);
	}
	template <typename T = void> T set_LastInteractiveTime(float value) {
		return ((T (*)(ZMGameInfo*, float))(Il2CppBase() + 0x405FD58))(this, value);
	}
	template <typename T = uint32_t> T get_EggMark() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x405FD60))(this);
	}
	template <typename T = void> T set_EggMark(uint32_t value) {
		return ((T (*)(ZMGameInfo*, uint32_t))(Il2CppBase() + 0x405FD68))(this, value);
	}
	template <typename T = void> T SyncGameInfoProperty(uint32_t propertyID, uint32_t value, uintptr_t varType) {
		return ((T (*)(ZMGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x405FE20))(this, propertyID, value, varType);
	}
	template <typename T = bool> T RespawnAfterDead() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x4060250))(this);
	}
	template <typename T = void> T OnAIPawnNumberChanged() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x40602F0))(this);
	}
	template <typename T = void> T GetZombieNum(uintptr_t normalZombie, uintptr_t eliteZombie) {
		return ((T (*)(ZMGameInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40606F8))(this, normalZombie, eliteZombie);
	}
	template <typename T = void> T xLuaBaseProxy_SyncGameInfoProperty(uint32_t P0, uint32_t P1, uintptr_t P2) {
		return ((T (*)(ZMGameInfo*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4060BA8))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_RespawnAfterDead() {
		return ((T (*)(ZMGameInfo*))(Il2CppBase() + 0x4060BC8))(this);
	}

};

}
