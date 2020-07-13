#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlaylistConfigClientBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlaylistConfigClientBase"));
	}

	template <typename T = bool> T& bRedDot() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bSelect() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = int32_t> T& matchType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& playlistId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& numOfPlayer() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& playlistNameLocId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& playListPlayerNumLocId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& playListDescLocId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& showType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& showPirority() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& levelUnlock() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ladderUnlock() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& fakeLadderUnlock() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& TagNameLocId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& TagSpriteName() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& playlistSpriteName() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& playlistCdnPath() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& openType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Loc_OpenTimeDesc() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& openTimeList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& showTimeList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& BubblePriority() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<int32_t>*> T& BubbleConditionList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& BubbleType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& BubbleDesc() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& BubbleEnable() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& BubbleStartTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& BubbleEndTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& KeyModeType() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& ExpBuffValue() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& RankScoreBuffValue() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& currentState() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& remainTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& nextOpenTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInPreTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInPreTime_FixedTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedComputeRedDotState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeIsStateOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBubbleValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBubbleReachTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetArrowXpSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T ComputeCurrentState(double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, int32_t matchType, uint32_t lastTabClickTimeStamp, int32_t ladderLevel, bool bMultiSelect) {
		return ((T (*)(PlaylistConfigClientBase*, double, uintptr_t, int32_t, uintptr_t, int32_t, uint32_t, int32_t, bool))(Il2CppBase() + 0x47FB700))(this, serverTime, dateTime, dayOfWeek, levelInfo, matchType, lastTabClickTimeStamp, ladderLevel, bMultiSelect);
	}
	template <typename T = bool> T IsInPreTime(int32_t serverTime) {
		return ((T (*)(PlaylistConfigClientBase*, int32_t))(Il2CppBase() + 0x47FB84C))(this, serverTime);
	}
	template <typename T = bool> T IsInPreTime_FixedTime(int32_t serverTime) {
		return ((T (*)(PlaylistConfigClientBase*, int32_t))(Il2CppBase() + 0x47FCFF0))(this, serverTime);
	}
	template <typename T = bool> T IsNeedComputeRedDotState(int32_t matchType) {
		return ((T (*)(PlaylistConfigClientBase*, int32_t))(Il2CppBase() + 0x47FD500))(this, matchType);
	}
	template <typename T = void> T ComputeIsStateOpen(double serverTime, uintptr_t levelInfo, uint32_t lastTabClickTimeStamp, int32_t ladderLevel) {
		return ((T (*)(PlaylistConfigClientBase*, double, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x47FB91C))(this, serverTime, levelInfo, lastTabClickTimeStamp, ladderLevel);
	}
	template <typename T = bool> T IsBubbleValid(uintptr_t modeCategory, int32_t matchType, double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, uint32_t lastTabClickTimeStamp, int32_t ladderLevel) {
		return ((T (*)(PlaylistConfigClientBase*, uintptr_t, int32_t, double, uintptr_t, int32_t, uintptr_t, uint32_t, int32_t))(Il2CppBase() + 0x47FD5BC))(this, modeCategory, matchType, serverTime, dateTime, dayOfWeek, levelInfo, lastTabClickTimeStamp, ladderLevel);
	}
	template <typename T = bool> T IsBubbleReachTarget() {
		return ((T (*)(PlaylistConfigClientBase*))(Il2CppBase() + 0x47FD934))(this);
	}
	template <typename T = Il2CppString*> T GetArrowXpSpriteName() {
		return ((T (*)(PlaylistConfigClientBase*))(Il2CppBase() + 0x47FDB58))(this);
	}

};

}
