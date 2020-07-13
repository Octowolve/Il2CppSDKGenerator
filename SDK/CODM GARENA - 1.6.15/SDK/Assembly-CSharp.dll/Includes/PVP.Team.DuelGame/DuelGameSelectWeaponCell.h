#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGameSelectWeaponCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGameSelectWeaponCell"));
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
	template <typename T = int32_t> T& CostType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_CurIndex() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_CurIndex() {
		return ((T (*)(DuelGameSelectWeaponCell*))(Il2CppBase() + 0x4010104))(this);
	}
	template <typename T = void> T set_CurIndex(int32_t value) {
		return ((T (*)(DuelGameSelectWeaponCell*, int32_t))(Il2CppBase() + 0x401010C))(this, value);
	}
	template <typename T = void> T SetItemData(uint32_t assetID, Il2CppString* itemSpriteName, int32_t priceType, int32_t price) {
		return ((T (*)(DuelGameSelectWeaponCell*, uint32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4010114))(this, assetID, itemSpriteName, priceType, price);
	}
	template <typename T = void> T SetSelected(bool flag) {
		return ((T (*)(DuelGameSelectWeaponCell*, bool))(Il2CppBase() + 0x4010204))(this, flag);
	}

};

}
