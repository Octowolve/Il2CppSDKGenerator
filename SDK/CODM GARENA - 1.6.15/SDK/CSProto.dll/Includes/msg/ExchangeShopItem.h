#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ExchangeShopItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ExchangeShopItem"));
	}

	template <typename T = int32_t> T& _ExchangeShopItemID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _BelongToShop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _ItemIndex() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _ValidBeginTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _ValidEndTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _ItemType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _ItemNum() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _LimitNum() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _CurrencyID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _Price() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _ItemDuration() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _ValidBeginTimeStamp() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _ValidEndTimeStamp() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& _EnableMultiNum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = int32_t> T get_ExchangeShopItemID() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x52270D8))(this);
	}
	template <typename T = void> T set_ExchangeShopItemID(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x52270E0))(this, value);
	}
	template <typename T = int32_t> T get_BelongToShop() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x52270E8))(this);
	}
	template <typename T = void> T set_BelongToShop(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x52270F0))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x52270F8))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227100))(this, value);
	}
	template <typename T = int32_t> T get_ItemIndex() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227108))(this);
	}
	template <typename T = void> T set_ItemIndex(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227110))(this, value);
	}
	template <typename T = Il2CppString*> T get_ValidBeginTime() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227118))(this);
	}
	template <typename T = void> T set_ValidBeginTime(Il2CppString* value) {
		return ((T (*)(ExchangeShopItem*, Il2CppString*))(Il2CppBase() + 0x5227120))(this, value);
	}
	template <typename T = Il2CppString*> T get_ValidEndTime() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227128))(this);
	}
	template <typename T = void> T set_ValidEndTime(Il2CppString* value) {
		return ((T (*)(ExchangeShopItem*, Il2CppString*))(Il2CppBase() + 0x5227130))(this, value);
	}
	template <typename T = int32_t> T get_ItemType() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227138))(this);
	}
	template <typename T = void> T set_ItemType(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227140))(this, value);
	}
	template <typename T = int32_t> T get_ItemNum() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227148))(this);
	}
	template <typename T = void> T set_ItemNum(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227150))(this, value);
	}
	template <typename T = int32_t> T get_LimitNum() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227158))(this);
	}
	template <typename T = void> T set_LimitNum(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227160))(this, value);
	}
	template <typename T = int32_t> T get_CurrencyID() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227168))(this);
	}
	template <typename T = void> T set_CurrencyID(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227170))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227178))(this);
	}
	template <typename T = void> T set_Price(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227180))(this, value);
	}
	template <typename T = int32_t> T get_ItemDuration() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227188))(this);
	}
	template <typename T = void> T set_ItemDuration(int32_t value) {
		return ((T (*)(ExchangeShopItem*, int32_t))(Il2CppBase() + 0x5227190))(this, value);
	}
	template <typename T = uint32_t> T get_ValidBeginTimeStamp() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x5227198))(this);
	}
	template <typename T = void> T set_ValidBeginTimeStamp(uint32_t value) {
		return ((T (*)(ExchangeShopItem*, uint32_t))(Il2CppBase() + 0x52271A0))(this, value);
	}
	template <typename T = uint32_t> T get_ValidEndTimeStamp() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x52271A8))(this);
	}
	template <typename T = void> T set_ValidEndTimeStamp(uint32_t value) {
		return ((T (*)(ExchangeShopItem*, uint32_t))(Il2CppBase() + 0x52271B0))(this, value);
	}
	template <typename T = bool> T get_EnableMultiNum() {
		return ((T (*)(ExchangeShopItem*))(Il2CppBase() + 0x52271B8))(this);
	}
	template <typename T = void> T set_EnableMultiNum(bool value) {
		return ((T (*)(ExchangeShopItem*, bool))(Il2CppBase() + 0x52271C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ExchangeShopItem*, bool))(Il2CppBase() + 0x52271C8))(this, createIfMissing);
	}

};

}
