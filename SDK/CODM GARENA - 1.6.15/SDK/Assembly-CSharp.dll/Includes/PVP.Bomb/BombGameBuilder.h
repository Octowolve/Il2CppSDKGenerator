#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGameBuilder"));
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
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407B840))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor1P() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407B8B8))(this);
	}
	template <typename T = Il2CppString*> T get_m_PawnCfgPathFor3P() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407B930))(this);
	}
	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407B9A8))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407B9B0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407BA6C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407BB28))(this);
	}
	template <typename T = uintptr_t> T get_m_GameEventChannelType() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407BBE4))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameModeNameLocID() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407BCA0))(this);
	}
	template <typename T = bool> T get_m_ReusePawn() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407BD18))(this);
	}
	template <typename T = bool> T get_m_EnableRevelentOPT() {
		return ((T (*)(BombGameBuilder*))(Il2CppBase() + 0x407BD20))(this);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BombGameBuilder*, uintptr_t))(Il2CppBase() + 0x407BD28))(this, actorInfo);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BombGameBuilder*, uintptr_t))(Il2CppBase() + 0x407BE14))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(BombGameBuilder*, uintptr_t))(Il2CppBase() + 0x407BF00))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerControllerActorInfo(uintptr_t P0) {
		return ((T (*)(BombGameBuilder*, uintptr_t))(Il2CppBase() + 0x407C004))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BombGameBuilder*, uintptr_t))(Il2CppBase() + 0x407C00C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(BombGameBuilder*, uintptr_t))(Il2CppBase() + 0x407C014))(this, P0);
	}

};

}
