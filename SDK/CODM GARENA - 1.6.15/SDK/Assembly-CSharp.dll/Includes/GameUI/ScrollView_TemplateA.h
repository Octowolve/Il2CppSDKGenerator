#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ScrollViewTemplateA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ScrollView_TemplateA"));
	}

	template <typename T = Il2CppString*> static T& PLAYER_LEVEL_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& WEAPON_LEVEL_ICON() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& ContainerRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelLevel_Important() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& SpriteQuality_Important() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon_Important() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteLevelIcon_Important() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteSelect_Important() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& WidgetRewarded() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& WidgetNotReward() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& Btn_Important() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ReddotObj() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NewFlagObj() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& scrollPanel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& WidgetScrollViewBg() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& GetNumberLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& MileStoneObj() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MileStoneWidget() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& DragArrowDragObj() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& DragArrowTutorialObj() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& DoubleItemWidget() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& Item1() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& Item2() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& AnimationDispatcher() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> static T& MILE_STONE_ITEM_WIDTH() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MILE_STONE_ITEM_HEIGHT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CurrentIndex() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = bool> T& m_CurrentState() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = bool> T& isUnLock() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetImportantView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshSelectView_AfterSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentImportantLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T SetDefault() {
		return ((T (*)(ScrollViewTemplateA*))(Il2CppBase() + 0x447C080))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScrollViewTemplateA*))(Il2CppBase() + 0x44828A8))(this);
	}
	template <typename T = void> T SetImportantView(uintptr_t data) {
		return ((T (*)(ScrollViewTemplateA*, uintptr_t))(Il2CppBase() + 0x4482C08))(this, data);
	}
	template <typename T = void> T SetIcon(Il2CppList<uintptr_t>* data) {
		return ((T (*)(ScrollViewTemplateA*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4482F90))(this, data);
	}
	template <typename T = void> T RefreshSelectView_AfterSelect(int32_t level) {
		return ((T (*)(ScrollViewTemplateA*, int32_t))(Il2CppBase() + 0x447DAD4))(this, level);
	}
	template <typename T = int32_t> T GetCurrentImportantLevel() {
		return ((T (*)(ScrollViewTemplateA*))(Il2CppBase() + 0x447DA20))(this);
	}

};

}
