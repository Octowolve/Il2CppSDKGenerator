#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopPaymentInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopPaymentInfo"));
	}

	template <typename T = int32_t> T& _PaymentType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _Price() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _DiscountPrice() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& _Discount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _DurationType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _BatchBuyNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _ActiveBeginTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _ActiveEndTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& _Desc() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _PriceDesc() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppList<int32_t>*> T& _PriceList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _ExchangeItem() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _LadderDiscount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _RenewLadder() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<float>*> T& _LadderDiscountList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _LadderPriceIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _LimitDiscountPrice() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& _LimitDiscount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _RenewType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _RenewSeconds() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uint32_t> T& _NextLadderRenewTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x64);
	}

	template <typename T = int32_t> T get_PaymentType() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F08))(this);
	}
	template <typename T = void> T set_PaymentType(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072F10))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F18))(this);
	}
	template <typename T = void> T set_Price(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072F20))(this, value);
	}
	template <typename T = int32_t> T get_DiscountPrice() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F28))(this);
	}
	template <typename T = void> T set_DiscountPrice(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072F30))(this, value);
	}
	template <typename T = float> T get_Discount() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F38))(this);
	}
	template <typename T = void> T set_Discount(float value) {
		return ((T (*)(ShopPaymentInfo*, float))(Il2CppBase() + 0x5072F40))(this, value);
	}
	template <typename T = int32_t> T get_DurationType() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F48))(this);
	}
	template <typename T = void> T set_DurationType(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072F50))(this, value);
	}
	template <typename T = uint32_t> T get_BatchBuyNum() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F58))(this);
	}
	template <typename T = void> T set_BatchBuyNum(uint32_t value) {
		return ((T (*)(ShopPaymentInfo*, uint32_t))(Il2CppBase() + 0x5072F60))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveBeginTime() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F68))(this);
	}
	template <typename T = void> T set_ActiveBeginTime(Il2CppString* value) {
		return ((T (*)(ShopPaymentInfo*, Il2CppString*))(Il2CppBase() + 0x5072F70))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveEndTime() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F78))(this);
	}
	template <typename T = void> T set_ActiveEndTime(Il2CppString* value) {
		return ((T (*)(ShopPaymentInfo*, Il2CppString*))(Il2CppBase() + 0x5072F80))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F88))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072F90))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072F98))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072FA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072FA8))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(ShopPaymentInfo*, Il2CppString*))(Il2CppBase() + 0x5072FB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PriceDesc() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072FB8))(this);
	}
	template <typename T = void> T set_PriceDesc(Il2CppString* value) {
		return ((T (*)(ShopPaymentInfo*, Il2CppString*))(Il2CppBase() + 0x5072FC0))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_PriceList() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072FC8))(this);
	}
	template <typename T = int32_t> T get_ExchangeItem() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072FD0))(this);
	}
	template <typename T = void> T set_ExchangeItem(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072FD8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LadderDiscount() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072FE0))(this);
	}
	template <typename T = void> T set_LadderDiscount(Il2CppString* value) {
		return ((T (*)(ShopPaymentInfo*, Il2CppString*))(Il2CppBase() + 0x5072FE8))(this, value);
	}
	template <typename T = int32_t> T get_RenewLadder() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5072FF0))(this);
	}
	template <typename T = void> T set_RenewLadder(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5072FF8))(this, value);
	}
	template <typename T = Il2CppList<float>*> T get_LadderDiscountList() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5073000))(this);
	}
	template <typename T = int32_t> T get_LadderPriceIndex() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5073008))(this);
	}
	template <typename T = void> T set_LadderPriceIndex(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5073010))(this, value);
	}
	template <typename T = int32_t> T get_LimitDiscountPrice() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5073018))(this);
	}
	template <typename T = void> T set_LimitDiscountPrice(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5073020))(this, value);
	}
	template <typename T = float> T get_LimitDiscount() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5073028))(this);
	}
	template <typename T = void> T set_LimitDiscount(float value) {
		return ((T (*)(ShopPaymentInfo*, float))(Il2CppBase() + 0x5073030))(this, value);
	}
	template <typename T = int32_t> T get_RenewType() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5073038))(this);
	}
	template <typename T = void> T set_RenewType(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5073040))(this, value);
	}
	template <typename T = int32_t> T get_RenewSeconds() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5073048))(this);
	}
	template <typename T = void> T set_RenewSeconds(int32_t value) {
		return ((T (*)(ShopPaymentInfo*, int32_t))(Il2CppBase() + 0x5073050))(this, value);
	}
	template <typename T = uint32_t> T get_NextLadderRenewTime() {
		return ((T (*)(ShopPaymentInfo*))(Il2CppBase() + 0x5073058))(this);
	}
	template <typename T = void> T set_NextLadderRenewTime(uint32_t value) {
		return ((T (*)(ShopPaymentInfo*, uint32_t))(Il2CppBase() + 0x5073060))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopPaymentInfo*, bool))(Il2CppBase() + 0x5073068))(this, createIfMissing);
	}

};

}
