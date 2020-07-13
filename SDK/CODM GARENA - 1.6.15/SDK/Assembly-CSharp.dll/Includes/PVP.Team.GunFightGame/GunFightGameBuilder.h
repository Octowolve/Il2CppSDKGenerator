#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerControllerActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init1PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init3PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(GunFightGameBuilder*))(Il2CppBase() + 0x40216C8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(GunFightGameBuilder*))(Il2CppBase() + 0x40216D0))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(GunFightGameBuilder*))(Il2CppBase() + 0x402178C))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(GunFightGameBuilder*))(Il2CppBase() + 0x4021848))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(GunFightGameBuilder*))(Il2CppBase() + 0x4021904))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(GunFightGameBuilder*))(Il2CppBase() + 0x40219C0))(this);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(GunFightGameBuilder*, uintptr_t))(Il2CppBase() + 0x40219C8))(this, actorInfo);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(GunFightGameBuilder*, uintptr_t))(Il2CppBase() + 0x4021AB4))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(GunFightGameBuilder*, uintptr_t))(Il2CppBase() + 0x4021BA0))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerControllerActorInfo(uintptr_t P0) {
		return ((T (*)(GunFightGameBuilder*, uintptr_t))(Il2CppBase() + 0x4021C8C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(GunFightGameBuilder*, uintptr_t))(Il2CppBase() + 0x4021C94))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(GunFightGameBuilder*, uintptr_t))(Il2CppBase() + 0x4021C9C))(this, P0);
	}

};

}
