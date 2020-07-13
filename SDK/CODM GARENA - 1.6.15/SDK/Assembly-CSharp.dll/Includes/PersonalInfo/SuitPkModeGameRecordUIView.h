#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PersonalInfo {

class SuitPkModeGameRecordUIView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PersonalInfo", "SuitPkModeGameRecordUIView"));
	}

	template <typename T = uintptr_t> T& m_ZhendiKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ZhendiWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_ZhendiWinRateLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_JishuangTeamKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_JishuangTeamWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_JishuangTeamWinRateLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_BioKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& m_BioWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& m_BioWinRateLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_CatKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_CatWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_CatWinRateLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_SaviorKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& m_SaviorWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& m_SaviorWinRateLabel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_InifiteKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_InifiteWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_InifiteWinRateLabel() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_GrenadeKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_GrenadeWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_GrenadeWinRateLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_BigHeadKillDeathLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_BigHeadWinFailedLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& m_BigHeadWinRateLabel() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& m_TotalKillDeathCountLabel() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& m_TotalWinFailedCountLabel() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_ShotHeadKillCountLabel() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& m_BombKillCountLabel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& m_KnifeKillCountLabel() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& m_BackgroundSprite() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& m_CloseButton() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& m_KDLabel() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& m_WinRateLabel() {
		return *(T*)((uintptr_t)this + 0xFC);
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
		return ((T (*)(SuitPkModeGameRecordUIView*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3F0ABF8))(this, totalkill, totaldeath, totalwin, totalfailed, shotheadcount, bombkillcount, knifekillcount);
	}
	template <typename T = void> T UpdateGameRecordShow(int32_t type, int32_t kill, int32_t death, int32_t win, int32_t failed, int32_t winrate) {
		return ((T (*)(SuitPkModeGameRecordUIView*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3F0B030))(this, type, kill, death, win, failed, winrate);
	}
	template <typename T = void> T ResetViewSize(int32_t width, int32_t height) {
		return ((T (*)(SuitPkModeGameRecordUIView*, int32_t, int32_t))(Il2CppBase() + 0x3F0BB38))(this, width, height);
	}

};

}
