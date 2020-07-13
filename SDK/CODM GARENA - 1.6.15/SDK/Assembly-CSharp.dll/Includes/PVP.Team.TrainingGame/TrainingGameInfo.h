#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingGameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingGameInfo"));
	}

	template <typename T = int32_t> T& mFixCount() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = int32_t> T& mMoveCount() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = int32_t> T& mFlyCount() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_InfiniteCarriedAmmo() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D900AC))(this);
	}
	template <typename T = bool> T get_IsShowPvpStreak() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D900B4))(this);
	}
	template <typename T = float> T get_DelayRoundEndTime() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D900BC))(this);
	}
	template <typename T = uintptr_t> T get_PvpWeaponViewType() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D900C4))(this);
	}
	template <typename T = bool> T get_CanUseULTSkill() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D900CC))(this);
	}
	template <typename T = int32_t> T get_FixCount() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D8D8EC))(this);
	}
	template <typename T = void> T set_FixCount(int32_t value) {
		return ((T (*)(TrainingGameInfo*, int32_t))(Il2CppBase() + 0x3D8F9BC))(this, value);
	}
	template <typename T = int32_t> T get_MoveCount() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D8D8F4))(this);
	}
	template <typename T = void> T set_MoveCount(int32_t value) {
		return ((T (*)(TrainingGameInfo*, int32_t))(Il2CppBase() + 0x3D8F9C4))(this, value);
	}
	template <typename T = int32_t> T get_FlyCount() {
		return ((T (*)(TrainingGameInfo*))(Il2CppBase() + 0x3D8D8FC))(this);
	}
	template <typename T = void> T set_FlyCount(int32_t value) {
		return ((T (*)(TrainingGameInfo*, int32_t))(Il2CppBase() + 0x3D8F9CC))(this, value);
	}

};

}
