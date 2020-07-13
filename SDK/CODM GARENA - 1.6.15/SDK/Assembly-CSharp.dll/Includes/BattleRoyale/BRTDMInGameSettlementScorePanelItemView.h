#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRTDMInGameSettlementScorePanelItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRTDMInGameSettlementScorePanelItemView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& RankSprites() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& GeneralRankLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LadderSprite() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& PlayerNameLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PlayerLevelLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& KillCountLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& DeadCountLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& AssistCountLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SeflSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& MvpSprite() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& FmvpSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScoreItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMvp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRankItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetScoreItemView(int32_t inIndex, uintptr_t inScoreData) {
		return ((T (*)(BRTDMInGameSettlementScorePanelItemView*, int32_t, uintptr_t))(Il2CppBase() + 0x261CC40))(this, inIndex, inScoreData);
	}
	template <typename T = void> T SetMvp(uintptr_t inScoreData) {
		return ((T (*)(BRTDMInGameSettlementScorePanelItemView*, uintptr_t))(Il2CppBase() + 0x261CEE0))(this, inScoreData);
	}
	template <typename T = void> T SetRankItemView(int32_t inIndex) {
		return ((T (*)(BRTDMInGameSettlementScorePanelItemView*, int32_t))(Il2CppBase() + 0x261D344))(this, inIndex);
	}

};

}
