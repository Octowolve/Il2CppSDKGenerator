#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class WeaponPromotionAwardController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "WeaponPromotionAwardController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mCacheWeapon() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& mCacheLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& mCacheItemId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mCacheLevelConfigList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& MAX_EXP_CARD_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExpCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(WeaponPromotionAwardController*))(Il2CppBase() + 0x2A2EA3C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(WeaponPromotionAwardController*))(Il2CppBase() + 0x2A2EAE0))(this);
	}
	template <typename T = void> T SetData(uintptr_t weapon, int32_t level, int32_t itemId) {
		return ((T (*)(WeaponPromotionAwardController*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x2A2EBE4))(this, weapon, level, itemId);
	}
	template <typename T = void> T SetExpCardInfo() {
		return ((T (*)(WeaponPromotionAwardController*))(Il2CppBase() + 0x2A2F1D4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(WeaponPromotionAwardController*))(Il2CppBase() + 0x2A2FA14))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(WeaponPromotionAwardController*))(Il2CppBase() + 0x2A2FA18))(this);
	}

};

}
