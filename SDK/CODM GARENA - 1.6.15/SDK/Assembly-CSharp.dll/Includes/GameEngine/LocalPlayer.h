#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LocalPlayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LocalPlayer"));
	}

	template <typename T = uint64_t> T& GameServerPlayerID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& m_PlayerID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& LadderLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_NickName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_PicId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& m_FrameId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& PicUrl() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_IsSwitching() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& m_SwitchedPlayerID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_Camp() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& FriendObservePlayerID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_LastOBCamp() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_PlayerController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector3> T& m_InitLocationUnshifted() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& m_InitLocation() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppQuaternion> T& m_InitRotation() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InitPropInfoList() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& m_InitGameStarted() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& m_LadderScore() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& m_MoveState() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& m_RoomId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_GameBaseUniqID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Individuations() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint32_t> T& m_WinCircleIndividuation() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& ScoreStreakDataCount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ScoreStreakDataList() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_CarePackageStreakData() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_MagicBoxWeaponList() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_OffWallWeaponList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreatePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CreatePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateDefaultPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWorldShutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A028C))(this);
	}
	template <typename T = void> T set_PlayerID(uint32_t value) {
		return ((T (*)(LocalPlayer*, uint32_t))(Il2CppBase() + 0x24A02A0))(this, value);
	}
	template <typename T = uint32_t> T get_OriginalPlayerID() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A02A8))(this);
	}
	template <typename T = Il2CppString*> T get_NickName() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A02B0))(this);
	}
	template <typename T = void> T set_NickName(Il2CppString* value) {
		return ((T (*)(LocalPlayer*, Il2CppString*))(Il2CppBase() + 0x24A02B8))(this, value);
	}
	template <typename T = int32_t> T get_PicId() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A02C0))(this);
	}
	template <typename T = void> T set_PicId(int32_t value) {
		return ((T (*)(LocalPlayer*, int32_t))(Il2CppBase() + 0x24A02C8))(this, value);
	}
	template <typename T = int32_t> T get_FrameId() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A02D0))(this);
	}
	template <typename T = void> T set_FrameId(int32_t value) {
		return ((T (*)(LocalPlayer*, int32_t))(Il2CppBase() + 0x24A02D8))(this, value);
	}
	template <typename T = Il2CppString*> T get_PicUrl() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A02E0))(this);
	}
	template <typename T = void> T set_PicUrl(Il2CppString* value) {
		return ((T (*)(LocalPlayer*, Il2CppString*))(Il2CppBase() + 0x24A02E8))(this, value);
	}
	template <typename T = bool> T get_IsSwitching() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A02F0))(this);
	}
	template <typename T = void> T set_IsSwitching(bool value) {
		return ((T (*)(LocalPlayer*, bool))(Il2CppBase() + 0x24A02F8))(this, value);
	}
	template <typename T = uint32_t> T get_SwitchedPlayerID() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0300))(this);
	}
	template <typename T = void> T set_SwitchedPlayerID(uint32_t value) {
		return ((T (*)(LocalPlayer*, uint32_t))(Il2CppBase() + 0x24A0308))(this, value);
	}
	template <typename T = uintptr_t> T get_Camp() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0310))(this);
	}
	template <typename T = void> T set_Camp(uintptr_t value) {
		return ((T (*)(LocalPlayer*, uintptr_t))(Il2CppBase() + 0x24A0318))(this, value);
	}
	template <typename T = uintptr_t> T get_SpectateCamp() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0320))(this);
	}
	template <typename T = uintptr_t> T get_PlayerController() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0424))(this);
	}
	template <typename T = Il2CppVector3> T get_InitLocationUnshifted() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A042C))(this);
	}
	template <typename T = Il2CppVector3> T get_InitLocation() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0440))(this);
	}
	template <typename T = void> T set_InitLocation(Il2CppVector3 value) {
		return ((T (*)(LocalPlayer*, Il2CppVector3))(Il2CppBase() + 0x24A0454))(this, value);
	}
	template <typename T = Il2CppQuaternion> T get_InitRotation() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A04AC))(this);
	}
	template <typename T = void> T set_InitRotation(Il2CppQuaternion value) {
		return ((T (*)(LocalPlayer*, Il2CppQuaternion))(Il2CppBase() + 0x24A04BC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_InitPropIntoList() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A04D4))(this);
	}
	template <typename T = void> T set_InitPropIntoList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LocalPlayer*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x24A04DC))(this, value);
	}
	template <typename T = bool> T get_InitGameStarted() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A04E4))(this);
	}
	template <typename T = void> T set_InitGameStarted(bool value) {
		return ((T (*)(LocalPlayer*, bool))(Il2CppBase() + 0x24A04EC))(this, value);
	}
	template <typename T = int32_t> T get_LadderScore() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A04F4))(this);
	}
	template <typename T = void> T set_LadderScore(int32_t value) {
		return ((T (*)(LocalPlayer*, int32_t))(Il2CppBase() + 0x24A04FC))(this, value);
	}
	template <typename T = int32_t> T get_MoveState() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0504))(this);
	}
	template <typename T = void> T set_MoveState(int32_t value) {
		return ((T (*)(LocalPlayer*, int32_t))(Il2CppBase() + 0x24A050C))(this, value);
	}
	template <typename T = int32_t> T get_RoomId() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0514))(this);
	}
	template <typename T = void> T set_RoomId(int32_t value) {
		return ((T (*)(LocalPlayer*, int32_t))(Il2CppBase() + 0x24A051C))(this, value);
	}
	template <typename T = int32_t> T get_GameBaseUniqID() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0524))(this);
	}
	template <typename T = void> T set_GameBaseUniqID(int32_t value) {
		return ((T (*)(LocalPlayer*, int32_t))(Il2CppBase() + 0x24A052C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Individuations() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0534))(this);
	}
	template <typename T = void> T set_Individuations(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LocalPlayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24A053C))(this, value);
	}
	template <typename T = uint32_t> T get_WinCircleIndividuation() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0544))(this);
	}
	template <typename T = void> T set_WinCircleIndividuation(uint32_t value) {
		return ((T (*)(LocalPlayer*, uint32_t))(Il2CppBase() + 0x24A054C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_ScoreStreakDataList() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A0554))(this);
	}
	template <typename T = void> T set_ScoreStreakDataList(Il2CppList<uintptr_t>* value) {
		return ((T (*)(LocalPlayer*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x24A055C))(this, value);
	}
	template <typename T = uintptr_t> T get_CarePackageStreakData() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A069C))(this);
	}
	template <typename T = void> T set_CarePackageStreakData(uintptr_t value) {
		return ((T (*)(LocalPlayer*, uintptr_t))(Il2CppBase() + 0x24A06A4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MagicBoxWeaponList() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A06AC))(this);
	}
	template <typename T = void> T set_MagicBoxWeaponList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LocalPlayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24A06B4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OffWallWeaponList() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A06BC))(this);
	}
	template <typename T = void> T set_OffWallWeaponList(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(LocalPlayer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24A06C4))(this, value);
	}
	template <typename T = bool> T CreatePlayer() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A06CC))(this);
	}
	template <typename T = bool> T CreatePlayer_1(Il2CppVector3 spawnLocation, Il2CppQuaternion spawnRotation, bool createDefaultPawn) {
		return ((T (*)(LocalPlayer*, Il2CppVector3, Il2CppQuaternion, bool))(Il2CppBase() + 0x24A0AA8))(this, spawnLocation, spawnRotation, createDefaultPawn);
	}
	template <typename T = void> T CreateDefaultPawn(bool gameStarted, Il2CppVector3 spawnLocation, Il2CppQuaternion spawnRotation) {
		return ((T (*)(LocalPlayer*, bool, Il2CppVector3, Il2CppQuaternion))(Il2CppBase() + 0x24A0F98))(this, gameStarted, spawnLocation, spawnRotation);
	}
	template <typename T = void> T SwitchController(uintptr_t PlayerController) {
		return ((T (*)(LocalPlayer*, uintptr_t))(Il2CppBase() + 0x24A0920))(this, PlayerController);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A1274))(this);
	}
	template <typename T = void> T OnWorldShutdown() {
		return ((T (*)(LocalPlayer*))(Il2CppBase() + 0x24A139C))(this);
	}
	template <typename T = int32_t> static T set_ScoreStreakDataListm__0(uintptr_t x, uintptr_t y) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x24A1440))(0, x, y);
	}

};

}
