#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class HelicopterPawnMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "HelicopterPawnMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_HelicopterPawnMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<uint32_t, int32_t>*> T& m_HelicopterPosYOffsetIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_PosYOffsetScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_PosYOffsetIndex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& CreateCallBack() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& DestoryCallBack() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateHelicopterPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreateHelicopterPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnActorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHelicopterPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllHelicopterPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveHelicopterPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RemoveHelicopterPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadCreated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerHadHelicopter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosYOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPosYOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePosYOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_HelicopterPawnMap() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EE8C18))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EE8C20))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EE9080))(this);
	}
	template <typename T = bool> T CreateHelicopterPawn(uintptr_t msg) {
		return ((T (*)(HelicopterPawnMgr*, uintptr_t))(Il2CppBase() + 0x1EE917C))(this, msg);
	}
	template <typename T = bool> T CreateHelicopterPawn_1(Il2CppVector3 pos, Il2CppQuaternion rotation, uintptr_t camp, uint32_t playerID, uint32_t actorID, uint32_t HelicopterID, unsigned char lifeTime, Il2CppVector3 DstPos) {
		return ((T (*)(HelicopterPawnMgr*, Il2CppVector3, Il2CppQuaternion, uintptr_t, uint32_t, uint32_t, uint32_t, unsigned char, Il2CppVector3))(Il2CppBase() + 0x1EE9404))(this, pos, rotation, camp, playerID, actorID, HelicopterID, lifeTime, DstPos);
	}
	template <typename T = uintptr_t> T GetPawnActorType() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EE9B54))(this);
	}
	template <typename T = uintptr_t> T Find(uint32_t actorID) {
		return ((T (*)(HelicopterPawnMgr*, uint32_t))(Il2CppBase() + 0x1EEA0F0))(this, actorID);
	}
	template <typename T = void> T UpdateHelicopterPawnInfo(uintptr_t msg) {
		return ((T (*)(HelicopterPawnMgr*, uintptr_t))(Il2CppBase() + 0x1EEA214))(this, msg);
	}
	template <typename T = void> T RemoveAllHelicopterPawn() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EE8CC4))(this);
	}
	template <typename T = void> T RemoveHelicopterPawn(uintptr_t msg) {
		return ((T (*)(HelicopterPawnMgr*, uintptr_t))(Il2CppBase() + 0x1EEA430))(this, msg);
	}
	template <typename T = void> T RemoveHelicopterPawn_1(uint32_t actorID, float lifeTime) {
		return ((T (*)(HelicopterPawnMgr*, uint32_t, float))(Il2CppBase() + 0x1EEB20C))(this, actorID, lifeTime);
	}
	template <typename T = bool> T HadCreated(uint32_t actorID) {
		return ((T (*)(HelicopterPawnMgr*, uint32_t))(Il2CppBase() + 0x1EEB49C))(this, actorID);
	}
	template <typename T = bool> T PlayerHadHelicopter(uint32_t playerID) {
		return ((T (*)(HelicopterPawnMgr*, uint32_t))(Il2CppBase() + 0x1EEB578))(this, playerID);
	}
	template <typename T = float> T GetPosYOffset() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EEB854))(this);
	}
	template <typename T = void> T AddPosYOffset(uint32_t actorID) {
		return ((T (*)(HelicopterPawnMgr*, uint32_t))(Il2CppBase() + 0x1EE9F48))(this, actorID);
	}
	template <typename T = void> T RemovePosYOffset(uint32_t actorID) {
		return ((T (*)(HelicopterPawnMgr*, uint32_t))(Il2CppBase() + 0x1EEB0B4))(this, actorID);
	}
	template <typename T = void> static T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x1EEB904))(0, actorID);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EEBA58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(HelicopterPawnMgr*))(Il2CppBase() + 0x1EEBA60))(this);
	}

};

}
