#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ModeMatching {

class PVPModePlayerListItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ModeMatching", "PVPModePlayerListItemView"));
	}

	template <typename T = uintptr_t> T& WidgetMatch() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NickName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& WidgetLadder() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelNickNameLadder() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& MMRValue() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& HeadIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& RankIcon() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& RankIconBG() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& RankName() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& RankNameCalWidth() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& FgSelf() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& FgBlue() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& FgRed() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NormalCampSprite() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& MySelfCampSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& NormalRoot() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& NoneRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetBg(bool isSelf) {
		return ((T (*)(PVPModePlayerListItemView*, bool))(Il2CppBase() + 0x330A838))(this, isSelf);
	}
	template <typename T = void> T SetProgress(float progress, bool showPercent) {
		return ((T (*)(PVPModePlayerListItemView*, float, bool))(Il2CppBase() + 0x330B0CC))(this, progress, showPercent);
	}
	template <typename T = void> T SetFg(bool isSelf, bool isBlueTeam) {
		return ((T (*)(PVPModePlayerListItemView*, bool, bool))(Il2CppBase() + 0x330A92C))(this, isSelf, isBlueTeam);
	}
	template <typename T = void> T SetInfo(Il2CppString* nickName, Il2CppString* level, Il2CppString* rankIcon, Il2CppString* rankName, Il2CppString* headIcon, Il2CppString* campSprite, bool showRankIconBG) {
		return ((T (*)(PVPModePlayerListItemView*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x330AA60))(this, nickName, level, rankIcon, rankName, headIcon, campSprite, showRankIconBG);
	}

};

}
