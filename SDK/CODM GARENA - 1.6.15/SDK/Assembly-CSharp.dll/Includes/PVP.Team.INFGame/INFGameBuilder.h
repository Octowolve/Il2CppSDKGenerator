#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class INFGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "INFGameBuilder"));
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
		return ((T (*)(INFGameBuilder*))(Il2CppBase() + 0x403FA14))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(INFGameBuilder*))(Il2CppBase() + 0x403FA1C))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(INFGameBuilder*))(Il2CppBase() + 0x403FAD8))(this);
	}
	template <typename T = uintptr_t> T get_m_PlayerInfoType() {
		return ((T (*)(INFGameBuilder*))(Il2CppBase() + 0x403FB94))(this);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(INFGameBuilder*, uintptr_t))(Il2CppBase() + 0x403FC50))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(INFGameBuilder*, uintptr_t))(Il2CppBase() + 0x403FD3C))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(INFGameBuilder*, uintptr_t))(Il2CppBase() + 0x403FE28))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(INFGameBuilder*, uintptr_t))(Il2CppBase() + 0x403FE30))(this, P0);
	}

};

}
