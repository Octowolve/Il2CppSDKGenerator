#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class GameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "GameBuilder"));
	}

	template <typename T = bool> T& m_DomShowAttackerProgress() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildGameUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VehicleInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponPartInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2820))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor1P() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2898))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2910))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2988))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2990))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2A4C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2B08))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2BC4))(this);
	}
	template <typename T = uintptr_t> T get_m_ZoneEventChannelType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2C80))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameModeNameLocID() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2D3C))(this);
	}
	template <typename T = bool> T get_m_EnableRevelentOPT() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2DEC))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2DF4))(this);
	}
	template <typename T = uintptr_t> T get_GameModeType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2DFC))(this);
	}
	template <typename T = uintptr_t> T get_PlayerInfoType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E0C))(this);
	}
	template <typename T = uintptr_t> T get_UISceneType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E1C))(this);
	}
	template <typename T = uintptr_t> T get_GameInfoType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E2C))(this);
	}
	template <typename T = uintptr_t> T get_GameEventChannelType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E3C))(this);
	}
	template <typename T = uintptr_t> T get_ZoneEventChannelType() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E4C))(this);
	}
	template <typename T = Il2CppString*> T get_GameCfgPath() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E5C))(this);
	}
	template <typename T = Il2CppString*> T get_PawnCfgPathFor1P() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E6C))(this);
	}
	template <typename T = Il2CppString*> T get_PawnCfgPathFor3P() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E7C))(this);
	}
	template <typename T = Il2CppString*> T get_GameModeName() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2E8C))(this);
	}
	template <typename T = bool> T get_EnableRevelentOPT() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2FC8))(this);
	}
	template <typename T = bool> T get_ReusePawn() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2FD8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C2FE8))(this);
	}
	template <typename T = uintptr_t> T BuildGameUIScene() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C3080))(this);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(GameBuilder*, uintptr_t))(Il2CppBase() + 0x36C3198))(this, InActorInfo);
	}
	template <typename T = void> T VehicleInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(GameBuilder*, uintptr_t))(Il2CppBase() + 0x36C3238))(this, InActorInfo);
	}
	template <typename T = void> T WeaponInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(GameBuilder*, uintptr_t))(Il2CppBase() + 0x36C32D8))(this, InActorInfo);
	}
	template <typename T = void> T WeaponPartInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(GameBuilder*, uintptr_t))(Il2CppBase() + 0x36C3378))(this, InActorInfo);
	}
	template <typename T = void> T LoadBanks() {
		return ((T (*)(GameBuilder*))(Il2CppBase() + 0x36C3418))(this);
	}

};

}
