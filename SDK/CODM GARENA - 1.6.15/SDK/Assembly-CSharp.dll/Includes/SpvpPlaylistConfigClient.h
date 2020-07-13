#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpvpPlaylistConfigClient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpvpPlaylistConfigClient"));
	}

	template <typename T = int32_t> T& GameModeId() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& playlistType() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& detailType() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& numOfInvite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& isMapEnableSelect() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& enableTutorialVideo() {
		return *(T*)((uintptr_t)this + 0x9D);
	}
	template <typename T = int32_t> T& score_limit_default() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& score_limit_lower() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> T& score_limit_upper() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& time_limit_default() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& time_limit_lower() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& time_limit_upper() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& Loc_SettingParam1Desc1() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppString*> T& Loc_SettingParam1Desc2() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppString*> T& Loc_SettingParam2Desc1() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& Loc_SettingParam2Desc2() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& SpecialEntrance() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& bIncludedInFilter() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& selectMapId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mapList() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mapListMustDownload() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeCurrentState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMixModes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSoloMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ComputeCurrentState(double serverTime, uintptr_t dateTime, int32_t dayOfWeek, uintptr_t levelInfo, int32_t matchType, uint32_t lastTabClickTimeStamp, int32_t ladderLevel, bool bMultiSelect) {
		return ((T (*)(SpvpPlaylistConfigClient*, double, uintptr_t, int32_t, uintptr_t, int32_t, uint32_t, int32_t, bool))(Il2CppBase() + 0x4319150))(this, serverTime, dateTime, dayOfWeek, levelInfo, matchType, lastTabClickTimeStamp, ladderLevel, bMultiSelect);
	}
	template <typename T = bool> T IsMixModes() {
		return ((T (*)(SpvpPlaylistConfigClient*))(Il2CppBase() + 0x43193D4))(this);
	}
	template <typename T = bool> T IsSoloMode() {
		return ((T (*)(SpvpPlaylistConfigClient*))(Il2CppBase() + 0x4316258))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ComputeCurrentState(double P0, uintptr_t P1, int32_t P2, uintptr_t P3, int32_t P4, uint32_t P5, int32_t P6, bool P7) {
		return ((T (*)(SpvpPlaylistConfigClient*, double, uintptr_t, int32_t, uintptr_t, int32_t, uint32_t, int32_t, bool))(Il2CppBase() + 0x4319524))(this, P0, P1, P2, P3, P4, P5, P6, P7);
	}

};

}
