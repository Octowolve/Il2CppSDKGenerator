#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.URF {

class URFGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.URF", "URFGameBuilder"));
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

	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93B88))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor1P() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93C00))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93C78))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93CF0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93CF8))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93DB4))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93E70))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameModeNameLocID() {
		return ((T (*)(URFGameBuilder*))(Il2CppBase() + 0x3D93F2C))(this);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(URFGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D93FA4))(this, actorInfo);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(URFGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D94090))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(URFGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D9417C))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerControllerActorInfo(uintptr_t P0) {
		return ((T (*)(URFGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D94268))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(URFGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D9426C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(URFGameBuilder*, uintptr_t))(Il2CppBase() + 0x3D94270))(this, P0);
	}

};

}
