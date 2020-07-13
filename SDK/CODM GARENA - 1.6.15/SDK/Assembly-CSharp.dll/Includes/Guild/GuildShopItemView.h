#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildShopItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildShopItemView"));
	}

	template <typename T = uintptr_t> T& BGSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& IconFitRect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Price() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& NPriceColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& OPriceColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& BuyButton() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& SPI() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& EffectTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& CountDownTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& ObjectEquip() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ObjectRoot() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& ObjectNew() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixedUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyclick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBGSpriteClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(GuildShopItemView*))(Il2CppBase() + 0x3BF3E74))(this);
	}
	template <typename T = void> T FixedUpdate() {
		return ((T (*)(GuildShopItemView*))(Il2CppBase() + 0x3BF3FE8))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(GuildShopItemView*, uintptr_t))(Il2CppBase() + 0x3BF35F4))(this, data);
	}
	template <typename T = void> T OnBuyclick(uintptr_t go) {
		return ((T (*)(GuildShopItemView*, uintptr_t))(Il2CppBase() + 0x3BF4244))(this, go);
	}
	template <typename T = void> T OnBGSpriteClick(uintptr_t go) {
		return ((T (*)(GuildShopItemView*, uintptr_t))(Il2CppBase() + 0x3BF4768))(this, go);
	}
	template <typename T = void> T OnItemClick(bool preview) {
		return ((T (*)(GuildShopItemView*, bool))(Il2CppBase() + 0x3BF42F4))(this, preview);
	}

};

}
