#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPropHuntSelectItemCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPropHuntSelectItemCell"));
	}

	template <typename T = uintptr_t> T& ItemSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& UnSelectedBG() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SelectedBG() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SelectedSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Price1TypeSprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Price2TypeSprite() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ItemPrice() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& CostType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Cost() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& m_PriceType0() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_PriceType1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_PriceType2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutPropHuntSelectItemCell*))(Il2CppBase() + 0x1A75FD4))(this);
	}
	template <typename T = void> T SetItemData(uint32_t assetID, Il2CppString* itemSpriteName, int32_t priceType, int32_t price) {
		return ((T (*)(LoadoutPropHuntSelectItemCell*, uint32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x1A760D4))(this, assetID, itemSpriteName, priceType, price);
	}
	template <typename T = void> T SetSelected(bool flag) {
		return ((T (*)(LoadoutPropHuntSelectItemCell*, bool))(Il2CppBase() + 0x1A761F8))(this, flag);
	}

};

}
