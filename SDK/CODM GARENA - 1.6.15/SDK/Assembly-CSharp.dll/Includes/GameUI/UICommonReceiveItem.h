#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonReceiveItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonReceiveItem"));
	}

	template <typename T = uintptr_t> T& ItemIcon() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& QualityLine() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& QualityFrame() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ZombieTag() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& GoPossessed() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& GoDemolishGold() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& TimeLimit() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& Piece() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ChipFlagObj() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ChipView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TimeTag() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& TimeLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& SmallQualitySprite() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Head() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TipHolder() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& EffectRoot() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& NormalEffectObj() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& SpecialEffectObj() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& isRepeated() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> static T& mCurrencyScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetContent(int32_t ItemId, int32_t num, uint64_t ItemGuid, bool bNeedCheckUpgrade, bool isRepeated, uintptr_t m_TimeType, int32_t m_DurationTime, bool bDemolishGold) {
		return ((T (*)(UICommonReceiveItem*, int32_t, int32_t, uint64_t, bool, bool, uintptr_t, int32_t, bool))(Il2CppBase() + 0x29C1780))(this, ItemId, num, ItemGuid, bNeedCheckUpgrade, isRepeated, m_TimeType, m_DurationTime, bDemolishGold);
	}

};

}
