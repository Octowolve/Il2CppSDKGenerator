#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamGameBuilder"));
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

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(BRTeamGameBuilder*))(Il2CppBase() + 0x261DEF4))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(BRTeamGameBuilder*))(Il2CppBase() + 0x261DEFC))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(BRTeamGameBuilder*))(Il2CppBase() + 0x261DFB8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(BRTeamGameBuilder*))(Il2CppBase() + 0x261E074))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(BRTeamGameBuilder*))(Il2CppBase() + 0x261E130))(this);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BRTeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x261E1EC))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BRTeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x261E2D8))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BRTeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x261E3C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BRTeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x261E3CC))(this, P0);
	}

};

}
