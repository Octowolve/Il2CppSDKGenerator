#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassNewLevelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassNewLevelView"));
	}

	template <typename T = uintptr_t> T& SeasonTimeLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& SeasonNameLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& FreeObj() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& FreeLevelLabel() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ChargeObj() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ChargeLevelLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BuyBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BuyBtnLabel() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& LoadoutItemDetail() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& CompareWeaponBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NotWeaponShowObj() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& NotWeaponSprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& AvatarShow() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& CallingItem() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& CoinSprite() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& DiamondSprite() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& RoleSprite() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& HeadFrame() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& MagnifyBtn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& GridRoot() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& MaxLevelTipObj() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& AllMaskBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& TutorialLevelArea() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& TutorialProgressArea() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& TutorialAwardArea() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& TutorialChargeAwardArea() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& TutorialFreeAwardArea() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& TutorialBuyPassArea() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& TutorialProgressFull() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSeasonTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetSeasonTime(uintptr_t timeLimitDesc) {
		return ((T (*)(BattlePassNewLevelView*, uintptr_t))(Il2CppBase() + 0x2C27100))(this, timeLimitDesc);
	}

};

}
