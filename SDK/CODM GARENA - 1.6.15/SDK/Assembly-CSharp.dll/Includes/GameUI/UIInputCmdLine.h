#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIInputCmdLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIInputCmdLine"));
	}

	template <typename T = uintptr_t> T& m_PopupCamp() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_PopupBotID() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_PopupBotNum() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CmdAPVP() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_LabelBotCamp() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_LabelBotID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_LabelBotNum() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CmdPVE() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ZombiePopupList() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& LevelPopUpList() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ChipPopUpList() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& chipChooseSelection() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uint64_t>*> T& m_ZBName2RoleID() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CmdBR() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CmdUSA() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& CmdGhost() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& m_CmdShowBtn() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_ConvertInputBarBtn() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_CmdToggle() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& m_CmdELO() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_ELOInfoLabel() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& m_CommandInput() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_PlayerInfoLabel() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = bool> T& m_ShowCommandBar() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& CmdBtnGO() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& CmdPVEBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& CmdAPVPBtn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& CmdBRBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& CmdGhostBtn() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& CmdUSABtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BRAddItemTemplate() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& USAAddItemTemplate() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& PVEAddItemTemplate() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& UIInputCmdLineBRPreset() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& UIInputCmdLinePVEWeaponPreset() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& UIInputCmdLinePVEBuffPreset() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& UIInputCmdLinePVESpecialPreset() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& BRInputX() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& BRInputZ() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& BRInputParam() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& GetPawnPosBtn() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& GetMarkPosBtn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& BRTPSAndFpsChangeBtn() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& BRObserveAIBtn() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& BREndObserveAIBtn() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& ToggleDisShowBtn() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_StepoffsetLabel() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& m_VelocityLabel() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& m_VelocityButton() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& bShowVelocity() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& m_CarBombHPButton() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = bool> T& bShowCarBombInfo() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
