#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PersonalInfo {

class RankModeGameRecordUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PersonalInfo", "RankModeGameRecordUIView"));
	}

	template <typename T = uintptr_t> T& m_PkKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_PkWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_PkWinRateLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_TeamKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_TeamWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_TeamWinRateLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_BombKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_BombWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_BombWinRateLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_TotalKillDeathCountLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_TotalWinFailedCountLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_ShotHeadKillCountLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_BombKillCountLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_KnifeKillCountLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_CloseButton() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_KDLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_WinRateLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_QiangshaWutuiLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_EtiquetteLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_LaddyRankType() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_LaddyRankIcon() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_LaddySubRankIcon() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_LaddyRankNoLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RankLevelSprites() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTotalAndSpecialData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameRecordShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetTotalAndSpecialData(int32_t totalkill, int32_t totaldeath, int32_t totalwin, int32_t totalfailed, int32_t shotheadcount, int32_t bombkillcount, int32_t knifekillcount) {
		return ((T (*)(RankModeGameRecordUIView*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3F09F70))(this, totalkill, totaldeath, totalwin, totalfailed, shotheadcount, bombkillcount, knifekillcount);
	}
	template <typename T = void> T UpdateGameRecordShow(int32_t type, int32_t kill, int32_t death, int32_t win, int32_t failed, int32_t winrate) {
		return ((T (*)(RankModeGameRecordUIView*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3F0A3A8))(this, type, kill, death, win, failed, winrate);
	}
	template <typename T = void> T ResetViewSize(int32_t width, int32_t height) {
		return ((T (*)(RankModeGameRecordUIView*, int32_t, int32_t))(Il2CppBase() + 0x3F0A884))(this, width, height);
	}

};

}
