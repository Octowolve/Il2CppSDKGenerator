#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class ZmMpSettlementCardNewItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "ZmMpSettlementCardNewItemView"));
	}

	template <typename T = uintptr_t> T& openCardFx() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& lastingFx() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& OpenAnimator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& SpriteItemIcon() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteItemBg() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelItemName() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LabelItemNum() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& animationName() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& SpriteChip() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsInit() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& m_RemainTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> static T& CARD_PER_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& PossessLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& RefreshCoinAnim() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& labelCoinNum() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CoinIcon() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& FXRefreshCoinSocket() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& CallBack() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_Card() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCardAppearingFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAnimEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayRefreshCoinAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Update() {
		return ((T (*)(ZmMpSettlementCardNewItemView*))(Il2CppBase() + 0x29881B4))(this);
	}
	template <typename T = void> T UpdateView(int32_t index, uintptr_t card) {
		return ((T (*)(ZmMpSettlementCardNewItemView*, int32_t, uintptr_t))(Il2CppBase() + 0x29885C8))(this, index, card);
	}
	template <typename T = void> T InitCard() {
		return ((T (*)(ZmMpSettlementCardNewItemView*))(Il2CppBase() + 0x29882D4))(this);
	}
	template <typename T = void> T SetItem(uintptr_t card) {
		return ((T (*)(ZmMpSettlementCardNewItemView*, uintptr_t))(Il2CppBase() + 0x2988720))(this, card);
	}
	template <typename T = void> T ShowCardAppearingFx() {
		return ((T (*)(ZmMpSettlementCardNewItemView*))(Il2CppBase() + 0x29890A0))(this);
	}
	template <typename T = void> T OnOpenAnimEnd() {
		return ((T (*)(ZmMpSettlementCardNewItemView*))(Il2CppBase() + 0x2989588))(this);
	}
	template <typename T = uintptr_t> T GetFx(uintptr_t assetID) {
		return ((T (*)(ZmMpSettlementCardNewItemView*, uintptr_t))(Il2CppBase() + 0x2988F78))(this, assetID);
	}
	template <typename T = void> T RefreshCoin(bool playAnim) {
		return ((T (*)(ZmMpSettlementCardNewItemView*, bool))(Il2CppBase() + 0x2989664))(this, playAnim);
	}
	template <typename T = void> T PlayRefreshCoinAnim() {
		return ((T (*)(ZmMpSettlementCardNewItemView*))(Il2CppBase() + 0x2989ADC))(this);
	}

};

}
