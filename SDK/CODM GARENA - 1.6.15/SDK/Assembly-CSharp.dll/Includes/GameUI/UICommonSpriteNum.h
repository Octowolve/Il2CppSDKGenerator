#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonSpriteNum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonSpriteNum"));
	}

	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Ones() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Tens() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Hundreds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SpritePrefix() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& PVERound() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAllNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPveRound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetText(int32_t num, bool bHideZeroPrex) {
		return ((T (*)(UICommonSpriteNum*, int32_t, bool))(Il2CppBase() + 0x29E3C5C))(this, num, bHideZeroPrex);
	}
	template <typename T = void> T ShowAllNum(bool show) {
		return ((T (*)(UICommonSpriteNum*, bool))(Il2CppBase() + 0x29E40CC))(this, show);
	}
	template <typename T = void> T SetPveRound(int32_t round) {
		return ((T (*)(UICommonSpriteNum*, int32_t))(Il2CppBase() + 0x29E41D0))(this, round);
	}

};

}
