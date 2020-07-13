#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SettlementPlayerExpDetailItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SettlementPlayerExpDetailItem"));
	}

	template <typename T = uintptr_t> T& Title() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ValueLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& KeyModeLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TipLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& YellowFX() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& GreenFX() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& isGreenBG() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTitleColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetValueColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T SetInfo(Il2CppString* title, Il2CppString* value, Il2CppString* keyMode, Il2CppString* tip, bool isGreenFX, bool isSpecialEffect) {
		return ((T (*)(SettlementPlayerExpDetailItem*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*, bool, bool))(Il2CppBase() + 0x38D5A64))(this, title, value, keyMode, tip, isGreenFX, isSpecialEffect);
	}
	template <typename T = void> T SetTitleColor(uintptr_t color) {
		return ((T (*)(SettlementPlayerExpDetailItem*, uintptr_t))(Il2CppBase() + 0x38D5E5C))(this, color);
	}
	template <typename T = void> T SetValueColor(uintptr_t color) {
		return ((T (*)(SettlementPlayerExpDetailItem*, uintptr_t))(Il2CppBase() + 0x38D5F80))(this, color);
	}
	template <typename T = void> T HideBG() {
		return ((T (*)(SettlementPlayerExpDetailItem*))(Il2CppBase() + 0x38D60A4))(this);
	}

};

}
