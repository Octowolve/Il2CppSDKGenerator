#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.SASGame {

class SticksAndStonesGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.SASGame", "SticksAndStonesGameBuilder"));
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
		return ((T (*)(SticksAndStonesGameBuilder*))(Il2CppBase() + 0x34BD87C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(SticksAndStonesGameBuilder*))(Il2CppBase() + 0x34BD884))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(SticksAndStonesGameBuilder*))(Il2CppBase() + 0x34BD940))(this);
	}
	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(SticksAndStonesGameBuilder*))(Il2CppBase() + 0x34BD9FC))(this);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(SticksAndStonesGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BDA74))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(SticksAndStonesGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BDB60))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(SticksAndStonesGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BDC4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(SticksAndStonesGameBuilder*, uintptr_t))(Il2CppBase() + 0x34BDC54))(this, P0);
	}

};

}
