#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.ChamberGame {

class ChamberGameGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.ChamberGame", "ChamberGameGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPlayerControllerActorInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(ChamberGameGameBuilder*))(Il2CppBase() + 0x2B22B9C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(ChamberGameGameBuilder*))(Il2CppBase() + 0x2B22BA4))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(ChamberGameGameBuilder*))(Il2CppBase() + 0x2B22C60))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(ChamberGameGameBuilder*))(Il2CppBase() + 0x2B22D1C))(this);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(ChamberGameGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B22DD8))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerControllerActorInfo(uintptr_t P0) {
		return ((T (*)(ChamberGameGameBuilder*, uintptr_t))(Il2CppBase() + 0x2B22EC4))(this, P0);
	}

};

}
