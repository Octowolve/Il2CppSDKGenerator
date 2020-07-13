#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team {

class TeamGame3PBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team", "TeamGame3PBuilder"));
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

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(TeamGame3PBuilder*))(Il2CppBase() + 0x3D894AC))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(TeamGame3PBuilder*))(Il2CppBase() + 0x3D894B4))(this);
	}
	template <typename T = uintptr_t> T get_m_GameInfoType() {
		return ((T (*)(TeamGame3PBuilder*))(Il2CppBase() + 0x3D89570))(this);
	}
	template <typename T = void> T InitPlayerControllerActorInfo(uintptr_t actorInfo) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D8962C))(this, actorInfo);
	}
	template <typename T = void> T Init1PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D89718))(this, actorInfo);
	}
	template <typename T = void> T Init3PPawnActorInfo(uintptr_t actorInfo) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D89804))(this, actorInfo);
	}
	template <typename T = void> T Add3PCommonComponent(uintptr_t actorInfo) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D898F0))(this, actorInfo);
	}
	template <typename T = void> T xLuaBaseProxy_InitPlayerControllerActorInfo(uintptr_t P0) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D899FC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init1PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D89AEC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init3PPawnActorInfo(uintptr_t P0) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D89BDC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Add3PCommonComponent(uintptr_t P0) {
		return ((T (*)(TeamGame3PBuilder*, uintptr_t))(Il2CppBase() + 0x3D89CCC))(this, P0);
	}

};

}
