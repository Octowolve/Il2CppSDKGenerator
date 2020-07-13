#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class PVPShootOutOGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "PVPShootOutOGameBuilder"));
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
		return ((T (*)(PVPShootOutOGameBuilder*))(Il2CppBase() + 0x34BCBB0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(PVPShootOutOGameBuilder*))(Il2CppBase() + 0x34BCBB8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(PVPShootOutOGameBuilder*))(Il2CppBase() + 0x34BCC74))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(PVPShootOutOGameBuilder*))(Il2CppBase() + 0x34BCD30))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(PVPShootOutOGameBuilder*))(Il2CppBase() + 0x34BCDEC))(this);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(PVPShootOutOGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BCE64))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(PVPShootOutOGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BCF50))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(PVPShootOutOGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BD03C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(PVPShootOutOGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BD044))(this, P0);
	}

};

}
