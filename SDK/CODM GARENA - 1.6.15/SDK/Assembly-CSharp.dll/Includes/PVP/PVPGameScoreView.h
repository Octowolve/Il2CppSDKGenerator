#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGameScoreView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGameScoreView"));
	}

	template <typename T = uintptr_t> T& BlueInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& m_LastShowRound() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_ShowGameTime() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCampInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateScore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRoundEndedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLeadingStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCurRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCustomTimeWarningInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurRoundLabelState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T WillShow() {
		return ((T (*)(PVPGameScoreView*))(Il2CppBase() + 0x2AEEB58))(this);
	}
	template <typename T = void> T Reset(uintptr_t resetType) {
		return ((T (*)(PVPGameScoreView*, uintptr_t))(Il2CppBase() + 0x2AEEC90))(this, resetType);
	}
	template <typename T = void> T SetCampInfo() {
		return ((T (*)(PVPGameScoreView*))(Il2CppBase() + 0x2AEEE74))(this);
	}
	template <typename T = void> T UpdateScore(uintptr_t data, bool force) {
		return ((T (*)(PVPGameScoreView*, uintptr_t, bool))(Il2CppBase() + 0x2AEEF38))(this, data, force);
	}
	template <typename T = void> T UpdateRoundEndedStatus() {
		return ((T (*)(PVPGameScoreView*))(Il2CppBase() + 0x2AEF064))(this);
	}
	template <typename T = void> T UpdateLeadingStatus(uintptr_t status, uintptr_t data) {
		return ((T (*)(PVPGameScoreView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AEF2E0))(this, status, data);
	}
	template <typename T = void> T UpdatePlayerCount() {
		return ((T (*)(PVPGameScoreView*))(Il2CppBase() + 0x2AEF3AC))(this);
	}
	template <typename T = void> T UpdateGameTime(int32_t totalTime, int32_t leftTime) {
		return ((T (*)(PVPGameScoreView*, int32_t, int32_t))(Il2CppBase() + 0x2AEF468))(this, totalTime, leftTime);
	}
	template <typename T = void> T UpdateCurRound() {
		return ((T (*)(PVPGameScoreView*))(Il2CppBase() + 0x2AEF54C))(this);
	}
	template <typename T = void> T SetTimeColor(uintptr_t color, float interval) {
		return ((T (*)(PVPGameScoreView*, uintptr_t, float))(Il2CppBase() + 0x2AEF870))(this, color, interval);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomTimeWarningInfo() {
		return ((T (*)(PVPGameScoreView*))(Il2CppBase() + 0x2AEF970))(this);
	}
	template <typename T = void> T SetCurRoundLabelState(bool show) {
		return ((T (*)(PVPGameScoreView*, bool))(Il2CppBase() + 0x2AEFA10))(this, show);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(PVPGameScoreView*))(Il2CppBase() + 0x2AEFB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset(uintptr_t P0) {
		return ((T (*)(PVPGameScoreView*, uintptr_t))(Il2CppBase() + 0x2AEFB44))(this, P0);
	}

};

}
