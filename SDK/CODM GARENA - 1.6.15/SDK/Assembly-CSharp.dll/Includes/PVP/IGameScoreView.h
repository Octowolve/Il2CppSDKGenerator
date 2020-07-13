#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class IGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "IGameScoreView"));
	}


	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(IGameScoreView*, uintptr_t))(Il2CppBase() + 0x0))(this, resetType);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(IGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, data, force);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t leadingState, uintptr_t data) {
		return ((T (*)(IGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, leadingState, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(IGameScoreView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(IGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x0))(this, totalTime, leftTime);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(IGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x0))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(IGameScoreView*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(IGameScoreView*))(Il2CppBase() + 0x0))(this);
	}

};

}
