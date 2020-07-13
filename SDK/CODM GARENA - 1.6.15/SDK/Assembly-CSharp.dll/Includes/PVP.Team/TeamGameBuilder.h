#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class TeamGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "TeamGameBuilder"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_Add3PCommonComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(TeamGameBuilder*))(Il2CppBase() + 0x3D89DDC))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor1P() {
		return ((T (*)(TeamGameBuilder*))(Il2CppBase() + 0x3D89E54))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(TeamGameBuilder*))(Il2CppBase() + 0x3D89ECC))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(TeamGameBuilder*))(Il2CppBase() + 0x3D89F44))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(TeamGameBuilder*))(Il2CppBase() + 0x3D89F4C))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameModeNameLocID() {
		return ((T (*)(TeamGameBuilder*))(Il2CppBase() + 0x3D8A008))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(TeamGameBuilder*))(Il2CppBase() + 0x3D8A080))(this);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D89A00))(this, actorInfo);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D89AF0))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D89BE0))(this, actorInfo);
	}
	template <typename T = void> T Add3PCommonComponent(uintptr_t actorInfo) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D89CD0))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerControllerActorInfo(uintptr_t P0) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D8A088))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D8A090))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D8A098))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Add3PCommonComponent(uintptr_t P0) {
		return ((T (*)(TeamGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D8A0A0))(this, P0);
	}

};

}
