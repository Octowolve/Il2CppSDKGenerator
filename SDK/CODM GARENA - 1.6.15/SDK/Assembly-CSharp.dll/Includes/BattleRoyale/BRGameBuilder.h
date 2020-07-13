#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init1PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init3PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerControllerActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x19052A0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x19052A8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x1905364))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x1905420))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x19054DC))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor1P() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x1905598))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x1905610))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x1905688))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(BRGameBuilder*))(Il2CppBase() + 0x1905690))(this);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x1905708))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x19057F4))(this, actorInfo);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x19058E0))(this, actorInfo);
	}
	template <typename T = void> T WeaponInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x19059CC))(this, InActorInfo);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x1905AFC))(this, InActorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x1905E64))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x1905E6C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerControllerActorInfo(uintptr_t P0) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x1905E74))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WeaponInfoRegFunc(uintptr_t P0) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x1905E7C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(BRGameBuilder*, uintptr_t))(Il2CppBase() + 0x1905E84))(this, P0);
	}

};

}
