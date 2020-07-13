#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutInventoryExchangeItemConfirmView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutInventoryExchangeItemConfirmView"));
	}

	template <typename T = uintptr_t> T& TitleLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& OkBtn() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& OkGrayBtn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ItemNameLabel() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ItemQualitySprite() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ItemDescLabel() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& TipsLabel() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetTitle(Il2CppString* text) {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmView*, Il2CppString*))(Il2CppBase() + 0x1A52ED0))(this, text);
	}
	template <typename T = void> T xLuaBaseProxy_SetTitle(Il2CppString* P0) {
		return ((T (*)(LoadoutInventoryExchangeItemConfirmView*, Il2CppString*))(Il2CppBase() + 0x1A52FC4))(this, P0);
	}

};

}
