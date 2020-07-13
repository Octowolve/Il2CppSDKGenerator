#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutKillStreakController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutKillStreakController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> static T& MAX_ITEM_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& mItemShowList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CacheShowItemIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CacheShowItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T& CacheEquipedItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& CacheAvatarSquadType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5A760))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5A76C))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5A83C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5AA7C))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5ADBC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5C264))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5C984))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t))(Il2CppBase() + 0x1A5CDC4))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5CEB0))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutKillStreakController*, bool))(Il2CppBase() + 0x1A5CEC4))(this, show);
	}
	template <typename T = void> T ShowAvatarWeaponBox(bool show) {
		return ((T (*)(LoadoutKillStreakController*, bool))(Il2CppBase() + 0x1A5C85C))(this, show);
	}
	template <typename T = void> T ShowCurrentKillStreak() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5B2AC))(this);
	}
	template <typename T = void> T UpdateItemList() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5B744))(this);
	}
	template <typename T = void> T UpdateItemInfo(int32_t index) {
		return ((T (*)(LoadoutKillStreakController*, int32_t))(Il2CppBase() + 0x1A5BA58))(this, index);
	}
	template <typename T = void> T UpdateBtnView() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5D3E4))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t))(Il2CppBase() + 0x1A5DAC4))(this, message);
	}
	template <typename T = void> T OnNotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1A5DBB8))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnEquipBtnClick() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5DC74))(this);
	}
	template <typename T = void> T OnEquipedBtnClick() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5E134))(this);
	}
	template <typename T = void> T OnGotoBtnClick() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5E138))(this);
	}
	template <typename T = void> T OnPopupCloseBtnClick() {
		return ((T (*)(LoadoutKillStreakController*))(Il2CppBase() + 0x1A5AC78))(this);
	}
	template <typename T = void> T OnPopupSlot1Click(uintptr_t obj) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t))(Il2CppBase() + 0x1A5E7CC))(this, obj);
	}
	template <typename T = void> T OnPopupSlot2Click(uintptr_t obj) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t))(Il2CppBase() + 0x1A5E9B0))(this, obj);
	}
	template <typename T = void> T OnPopupSlot3Click(uintptr_t obj) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t))(Il2CppBase() + 0x1A5EB94))(this, obj);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A5ED78))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutKillStreakController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A5EEFC))(this, list, userContext);
	}
	template <typename T = bool> static T UpdateBtnViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A5EFFC))(0, it);
	}

};

}
