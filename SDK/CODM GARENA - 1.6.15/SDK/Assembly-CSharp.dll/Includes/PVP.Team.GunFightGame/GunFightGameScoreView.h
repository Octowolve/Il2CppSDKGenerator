#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightGameScoreView"));
	}

	template <typename T = uintptr_t> T& BlueInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScoreIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOccupiedEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(GunFightGameScoreView*, uintptr_t))(Il2CppBase() + 0x4024778))(this, resetType);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(GunFightGameScoreView*))(Il2CppBase() + 0x402487C))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(GunFightGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x4024A48))(this, data, force);
	}
	template <typename T = void> T UpdateScoreIcon(uintptr_t data) {
		return ((T (*)(GunFightGameScoreView*, uintptr_t))(Il2CppBase() + 0x4024B78))(this, data);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(GunFightGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4024F6C))(this, leadingState, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(GunFightGameScoreView*))(Il2CppBase() + 0x4025020))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(GunFightGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x40250B8))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(GunFightGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x40251AC))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(GunFightGameScoreView*))(Il2CppBase() + 0x40252BC))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(GunFightGameScoreView*))(Il2CppBase() + 0x402535C))(this);
	}
	template <typename T = void> T PlayOccupiedEffect(int32_t domAreaID) {
		return ((T (*)(GunFightGameScoreView*, int32_t))(Il2CppBase() + 0x40253F4))(this, domAreaID);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(GunFightGameScoreView*, uintptr_t))(Il2CppBase() + 0x4025494))(this, P0);
	}

};

}
