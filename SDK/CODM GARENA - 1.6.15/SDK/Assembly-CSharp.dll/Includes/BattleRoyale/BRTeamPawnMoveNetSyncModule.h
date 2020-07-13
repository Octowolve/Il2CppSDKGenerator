#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTeamPawnMoveNetSyncModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTeamPawnMoveNetSyncModule"));
	}

	template <typename T = bool> static T& BShouldSyncForceSetPositionProtocolPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& BLocalPlayerShouldSyncForceSetPositionProtocolPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerTryForceSetPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShoudlSyncForceSetPositionProtocolPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T PreInit() {
		return ((T (*)(BRTeamPawnMoveNetSyncModule*))(Il2CppBase() + 0x2631BD0))(this);
	}
	template <typename T = void> T OnServerTryForceSetPosition(uintptr_t Msg) {
		return ((T (*)(BRTeamPawnMoveNetSyncModule*, uintptr_t))(Il2CppBase() + 0x2631D10))(this, Msg);
	}
	template <typename T = bool> T ShoudlSyncForceSetPositionProtocolPhysicsState() {
		return ((T (*)(BRTeamPawnMoveNetSyncModule*))(Il2CppBase() + 0x263221C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PreInit() {
		return ((T (*)(BRTeamPawnMoveNetSyncModule*))(Il2CppBase() + 0x26323B0))(this);
	}

};

}
