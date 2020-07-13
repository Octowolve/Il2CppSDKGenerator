#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTreasureMapMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTreasureMapMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ActiveGoldInfoMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ActiveGoldActorMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& m_HandleMap() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_BRGame() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<uint32_t, Il2CppVector3>*> T& m_DirTip() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_MapTip() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_MineTipMap() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_TimerModule() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> static T& EnableTreasureLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppDictionary<uint32_t, Il2CppVector3>*> T get_DirTip() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x2639D50))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_MapTip() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x2639D58))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_MineTipMap() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x2639D60))(this);
	}
	template <typename T = void> static T TreasureLog(uintptr_t logType, Il2CppString* msg, Il2CppArray<uintptr_t>* paras) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2639D68))(0, logType, msg, paras);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x2639E84))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRTreasureMapMgr*, float))(Il2CppBase() + 0x2639F40))(this, deltaTime);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x2639F78))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x263A468))(this);
	}
	template <typename T = bool> T IsActive(uint32_t actorId) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t))(Il2CppBase() + 0x263A970))(this, actorId);
	}
	template <typename T = uintptr_t> T GetLuaActor(uint32_t actorId) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t))(Il2CppBase() + 0x263AA50))(this, actorId);
	}
	template <typename T = void> T AddTreasurePoint(uintptr_t info, uintptr_t luaActor) {
		return ((T (*)(BRTreasureMapMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x263AB74))(this, info, luaActor);
	}
	template <typename T = void> T AllocateMinePoint(uint32_t actorId, uint32_t playerId) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t, uint32_t))(Il2CppBase() + 0x263AD98))(this, actorId, playerId);
	}
	template <typename T = void> T DugMinePoint(uint32_t actorId, uint32_t playerId) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t, uint32_t))(Il2CppBase() + 0x263BA50))(this, actorId, playerId);
	}
	template <typename T = void> T ActiveTreasure(uint32_t playerId) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t))(Il2CppBase() + 0x263C628))(this, playerId);
	}
	template <typename T = void> T UnActiveTreasure(uint32_t actorId, uint32_t playerId) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t, uint32_t))(Il2CppBase() + 0x263C054))(this, actorId, playerId);
	}
	template <typename T = void> T GetMapLimitTip() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x263C830))(this);
	}
	template <typename T = void> T GetMapNoneTip() {
		return ((T (*)(BRTreasureMapMgr*))(Il2CppBase() + 0x263C92C))(this);
	}
	template <typename T = void> T MineActiveEffect(uint32_t actorId, bool state) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t, bool))(Il2CppBase() + 0x263B6B4))(this, actorId, state);
	}
	template <typename T = void> T CreateMineTip(uint32_t actorId, Il2CppVector3 pos) {
		return ((T (*)(BRTreasureMapMgr*, uint32_t, Il2CppVector3))(Il2CppBase() + 0x263B7A4))(this, actorId, pos);
	}

};

}
