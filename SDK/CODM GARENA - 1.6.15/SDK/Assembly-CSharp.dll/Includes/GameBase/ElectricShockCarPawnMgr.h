#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ElectricShockCarPawnMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ElectricShockCarPawnMgr"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ElectricShockCarPawnDict() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& CreateCallBack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DestoryCallBack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateElectricShockCarPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPawnActorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModelAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Find() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllElectricShockCarPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveElectricShockCarPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveElectricShockCarPawnByPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExistByActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExistByPlayerID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCarCurrentElectricQuantity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCarMaxElectricQuantity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayCommonDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSpectatingTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_ElectricShockCarPawnDict() {
		return ((T (*)(ElectricShockCarPawnMgr*))(Il2CppBase() + 0x40FB08C))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ElectricShockCarPawnMgr*))(Il2CppBase() + 0x40FB094))(this);
	}
	template <typename T = uintptr_t> T CreateElectricShockCarPawn(Il2CppVector3 pos, Il2CppQuaternion rotation, uintptr_t camp, uint32_t playerID, uint32_t actorID, uint64_t roleID, uint32_t ownerPlayerID) {
		return ((T (*)(ElectricShockCarPawnMgr*, Il2CppVector3, Il2CppQuaternion, uintptr_t, uint32_t, uint32_t, uint64_t, uint32_t))(Il2CppBase() + 0x40FB15C))(this, pos, rotation, camp, playerID, actorID, roleID, ownerPlayerID);
	}
	template <typename T = uintptr_t> T GetPawnActorType() {
		return ((T (*)(ElectricShockCarPawnMgr*))(Il2CppBase() + 0x40FB9AC))(this);
	}
	template <typename T = int32_t> T GetModelAssetID() {
		return ((T (*)(ElectricShockCarPawnMgr*))(Il2CppBase() + 0x40FBA4C))(this);
	}
	template <typename T = uintptr_t> T Find(uint32_t actorID) {
		return ((T (*)(ElectricShockCarPawnMgr*, uint32_t))(Il2CppBase() + 0x40FBB78))(this, actorID);
	}
	template <typename T = void> T RemoveAllElectricShockCarPawn() {
		return ((T (*)(ElectricShockCarPawnMgr*))(Il2CppBase() + 0x40FBC9C))(this);
	}
	template <typename T = void> T RemoveElectricShockCarPawn(uint32_t actorID, uintptr_t byType) {
		return ((T (*)(ElectricShockCarPawnMgr*, uint32_t, uintptr_t))(Il2CppBase() + 0x40FC048))(this, actorID, byType);
	}
	template <typename T = void> T CheckAudio(Il2CppString* eventName) {
		return ((T (*)(ElectricShockCarPawnMgr*, Il2CppString*))(Il2CppBase() + 0x40FC41C))(this, eventName);
	}
	template <typename T = void> T RemoveElectricShockCarPawnByPlayerID(uint32_t playerID) {
		return ((T (*)(ElectricShockCarPawnMgr*, uint32_t))(Il2CppBase() + 0x40FC4BC))(this, playerID);
	}
	template <typename T = bool> T IsExistByActorID(uint32_t actorID) {
		return ((T (*)(ElectricShockCarPawnMgr*, uint32_t))(Il2CppBase() + 0x40FC910))(this, actorID);
	}
	template <typename T = bool> T IsExistByPlayerID(uint32_t playerID) {
		return ((T (*)(ElectricShockCarPawnMgr*, uint32_t))(Il2CppBase() + 0x40FC9EC))(this, playerID);
	}
	template <typename T = void> T SetCarCurrentElectricQuantity(uint32_t playerID, uint32_t actorID, int32_t currentCount) {
		return ((T (*)(ElectricShockCarPawnMgr*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x40FCCC8))(this, playerID, actorID, currentCount);
	}
	template <typename T = void> T SetCarMaxElectricQuantity(uint32_t playerID, uint32_t actorID, int32_t maxCount) {
		return ((T (*)(ElectricShockCarPawnMgr*, uint32_t, uint32_t, int32_t))(Il2CppBase() + 0x40FCF98))(this, playerID, actorID, maxCount);
	}
	template <typename T = void> static T DeadReplayCommonDestory(uint32_t actorID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x40FD268))(0, actorID);
	}
	template <typename T = void> T RefreshSpectatingTarget() {
		return ((T (*)(ElectricShockCarPawnMgr*))(Il2CppBase() + 0x40FD3BC))(this);
	}
	template <typename T = void> T MoveTo(Il2CppVector3 v3) {
		return ((T (*)(ElectricShockCarPawnMgr*, Il2CppVector3))(Il2CppBase() + 0x40FD660))(this, v3);
	}

};

}
