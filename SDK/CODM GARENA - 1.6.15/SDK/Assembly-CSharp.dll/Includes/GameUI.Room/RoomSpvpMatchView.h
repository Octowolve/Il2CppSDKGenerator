#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpMatchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpMatchView"));
	}

	template <typename T = uintptr_t> T& TableBtn() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& BtnChangeMatch() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& WidgetMatchNormal() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& WidgetMatchHighlight() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& BtnChangeLadder() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& WidgetLadderNoraml() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& WidgetLadderHighlight() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& WidgetRootTrain() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& BtnChangeTrain() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& WidgetTrainNormal() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& WidgetTrainHighlight() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& BtnRoomCreate() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& WidgetSeasonStatistic() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& BtnSeasonStatistic() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& GoRankInfo() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& SpriteRank() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& SpriteFG() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& LabelRankExp() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& ProgressRankExp() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& GoRankProtection() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& WidgetElectronicSports() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& BtnElectronicSports() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& SpriteLocalImg() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& TextureCdnImg() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& LabelFirstLineDesc() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& LabelSecondLineDesc() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& CountDowmTime() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& BtnLadderLock() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& BtnLadderTime() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& WidgetRangeTime() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = uintptr_t> T& RankMatchRangeTime() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = uintptr_t> T& GoOnlyMaualFire() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = uintptr_t> T& ObjLadderMatchTip() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = uintptr_t> T& BpTaskTipsBtn() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = uintptr_t> T& CompleteBpTaskNum() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = uintptr_t> T& EventRewardTipsBtn() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = uintptr_t> T& EventRewarTips() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = uintptr_t> T& btnDynamicDownload() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> T& DeviceWarningWidget() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = uintptr_t> T& SimulatorIcon() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = uintptr_t> T& GamepadIcon() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& m_TrainRootState() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRoomMatchTypeBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTrainRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshModeMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCompleteBpTaskNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BpTipsIsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSimulatorIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_ColorInProtection() {
		return ((T (*)(RoomSpvpMatchView*))(Il2CppBase() + 0x2110C30))(this);
	}
	template <typename T = uintptr_t> T get_ColorNormal() {
		return ((T (*)(RoomSpvpMatchView*))(Il2CppBase() + 0x2110C18))(this);
	}
	template <typename T = void> T RefreshRoomMatchTypeBtn(bool isRoomOwner, uintptr_t btnState) {
		return ((T (*)(RoomSpvpMatchView*, bool, uintptr_t))(Il2CppBase() + 0x210FD40))(this, isRoomOwner, btnState);
	}
	template <typename T = void> T RefreshTrainRoot(bool isTrainOpen) {
		return ((T (*)(RoomSpvpMatchView*, bool))(Il2CppBase() + 0x2111EE4))(this, isTrainOpen);
	}
	template <typename T = void> T RefreshModeMapInfo(uintptr_t roomDS, bool isRoomOwner, int32_t playlistId, Il2CppList<uint32_t>* mapIds) {
		return ((T (*)(RoomSpvpMatchView*, uintptr_t, bool, int32_t, Il2CppList<uint32_t>*))(Il2CppBase() + 0x210FEA8))(this, roomDS, isRoomOwner, playlistId, mapIds);
	}
	template <typename T = void> T SetCompleteBpTaskNum(int32_t CompleteNum) {
		return ((T (*)(RoomSpvpMatchView*, int32_t))(Il2CppBase() + 0x2116204))(this, CompleteNum);
	}
	template <typename T = void> T BpTipsIsActive(bool isActive) {
		return ((T (*)(RoomSpvpMatchView*, bool))(Il2CppBase() + 0x21160B8))(this, isActive);
	}
	template <typename T = void> T InitSimulatorIcon() {
		return ((T (*)(RoomSpvpMatchView*))(Il2CppBase() + 0x210C244))(this);
	}

};

}
