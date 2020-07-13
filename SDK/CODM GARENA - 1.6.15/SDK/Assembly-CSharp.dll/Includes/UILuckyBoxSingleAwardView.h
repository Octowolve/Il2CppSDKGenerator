#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UILuckyBoxSingleAwardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UILuckyBoxSingleAwardView"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& AnchorList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& callingCardTemplate() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& headAvater() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ChipFlagIconObj() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ChipFlagTagObj() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ChipFlagTagNumLabel() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& LabelGroup() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& OpenBoxAgainBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& OkBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ContinueBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& BtnGroup() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& NameObj() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& NameQuality() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& OwnObj() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& TurnToMailObj() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& DecomposeObj() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& DecomposeSprite() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& DecomposeLabel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& AgainBuyContainer() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& CurrencyIconSprite() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& CurrencyPriceLabel() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& SingleAgainOpenTreasureBoxBtnLabel() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& AgainOpenTreasureBoxBtnBg() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show3DScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AnchorsResetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAnchors() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Show3DScene(uintptr_t item) {
		return ((T (*)(UILuckyBoxSingleAwardView*, uintptr_t))(Il2CppBase() + 0x2F62914))(this, item);
	}
	template <typename T = void> T ResetUI() {
		return ((T (*)(UILuckyBoxSingleAwardView*))(Il2CppBase() + 0x2F63074))(this);
	}
	template <typename T = void> T SetViewPosition(Il2CppVector3 pos) {
		return ((T (*)(UILuckyBoxSingleAwardView*, Il2CppVector3))(Il2CppBase() + 0x2F658F8))(this, pos);
	}
	template <typename T = void> T ResetViewParam(bool gotoOther) {
		return ((T (*)(UILuckyBoxSingleAwardView*, bool))(Il2CppBase() + 0x2F65400))(this, gotoOther);
	}
	template <typename T = void> T AnchorsResetCamera() {
		return ((T (*)(UILuckyBoxSingleAwardView*))(Il2CppBase() + 0x2F61C04))(this);
	}
	template <typename T = void> T ResetAnchors() {
		return ((T (*)(UILuckyBoxSingleAwardView*))(Il2CppBase() + 0x2F65770))(this);
	}
	template <typename T = void> T SetItemIcon(int32_t itemID, bool isShowItemIcon) {
		return ((T (*)(UILuckyBoxSingleAwardView*, int32_t, bool))(Il2CppBase() + 0x2F63A14))(this, itemID, isShowItemIcon);
	}

};

}
