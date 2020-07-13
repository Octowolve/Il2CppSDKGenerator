#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnTopNameHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnTopNameHUD"));
	}

	template <typename T = uintptr_t> T& PVPPawnName() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PVPOBPawnName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PVEPawnName() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BRPawnName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BROBPawnName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_GameUIScene() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_NameList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& m_PVP() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_RootPanel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector3> T& m_LastCameraPos() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_LastUpdateTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Create() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGameMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTeammateName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LogNameList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterWorldCamereLateUpdateCall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateByCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCameraPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayBegin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeadReplayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CDBAC))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CDBB4))(this);
	}
	template <typename T = uintptr_t> static T Create(uintptr_t uiScene) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16CDBC4))(0, uiScene);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CDD94))(this);
	}
	template <typename T = void> T SetGameMode() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CDE4C))(this);
	}
	template <typename T = void> T Add(uintptr_t pawn) {
		return ((T (*)(PawnTopNameHUD*, uintptr_t))(Il2CppBase() + 0x16CE118))(this, pawn);
	}
	template <typename T = void> T RefreshTeammateName() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CE9DC))(this);
	}
	template <typename T = void> T LogNameList() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CED70))(this);
	}
	template <typename T = uintptr_t> T Spawn(uintptr_t pawn) {
		return ((T (*)(PawnTopNameHUD*, uintptr_t))(Il2CppBase() + 0x16CE2F8))(this, pawn);
	}
	template <typename T = void> T Remove(uintptr_t pawn) {
		return ((T (*)(PawnTopNameHUD*, uintptr_t))(Il2CppBase() + 0x16CEEEC))(this, pawn);
	}
	template <typename T = void> T RegisterWorldCamereLateUpdateCall() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CDF74))(this);
	}
	template <typename T = void> T RefreshAllData() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CF0AC))(this);
	}
	template <typename T = void> T UpdateByCamera() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CF560))(this);
	}
	template <typename T = void> T CheckCameraPosition(Il2CppVector3 cameraPos) {
		return ((T (*)(PawnTopNameHUD*, Il2CppVector3))(Il2CppBase() + 0x16CF9AC))(this, cameraPos);
	}
	template <typename T = void> T DeadReplayBegin(uintptr_t killerCamp) {
		return ((T (*)(PawnTopNameHUD*, uintptr_t))(Il2CppBase() + 0x16CFCF0))(this, killerCamp);
	}
	template <typename T = void> T DeadReplayEnd() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16CFEF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PawnTopNameHUD*))(Il2CppBase() + 0x16D01DC))(this);
	}

};

}
