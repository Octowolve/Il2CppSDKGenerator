#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementDetailKDAPlayerItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementDetailKDAPlayerItemView"));
	}

	template <typename T = uintptr_t> T& RootAutoStretch() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& LabelKills() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& LabelDeath() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& LabelAssist() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& LabelScore() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& Rank1() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& Rank2() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& Rank3() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& RankOther() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& TeamTag() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetPlayerStats(uintptr_t gameMode, uintptr_t psd, uint64_t matchGuid, bool BlueTeam, bool isTeammate, uintptr_t mCutPanel) {
		return ((T (*)(SettlementDetailKDAPlayerItemView*, uintptr_t, uintptr_t, uint64_t, bool, bool, uintptr_t))(Il2CppBase() + 0x2953F14))(this, gameMode, psd, matchGuid, BlueTeam, isTeammate, mCutPanel);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t psd, uintptr_t mode) {
		return ((T (*)(SettlementDetailKDAPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x295490C))(this, psd, mode);
	}
	template <typename T = void> T SetRank(int32_t rank) {
		return ((T (*)(SettlementDetailKDAPlayerItemView*, int32_t))(Il2CppBase() + 0x2954098))(this, rank);
	}
	template <typename T = void> T xLuaBaseProxy_SetPlayerInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(SettlementDetailKDAPlayerItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x29554B8))(this, P0, P1);
	}

};

}
