#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMGetItemTipsHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMGetItemTipsHUD"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& CoinRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CoinIcon() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& CoinBg_Blue() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CoinBg_Yellow() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CoinName_Blue() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CoinName_Yellow() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CoinDesc_Blue() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CoinDesc_Yellow() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& PerkRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& PerkIcon() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& PerkName() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& PowerupRoot() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& PowerupIcon() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& PowerupName() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& CoinAllTween() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PerkAllTween() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& PowerupAllTween() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Hide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayTweens() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ZMGetItemTipsHUD*))(Il2CppBase() + 0x2A5286C))(this);
	}
	template <typename T = void> T ShowTips(uintptr_t type, int32_t itemId) {
		return ((T (*)(ZMGetItemTipsHUD*, uintptr_t, int32_t))(Il2CppBase() + 0x2A529E4))(this, type, itemId);
	}
	template <typename T = void> T DelayHide() {
		return ((T (*)(ZMGetItemTipsHUD*))(Il2CppBase() + 0x2A53394))(this);
	}
	template <typename T = void> T Hide() {
		return ((T (*)(ZMGetItemTipsHUD*))(Il2CppBase() + 0x2A531A0))(this);
	}
	template <typename T = void> T PlayTweens(Il2CppArray<uintptr_t>* alltween) {
		return ((T (*)(ZMGetItemTipsHUD*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2A5328C))(this, alltween);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(ZMGetItemTipsHUD*))(Il2CppBase() + 0x2A53438))(this);
	}

};

}
