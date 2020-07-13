#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.PropHuntGame {

class PropHuntGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.PropHuntGame", "PropHuntGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init1PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init3PPawnActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349BE44))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349BE4C))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349BF08))(this);
	}
	template <typename T = Il2CppString*> T get_m_PropPawnCfgPath() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x3499614))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349BF80))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349C03C))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349C0F8))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349C1B4))(this);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(PropHuntGameBuilder*, uintptr_t))(Il2CppBase() + 0x349C1BC))(this, InActorInfo);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(PropHuntGameBuilder*, uintptr_t))(Il2CppBase() + 0x349C464))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(PropHuntGameBuilder*, uintptr_t))(Il2CppBase() + 0x349C550))(this, actorInfo);
	}
	template <typename T = void> T LoadBanks() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349C63C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(PropHuntGameBuilder*, uintptr_t))(Il2CppBase() + 0x349C748))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(PropHuntGameBuilder*, uintptr_t))(Il2CppBase() + 0x349C750))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(PropHuntGameBuilder*, uintptr_t))(Il2CppBase() + 0x349C758))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadBanks() {
		return ((T (*)(PropHuntGameBuilder*))(Il2CppBase() + 0x349C760))(this);
	}

};

}
