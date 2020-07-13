#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class RoomBrLadderView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "RoomBrLadderView"));
	}

	template <typename T = uintptr_t> T& WidgetIsLadder() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& WidgetLadderInfo() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& SpriteRank() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& SpriteFG() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& LabelRankExp() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ProgressRankExp() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& GoRankProtection() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& TutorialBtn() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& HighlightFPSTPS() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& HighlightPlay() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& BpTaskTipsBtn() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& CompleteBpTaskNum() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& EventRewardTipsBtn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& EventRewarTips() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& TestBtn() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& PrototypeBtn() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& AIPlaygroundBtn() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& BtnLadderStat() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& WidgetRootLoadout() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& WidgetRootCreateRoom() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& BtnCreateRoom() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& WidgetRoot20vs20() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& BtnCreate20vs20() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& WidgetRootBtns() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& BtnSniperChallenge() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& DeviceWarningWidget() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& SimulatorIcon() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& GamepadIcon() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& btnDynamicDownload() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAutoFill() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentMatchType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionBottomRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RepositionBottomLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShortCodeInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCompleteBpTaskNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BpTipsIsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSimulatorIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_ColorInProtection() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D729F8))(this);
	}
	template <typename T = uintptr_t> T get_ColorNormal() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D72A10))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D72A28))(this);
	}
	template <typename T = void> T SetAutoFill(bool bAuto) {
		return ((T (*)(RoomBrLadderView*, bool))(Il2CppBase() + 0x3D6F01C))(this, bAuto);
	}
	template <typename T = void> T SetCurrentMatchType(int32_t matchType) {
		return ((T (*)(RoomBrLadderView*, int32_t))(Il2CppBase() + 0x3D6F110))(this, matchType);
	}
	template <typename T = void> T RepositionBottomRight() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D72BB0))(this);
	}
	template <typename T = void> T RepositionBottomLeft() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D69D80))(this);
	}
	template <typename T = void> T SetShortCodeInfo(bool bShow, int32_t ShortCode) {
		return ((T (*)(RoomBrLadderView*, bool, int32_t))(Il2CppBase() + 0x3D72F2C))(this, bShow, ShortCode);
	}
	template <typename T = void> T SetRankInfo() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D6BF70))(this);
	}
	template <typename T = void> T SetCompleteBpTaskNum(int32_t CompleteNum) {
		return ((T (*)(RoomBrLadderView*, int32_t))(Il2CppBase() + 0x3D70740))(this, CompleteNum);
	}
	template <typename T = void> T BpTipsIsActive(bool isActive) {
		return ((T (*)(RoomBrLadderView*, bool))(Il2CppBase() + 0x3D705F4))(this, isActive);
	}
	template <typename T = void> T InitSimulatorIcon() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D69990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(RoomBrLadderView*))(Il2CppBase() + 0x3D730C8))(this);
	}

};

}
