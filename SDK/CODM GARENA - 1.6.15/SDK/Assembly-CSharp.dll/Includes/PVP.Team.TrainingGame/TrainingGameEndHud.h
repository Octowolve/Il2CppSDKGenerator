#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingGameEndHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingGameEndHud"));
	}

	template <typename T = uintptr_t> T& TitleLocLabel() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& PlayerNameLabel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& PlayerLevelLabel() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& Head() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& FIXCountLabel() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& MOVECountLabel() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& FLYCountLabel() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoundResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareShowData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(TrainingGameEndHud*))(Il2CppBase() + 0x3D8D440))(this);
	}
	template <typename T = uint64_t> T get_ActiveGameHudState() {
		return ((T (*)(TrainingGameEndHud*))(Il2CppBase() + 0x3D8D448))(this);
	}
	template <typename T = void> T ShowRoundResult(uintptr_t inGameResult) {
		return ((T (*)(TrainingGameEndHud*, uintptr_t))(Il2CppBase() + 0x3D8D454))(this, inGameResult);
	}
	template <typename T = uintptr_t> T PrepareShowData() {
		return ((T (*)(TrainingGameEndHud*))(Il2CppBase() + 0x3D8D904))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowRoundResult(uintptr_t P0) {
		return ((T (*)(TrainingGameEndHud*, uintptr_t))(Il2CppBase() + 0x3D8DB80))(this, P0);
	}

};

}
