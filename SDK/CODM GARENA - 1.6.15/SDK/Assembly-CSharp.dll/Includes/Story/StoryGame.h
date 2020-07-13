#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Story {

class StoryGame
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Story", "StoryGame"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameEventChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGameInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentAmmoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCarriedAmmoScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndMatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerPawnType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDroppedPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialSettingMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T InitGameEventChannel() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1AFA4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1B15C))(this);
	}
	template <typename T = void> T InitGameInfo() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1B204))(this);
	}
	template <typename T = void> T StartMatch() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1B3F8))(this);
	}
	template <typename T = float> T GetCurrentAmmoScale(uintptr_t weapon) {
		return ((T (*)(StoryGame*, uintptr_t))(Il2CppBase() + 0x3F1B6B4))(this, weapon);
	}
	template <typename T = float> T GetCarriedAmmoScale(uintptr_t weapon) {
		return ((T (*)(StoryGame*, uintptr_t))(Il2CppBase() + 0x3F1B898))(this, weapon);
	}
	template <typename T = void> T EndMatch() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1BA7C))(this);
	}
	template <typename T = int32_t> T GetPlayerPawnType(uint64_t PlayerID, uint64_t RoleID, uintptr_t camp) {
		return ((T (*)(StoryGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3F1BCBC))(this, PlayerID, RoleID, camp);
	}
	template <typename T = uintptr_t> T SpawnDroppedPickUp(Il2CppVector3 inDroppedPosition, int32_t actorID, int32_t itemID, Il2CppArray<uintptr_t>* attachmentID, Il2CppArray<uintptr_t>* weaponSkillID, bool needPickupConfirm, int32_t duration, uint32_t skinID, int32_t itemNum, uintptr_t type, int32_t param1) {
		return ((T (*)(StoryGame*, Il2CppVector3, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3F1BD8C))(this, inDroppedPosition, actorID, itemID, attachmentID, weaponSkillID, needPickupConfirm, duration, skinID, itemNum, type, param1);
	}
	template <typename T = bool> static T IsTutorialSettingMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F1B5C0))(0);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameEventChannel() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1C074))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1C07C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitGameInfo() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1C084))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartMatch() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1C08C))(this);
	}
	template <typename T = float> T xLuaBaseProxy_GetCurrentAmmoScale(uintptr_t P0) {
		return ((T (*)(StoryGame*, uintptr_t))(Il2CppBase() + 0x3F1C094))(this, P0);
	}
	template <typename T = float> T xLuaBaseProxy_GetCarriedAmmoScale(uintptr_t P0) {
		return ((T (*)(StoryGame*, uintptr_t))(Il2CppBase() + 0x3F1C09C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EndMatch() {
		return ((T (*)(StoryGame*))(Il2CppBase() + 0x3F1C0A4))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetPlayerPawnType(uint64_t P0, uint64_t P1, uintptr_t P2) {
		return ((T (*)(StoryGame*, uint64_t, uint64_t, uintptr_t))(Il2CppBase() + 0x3F1C0AC))(this, P0, P1, P2);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_SpawnDroppedPickUp(Il2CppVector3 P0, int32_t P1, int32_t P2, Il2CppArray<uintptr_t>* P3, Il2CppArray<uintptr_t>* P4, bool P5, int32_t P6, uint32_t P7, int32_t P8, uintptr_t P9, int32_t P10) {
		return ((T (*)(StoryGame*, Il2CppVector3, int32_t, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, bool, int32_t, uint32_t, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x3F1C0D8))(this, P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10);
	}

};

}
