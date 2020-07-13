#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSpvpPlaylistSelectorWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSpvpPlaylistSelectorWindowView"));
	}

	template <typename T = uintptr_t> T& GridFirstLevelTabs() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PlaylistTypeItems() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& WidgetLadderInfo() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SpritePlayerRankIcon() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& LabelRankDesc() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LabelLadderMapDesc() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& LabelCantNotSelectMapTip() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ContainerTip_Random() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& LabelLadder_PlaylistTip() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& LabelLadder_MapTip() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ContainerTip_MultipleChoose() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& PlaylistOnly_MultipleChoose() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SpriteIsSelected() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& BtnSelectAll() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BtnModeSingle() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ModeSingleSelected() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BtnModeMultiple() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ModeMultipleSelected() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& WidgetSelectorSwitch() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& BtnPlayList() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& WidgetChild() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& WidgetPlaylist_Ladder() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& ContainerPlaylistHighlight_Ladder() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& LabelNormalFixedRandom_PlaylistName() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& LabelHighlightFixedRandom_PlaylsitName() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& WidgetSingleChoose_Normal() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& WidgetSingleChoose_Highlight() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& LabelNormalPlaylistName_EnableSelect_Ladder() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& LabelHighlightPlaylistName_EnableSelect_Ladder() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& WidgetMultipleChoose_Normal() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& WidgetMultipleChoose_Highlight() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& LabelNumOfSelected_Normal() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& LabelNumOfSelected_Highlight() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& LabelPlaylistName_MultipleChoose_Normal() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& LabelPlaylistName_MultipleChoose_Highlight() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& SpritePlaylistIcon_Ladder() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& WidgetMultipleChoose_NotLadder() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& BtnModeSingle_NotLadder() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& ModeSingleSelected_NotLadder() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& BtnModeMultiple_NotLadder() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ModeMultipleSelected_NotLadder() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& BtnSelectAll_NotLadder() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& SpriteIsSelected_NotLadder() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& LabelSelectAll_NotLadder() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& WidgetMapLock() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& WidgetMPMultipleTips() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& WidgetPlaylist_NotLadder() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& WidgetPlaylistHighlight_NotLadder() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& LabelNormalPlaylistName() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& LabelHighlightPlaylistName() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& SprtiePlaylistIcon() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& WidgetMap_Ladder() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& WidgetMapHighlight_Ladder() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& WidgetMap_NotLadder() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& WidgetMapHighlight_NotLadder() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& BtnMap() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& LabelNormalMapName() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& LabelHighlightMapName() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> T& SprtieMapResource() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& WidgetMapHighlight() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
