#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BombGameFunctionButtonsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BombGameFunctionButtonsView"));
	}

	template <typename T = uintptr_t> T& mBombGameClass() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_UsingItem() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_TotalUsingTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_CurUsingTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsClickBombBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& m_WaitHide() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = bool> T& m_LastPrepare() {
		return *(T*)((uintptr_t)this + 0x8E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__InitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__DeInitSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayDefusingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopDefusingSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__PlayDefusedSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyPrepareUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayPlacingC4BombBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayDefuseC4BombBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombGameC4BombHasBeenPlanted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombGameC4BombHasBeenDefused() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombGameC4BombHasBeenDefusedByMyself() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBombGameRoundEnded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UsingItemInVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUsingItemInVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateProgessBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerShowContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T _InitSound() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D7953C))(this);
	}
	template <typename T = void> T _DeInitSound() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D795D4))(this);
	}
	template <typename T = void> T _PlayDefusingSound() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D7966C))(this);
	}
	template <typename T = void> T _StopDefusingSound() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D79704))(this);
	}
	template <typename T = void> T _PlayDefusedSound() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D7979C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D79834))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D79B9C))(this);
	}
	template <typename T = void> T OnNotifyPrepareUseItem(uintptr_t msg) {
		return ((T (*)(BombGameFunctionButtonsView*, uintptr_t))(Il2CppBase() + 0x2D79C98))(this, msg);
	}
	template <typename T = void> T DisplayPlacingC4BombBtn(bool inIsShow) {
		return ((T (*)(BombGameFunctionButtonsView*, bool))(Il2CppBase() + 0x2D79F04))(this, inIsShow);
	}
	template <typename T = void> T DisplayDefuseC4BombBtn(bool inIsShow) {
		return ((T (*)(BombGameFunctionButtonsView*, bool))(Il2CppBase() + 0x2D7A1B4))(this, inIsShow);
	}
	template <typename T = void> T OnNotifyBombGameC4BombHasBeenPlanted(uintptr_t Msg) {
		return ((T (*)(BombGameFunctionButtonsView*, uintptr_t))(Il2CppBase() + 0x2D7A464))(this, Msg);
	}
	template <typename T = void> T OnNotifyBombGameC4BombHasBeenDefused(uintptr_t Msg) {
		return ((T (*)(BombGameFunctionButtonsView*, uintptr_t))(Il2CppBase() + 0x2D7A8A0))(this, Msg);
	}
	template <typename T = void> T OnNotifyBombGameC4BombHasBeenDefusedByMyself(uintptr_t Msg) {
		return ((T (*)(BombGameFunctionButtonsView*, uintptr_t))(Il2CppBase() + 0x2D7AAB4))(this, Msg);
	}
	template <typename T = void> T OnNotifyBombGameRoundEnded(uintptr_t Msg) {
		return ((T (*)(BombGameFunctionButtonsView*, uintptr_t))(Il2CppBase() + 0x2D7AB60))(this, Msg);
	}
	template <typename T = void> T UsingItemInVolume(float usingTime) {
		return ((T (*)(BombGameFunctionButtonsView*, float))(Il2CppBase() + 0x2D7AC24))(this, usingTime);
	}
	template <typename T = void> T CancelUsingItemInVolume() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D7ADB0))(this);
	}
	template <typename T = void> T UpdateProgessBar(float dt) {
		return ((T (*)(BombGameFunctionButtonsView*, float))(Il2CppBase() + 0x2D7B070))(this, dt);
	}
	template <typename T = void> T TimerShowContent(Il2CppString* content, float time) {
		return ((T (*)(BombGameFunctionButtonsView*, Il2CppString*, float))(Il2CppBase() + 0x2D7A674))(this, content, time);
	}
	template <typename T = void> T HideContent() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D7B374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D7B530))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(BombGameFunctionButtonsView*))(Il2CppBase() + 0x2D7B534))(this);
	}

};

}
