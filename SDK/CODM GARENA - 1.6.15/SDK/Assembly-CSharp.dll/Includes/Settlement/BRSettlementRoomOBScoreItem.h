#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BRSettlementRoomOBScoreItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BRSettlementRoomOBScoreItem"));
	}

	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LeftRank() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Team1() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& TeamName1() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& Team2() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TeamName2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Team3() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& TeamName3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TeamOther() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TeamNameOther() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& RankLabel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Kill() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SurviveTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> static T& KillPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& SurviveTimePercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& BeginPosShift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScoreInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_sds() {
		return ((T (*)(BRSettlementRoomOBScoreItem*))(Il2CppBase() + 0x3C338B8))(this);
	}
	template <typename T = void> T SetScoreInfo(uintptr_t teamData) {
		return ((T (*)(BRSettlementRoomOBScoreItem*, uintptr_t))(Il2CppBase() + 0x3C33954))(this, teamData);
	}
	template <typename T = void> T AdaptItem(int32_t PanelWidth) {
		return ((T (*)(BRSettlementRoomOBScoreItem*, int32_t))(Il2CppBase() + 0x3C34054))(this, PanelWidth);
	}
	template <typename T = Il2CppVector3> T GetPos(float percent, uintptr_t t, uintptr_t BG) {
		return ((T (*)(BRSettlementRoomOBScoreItem*, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C343B0))(this, percent, t, BG);
	}

};

}
