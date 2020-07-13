#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDoorMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDoorMgr"));
	}

	template <typename T = float> T& m_AutoOpenDoorInputTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& m_AutoOpenDoorGap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_DoorBrokenStateHP() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_HeightToTerrainLoadDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsDisableBlackMarketDoor() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IsInHospitalRoom() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LevelDoorList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_LevelDoorCacheList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_TickCreateDoor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_BRDoorMap() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_BRGame() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_Root() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> static T& DoorSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& DoorCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDoorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyDoorRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanLoadDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelObjectUnRegistered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SpawnDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpwanAllDoors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllDoors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDoorState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerTouchDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckServerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndAddBRDoorCompont() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnBRDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDoorExist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPawnInDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLevelDoor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = float> T get_AutoOpenDoorInputTime() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251F8B0))(this);
	}
	template <typename T = float> T get_AutoOpenDoorGap() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251F8B8))(this);
	}
	template <typename T = bool> T get_IsDisableBlackMarketDoor() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x24B63EC))(this);
	}
	template <typename T = void> T set_IsDisableBlackMarketDoor(bool value) {
		return ((T (*)(BRDoorMgr*, bool))(Il2CppBase() + 0x251F8C0))(this, value);
	}
	template <typename T = bool> T get_IsInHospitalRoom() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2519F88))(this);
	}
	template <typename T = void> T set_IsInHospitalRoom(bool value) {
		return ((T (*)(BRDoorMgr*, bool))(Il2CppBase() + 0x251F8C8))(this, value);
	}
	template <typename T = float> T get_DoorBrokenStateHP() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251F8D0))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_LevelDoorList() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251F8D8))(this);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T get_BRDoorMap() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251F8E0))(this);
	}
	template <typename T = uintptr_t> T GetDoorRoot() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251F8E8))(this);
	}
	template <typename T = void> T DestroyDoorRoot() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251FA78))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251FC04))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x251FF10))(this);
	}
	template <typename T = void> T OnStartMatch() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x252006C))(this);
	}
	template <typename T = bool> T CanLoadDoor() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2520134))(this);
	}
	template <typename T = void> T Tick(float tickTime) {
		return ((T (*)(BRDoorMgr*, float))(Il2CppBase() + 0x2520420))(this, tickTime);
	}
	template <typename T = void> T OnLevelObjectRegistered(uintptr_t levelObject) {
		return ((T (*)(BRDoorMgr*, uintptr_t))(Il2CppBase() + 0x2520DD0))(this, levelObject);
	}
	template <typename T = void> T OnLevelObjectUnRegistered(uintptr_t levelObject) {
		return ((T (*)(BRDoorMgr*, uintptr_t))(Il2CppBase() + 0x252102C))(this, levelObject);
	}
	template <typename T = void> T SpawnDoor(uintptr_t info, uintptr_t levelDoor) {
		return ((T (*)(BRDoorMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2520C24))(this, info, levelDoor);
	}
	template <typename T = void> T SpawnDoor_1(uintptr_t info) {
		return ((T (*)(BRDoorMgr*, uintptr_t))(Il2CppBase() + 0x25218A0))(this, info);
	}
	template <typename T = void> T RemoveDoor(uint32_t uid) {
		return ((T (*)(BRDoorMgr*, uint32_t))(Il2CppBase() + 0x252121C))(this, uid);
	}
	template <typename T = void> T SpwanAllDoors() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2521BE8))(this);
	}
	template <typename T = void> T RemoveAllDoors() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2521F64))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2522070))(this);
	}
	template <typename T = void> T SetDoorState(uint32_t uid, uintptr_t state, bool force) {
		return ((T (*)(BRDoorMgr*, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x25221A8))(this, uid, state, force);
	}
	template <typename T = void> T PlayerTouchDoor(uint32_t uid) {
		return ((T (*)(BRDoorMgr*, uint32_t))(Il2CppBase() + 0x2522300))(this, uid);
	}
	template <typename T = uintptr_t> T GetBRDoor(uint32_t uid) {
		return ((T (*)(BRDoorMgr*, uint32_t))(Il2CppBase() + 0x251C840))(this, uid);
	}
	template <typename T = bool> T CheckServerType(uintptr_t type) {
		return ((T (*)(BRDoorMgr*, uintptr_t))(Il2CppBase() + 0x251B104))(this, type);
	}
	template <typename T = uintptr_t> T CheckAndAddBRDoorCompont(uintptr_t root, uintptr_t doorType) {
		return ((T (*)(BRDoorMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x25227C4))(this, root, doorType);
	}
	template <typename T = void> T SpawnBRDoor(uint32_t actorId, uintptr_t doorInfo, uintptr_t levelDoor) {
		return ((T (*)(BRDoorMgr*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2521420))(this, actorId, doorInfo, levelDoor);
	}
	template <typename T = bool> T IsDoorExist(uint32_t uid) {
		return ((T (*)(BRDoorMgr*, uint32_t))(Il2CppBase() + 0x2522A10))(this, uid);
	}
	template <typename T = bool> T IsLocalPawnInDoor(uint32_t uid) {
		return ((T (*)(BRDoorMgr*, uint32_t))(Il2CppBase() + 0x2522B74))(this, uid);
	}
	template <typename T = uintptr_t> T GetLevelDoor(uint32_t uid) {
		return ((T (*)(BRDoorMgr*, uint32_t))(Il2CppBase() + 0x2521AB4))(this, uid);
	}
	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(BRDoorMgr*, uintptr_t, bool))(Il2CppBase() + 0x2522CB8))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2522DD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2522F98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2522FA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnStartMatch() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2522FA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRDoorMgr*, float))(Il2CppBase() + 0x2522FB0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectRegistered(uintptr_t P0) {
		return ((T (*)(BRDoorMgr*, uintptr_t))(Il2CppBase() + 0x2522FB8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLevelObjectUnRegistered(uintptr_t P0) {
		return ((T (*)(BRDoorMgr*, uintptr_t))(Il2CppBase() + 0x2522FC0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRDoorMgr*))(Il2CppBase() + 0x2522FC8))(this);
	}

};

}
