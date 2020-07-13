#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainGameScoreView"));
	}

	template <typename T = uintptr_t> T& ShootStaticTargetNum() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ShootMoveTargetNum() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ShootFlyTargetNum() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& CurShowStaticNum() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& CurShowMoveNum() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& CurShowFlyNum() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateShootInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHalfWarned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(TrainGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x3D8B798))(this, data, force);
	}
	template <typename T = void> T UpdateShootInfo(int32_t NewStaticNum, int32_t NewMoveNum, int32_t NewFlyNum) {
		return ((T (*)(TrainGameScoreView*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3D8B84C))(this, NewStaticNum, NewMoveNum, NewFlyNum);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(TrainGameScoreView*))(Il2CppBase() + 0x3D8BAA4))(this);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(TrainGameScoreView*))(Il2CppBase() + 0x3D8BB3C))(this);
	}
	template <typename T = void> T PlayHalfWarned() {
		return ((T (*)(TrainGameScoreView*))(Il2CppBase() + 0x3D8BBD4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateScore(uintptr_t P0, bool P1) {
		return ((T (*)(TrainGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x3D8BC6C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePlayerCount() {
		return ((T (*)(TrainGameScoreView*))(Il2CppBase() + 0x3D8BC74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetCampInfo() {
		return ((T (*)(TrainGameScoreView*))(Il2CppBase() + 0x3D8BC7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_PlayHalfWarned() {
		return ((T (*)(TrainGameScoreView*))(Il2CppBase() + 0x3D8BC84))(this);
	}

};

}
