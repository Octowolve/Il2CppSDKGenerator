#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Reward {

class RewardCardDataBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Reward", "RewardCardDataBase"));
	}

	template <typename T = int32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& count() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& spi() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& spriteName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& quality() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isFirstWin() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isMust() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& isUpgradable() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = int32_t> T& duration() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isLiveOpsEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isRepeated() {
		return *(T*)((uintptr_t)this + 0x35);
	}
	template <typename T = int32_t> T& price() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstWin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMustGet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCardData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCardFromInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetCardFromInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x41304F0))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(RewardCardDataBase*, int32_t))(Il2CppBase() + 0x41304A0))(this, value);
	}
	template <typename T = uint64_t> T get_guid() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x41304F8))(this);
	}
	template <typename T = void> T set_guid(uint64_t value) {
		return ((T (*)(RewardCardDataBase*, uint64_t))(Il2CppBase() + 0x41304A8))(this, value);
	}
	template <typename T = int32_t> T get_count() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130500))(this);
	}
	template <typename T = void> T set_count(int32_t value) {
		return ((T (*)(RewardCardDataBase*, int32_t))(Il2CppBase() + 0x41304B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_name() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130508))(this);
	}
	template <typename T = void> T set_name(Il2CppString* value) {
		return ((T (*)(RewardCardDataBase*, Il2CppString*))(Il2CppBase() + 0x412FBC8))(this, value);
	}
	template <typename T = int32_t> T get_spi() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130510))(this);
	}
	template <typename T = void> T set_spi(int32_t value) {
		return ((T (*)(RewardCardDataBase*, int32_t))(Il2CppBase() + 0x41304C0))(this, value);
	}
	template <typename T = Il2CppString*> T get_spriteName() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x412FD8C))(this);
	}
	template <typename T = void> T set_spriteName(Il2CppString* value) {
		return ((T (*)(RewardCardDataBase*, Il2CppString*))(Il2CppBase() + 0x412FBD8))(this, value);
	}
	template <typename T = uintptr_t> T get_quality() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130518))(this);
	}
	template <typename T = void> T set_quality(uintptr_t value) {
		return ((T (*)(RewardCardDataBase*, uintptr_t))(Il2CppBase() + 0x412FBD0))(this, value);
	}
	template <typename T = bool> T get_isFirstWin() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130520))(this);
	}
	template <typename T = void> T set_isFirstWin(bool value) {
		return ((T (*)(RewardCardDataBase*, bool))(Il2CppBase() + 0x4130528))(this, value);
	}
	template <typename T = bool> T get_isMust() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130530))(this);
	}
	template <typename T = void> T set_isMust(bool value) {
		return ((T (*)(RewardCardDataBase*, bool))(Il2CppBase() + 0x4130538))(this, value);
	}
	template <typename T = bool> T get_isUpgradable() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130540))(this);
	}
	template <typename T = void> T set_isUpgradable(bool value) {
		return ((T (*)(RewardCardDataBase*, bool))(Il2CppBase() + 0x41304C8))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130548))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(RewardCardDataBase*, int32_t))(Il2CppBase() + 0x41304D8))(this, value);
	}
	template <typename T = bool> T get_isLiveOpsEvent() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130550))(this);
	}
	template <typename T = void> T set_isLiveOpsEvent(bool value) {
		return ((T (*)(RewardCardDataBase*, bool))(Il2CppBase() + 0x41304D0))(this, value);
	}
	template <typename T = bool> T get_isRepeated() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130558))(this);
	}
	template <typename T = void> T set_isRepeated(bool value) {
		return ((T (*)(RewardCardDataBase*, bool))(Il2CppBase() + 0x41304E0))(this, value);
	}
	template <typename T = int32_t> T get_price() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130560))(this);
	}
	template <typename T = void> T set_price(int32_t value) {
		return ((T (*)(RewardCardDataBase*, int32_t))(Il2CppBase() + 0x41304E8))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x4130568))(this);
	}
	template <typename T = void> T SetSprite(uintptr_t sp) {
		return ((T (*)(RewardCardDataBase*, uintptr_t))(Il2CppBase() + 0x0))(this, sp);
	}
	template <typename T = void> T SetFirstWin(bool isFirstWinReward) {
		return ((T (*)(RewardCardDataBase*, bool))(Il2CppBase() + 0x4130A54))(this, isFirstWinReward);
	}
	template <typename T = void> T SetMustGet(bool isMustGet) {
		return ((T (*)(RewardCardDataBase*, bool))(Il2CppBase() + 0x4130AFC))(this, isMustGet);
	}
	template <typename T = uintptr_t> static T GetCardData(uintptr_t gca) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4130BA4))(0, gca);
	}
	template <typename T = uintptr_t> static T GetCardFromInventory(int32_t id, int32_t duration, uint64_t guid, int32_t spi, bool isMustGet, bool isFirstWin, bool isUpradable, bool isLiveOpsEvent, int32_t count, bool IsRepeated, int32_t Price) {
		return ((T (*)(void *, int32_t, int32_t, uint64_t, int32_t, bool, bool, bool, bool, int32_t, bool, int32_t))(Il2CppBase() + 0x4131158))(0, id, duration, guid, spi, isMustGet, isFirstWin, isUpradable, isLiveOpsEvent, count, IsRepeated, Price);
	}
	template <typename T = uintptr_t> static T GetCardFromInventory_1(uintptr_t gca) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4131390))(0, gca);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(RewardCardDataBase*))(Il2CppBase() + 0x41314B4))(this);
	}

};

}
