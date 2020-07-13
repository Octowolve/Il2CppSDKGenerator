#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.TrainingGame {

class TrainingGameUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.TrainingGame", "TrainingGameUIScene"));
	}

	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfNeedVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableSelectBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEndRoundView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeaveDroppedPickUpTrigger() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyShowLoadoutPvpGameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T IfNeedVoice() {
		return ((T (*)(TrainingGameUIScene*))(Il2CppBase() + 0x3D90178))(this);
	}
	template <typename T = bool> T get_NeedShowExpBuffHUD() {
		return ((T (*)(TrainingGameUIScene*))(Il2CppBase() + 0x3D90218))(this);
	}
	template <typename T = bool> T EnableSelectBag() {
		return ((T (*)(TrainingGameUIScene*))(Il2CppBase() + 0x3D90220))(this);
	}
	template <typename T = uintptr_t> T get_ScoreViewControllerType() {
		return ((T (*)(TrainingGameUIScene*))(Il2CppBase() + 0x3D902C0))(this);
	}
	template <typename T = void> T ShowEndRoundView(uintptr_t roundResult) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D9037C))(this, roundResult);
	}
	template <typename T = void> T OnRoundEnded(uintptr_t msg) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D9041C))(this, msg);
	}
	template <typename T = void> T OnLeaveDroppedPickUpTrigger(uintptr_t inMsg) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D907B4))(this, inMsg);
	}
	template <typename T = void> T OnNotifyShowLoadoutPvpGameView(uintptr_t message) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D90870))(this, message);
	}
	template <typename T = void> static T OnRoundEndedm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x3D90B50))(0);
	}
	template <typename T = bool> T xLuaBaseProxy_IfNeedVoice() {
		return ((T (*)(TrainingGameUIScene*))(Il2CppBase() + 0x3D90BF4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_EnableSelectBag() {
		return ((T (*)(TrainingGameUIScene*))(Il2CppBase() + 0x3D90BFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEndRoundView(uintptr_t P0) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D90C04))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnded(uintptr_t P0) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D90C0C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnLeaveDroppedPickUpTrigger(uintptr_t P0) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D90C14))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyShowLoadoutPvpGameView(uintptr_t P0) {
		return ((T (*)(TrainingGameUIScene*, uintptr_t))(Il2CppBase() + 0x3D90C1C))(this, P0);
	}

};

}
