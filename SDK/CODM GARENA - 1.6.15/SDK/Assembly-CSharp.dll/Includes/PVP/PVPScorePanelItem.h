#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPScorePanelItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPScorePanelItem"));
	}

	template <typename T = uintptr_t> T& WidgetLadder() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WidgetNotLadder() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& labelPlayerName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LabelLadderPlayerName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& avatarPic() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& LabelLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SpriteLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& label_Score() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& SpriteRankIcon() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& TDMCN() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DOMCN() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& HPCN() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SDCN() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& TDMEN() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& DOMEN() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& HPEN() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& SDEN() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& MLKTFCN() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& MLKTFEN() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& CTFCN() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& CTFEN() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& GFCN() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& GFEN() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& KCCN() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& KCEN() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& DuelCN() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& DuelEN() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelKill() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelDetah() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelAssist() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelCapture() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelDefend() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelReturn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelPlants() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelDefuses() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelDamage() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelKillConfirm() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& LabelKillDeny() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& widgetHighLightBg() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& widgetNormalBG() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& widgetDeadBg() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& widgetBombCarrier() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& profileRoot() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_CurGameMode() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& m_PicId() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = int32_t> T& m_FrameId() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppString*> T& m_PicUrl() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& WeaponLevelSprite() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& WeaponLevelCN() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& WeaponLevelEN() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLabelTexts() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetPlayerStats(uintptr_t psd, uintptr_t gameMode, uint32_t c4BombCarrierID, bool c4BombShow, bool bLadder) {
		return ((T (*)(PVPScorePanelItem*, uintptr_t, uintptr_t, uint32_t, bool, bool))(Il2CppBase() + 0x2B14340))(this, psd, gameMode, c4BombCarrierID, c4BombShow, bLadder);
	}
	template <typename T = void> T SetPlayerIcon(uintptr_t psd) {
		return ((T (*)(PVPScorePanelItem*, uintptr_t))(Il2CppBase() + 0x2B15848))(this, psd);
	}
	template <typename T = void> T SetDead(bool bDead) {
		return ((T (*)(PVPScorePanelItem*, bool))(Il2CppBase() + 0x2B163F0))(this, bDead);
	}
	template <typename T = void> T SetWidgets(uintptr_t psd) {
		return ((T (*)(PVPScorePanelItem*, uintptr_t))(Il2CppBase() + 0x2B15A84))(this, psd);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t psd, bool bLadder) {
		return ((T (*)(PVPScorePanelItem*, uintptr_t, bool))(Il2CppBase() + 0x2B15BC0))(this, psd, bLadder);
	}
	template <typename T = void> T SetLabelTexts(uintptr_t psd) {
		return ((T (*)(PVPScorePanelItem*, uintptr_t))(Il2CppBase() + 0x2B14668))(this, psd);
	}

};

}
