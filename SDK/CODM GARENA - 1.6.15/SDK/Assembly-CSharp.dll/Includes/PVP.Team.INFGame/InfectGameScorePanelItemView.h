#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class InfectGameScorePanelItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "InfectGameScorePanelItemView"));
	}

	template <typename T = uintptr_t> T& avatarPic() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelLevel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteLevel() {
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
	template <typename T = uintptr_t> T& ScoreLabel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& widgetHighLightBg() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& widgetNormalBG() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& widgetDeadBg() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& profileRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = int32_t> T& m_PicId() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& m_FrameId() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppString*> T& m_PicUrl() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScoreItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWidgets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetScoreItemView(int32_t inIndex, uintptr_t inScoreData) {
		return ((T (*)(InfectGameScorePanelItemView*, int32_t, uintptr_t))(Il2CppBase() + 0x4039930))(this, inIndex, inScoreData);
	}
	template <typename T = void> T SetPlayerIcon(uintptr_t psd) {
		return ((T (*)(InfectGameScorePanelItemView*, uintptr_t))(Il2CppBase() + 0x4039D60))(this, psd);
	}
	template <typename T = void> T SetWidgets(uintptr_t psd) {
		return ((T (*)(InfectGameScorePanelItemView*, uintptr_t))(Il2CppBase() + 0x4039F9C))(this, psd);
	}
	template <typename T = void> T SetPlayerInfo(uintptr_t psd) {
		return ((T (*)(InfectGameScorePanelItemView*, uintptr_t))(Il2CppBase() + 0x403A0D8))(this, psd);
	}
	template <typename T = void> T SetDead(bool bDead) {
		return ((T (*)(InfectGameScorePanelItemView*, bool))(Il2CppBase() + 0x403A414))(this, bDead);
	}

};

}
