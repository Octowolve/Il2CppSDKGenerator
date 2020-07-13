#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class VTOLPawnMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "VTOLPawnMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_VTOLPawnMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateVTOLPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVTOLPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveVTOLPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RemoveVTOLPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveVTOLPawnForReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllVTOLPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HadCreated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerVTOL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerHadVTOL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_VTOLPawnMap() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF2528))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF2530))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF2B94))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF2C38))(this);
	}
	template <typename T = void> T CreateVTOLPawn(Il2CppVector3 pos, Il2CppQuaternion rotation, uintptr_t camp, uint32_t ownerPlayerID, uint32_t actorID, uint32_t VTOLPawnID, uintptr_t ViewType, unsigned char lifeTime, Il2CppVector3 DstPos) {
		return ((T (*)(VTOLPawnMgr*, Il2CppVector3, Il2CppQuaternion, uintptr_t, uint32_t, uint32_t, uint32_t, uintptr_t, unsigned char, Il2CppVector3))(Il2CppBase() + 0x1BF2D00))(this, pos, rotation, camp, ownerPlayerID, actorID, VTOLPawnID, ViewType, lifeTime, DstPos);
	}
	template <typename T = void> T UpdateVTOLPawnInfo(uintptr_t msg) {
		return ((T (*)(VTOLPawnMgr*, uintptr_t))(Il2CppBase() + 0x1BF3798))(this, msg);
	}
	template <typename T = void> T RemoveVTOLPawn(uintptr_t msg) {
		return ((T (*)(VTOLPawnMgr*, uintptr_t))(Il2CppBase() + 0x1BF3D18))(this, msg);
	}
	template <typename T = void> T RemoveVTOLPawn_1(uint32_t actorID, float lifeTime) {
		return ((T (*)(VTOLPawnMgr*, uint32_t, float))(Il2CppBase() + 0x1BF4958))(this, actorID, lifeTime);
	}
	template <typename T = void> T RemoveVTOLPawnForReplay(uint32_t actorID) {
		return ((T (*)(VTOLPawnMgr*, uint32_t))(Il2CppBase() + 0x1BF4BF0))(this, actorID);
	}
	template <typename T = void> T RemoveAllVTOLPawn() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF25D4))(this);
	}
	template <typename T = uintptr_t> T Find(uint32_t actorID) {
		return ((T (*)(VTOLPawnMgr*, uint32_t))(Il2CppBase() + 0x1BE7BF0))(this, actorID);
	}
	template <typename T = bool> T HadCreated(uint32_t actorID) {
		return ((T (*)(VTOLPawnMgr*, uint32_t))(Il2CppBase() + 0x1BF4DCC))(this, actorID);
	}
	template <typename T = uintptr_t> T GetPlayerVTOL(uint32_t playerID) {
		return ((T (*)(VTOLPawnMgr*, uint32_t))(Il2CppBase() + 0x1BF4EA8))(this, playerID);
	}
	template <typename T = bool> T PlayerHadVTOL(uint32_t playerID) {
		return ((T (*)(VTOLPawnMgr*, uint32_t))(Il2CppBase() + 0x1BF51A4))(this, playerID);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF5480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF5488))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(VTOLPawnMgr*))(Il2CppBase() + 0x1BF5490))(this);
	}

};

}
