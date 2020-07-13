#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SpChargeConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SpChargeConf"));
	}

	template <typename T = int32_t> T& _Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _ChargeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _MoneyType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _MoneyCnt() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _Discount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _AreaID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _SeasonId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _PayPrice() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _PayDiscount() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PayActiveBeginTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PayActiveEndTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _PayLimitNum() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _AwardList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PreorderBeginTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PreorderEndTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SeasonName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _RightContent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _GiftDescription() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _IsSetChargeStatus() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _MinLevel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _MaxLevel() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _ChargeLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _LevelupInterval() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _IsPreorder() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x74);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A80F8))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8100))(this, value);
	}
	template <typename T = int32_t> T get_ChargeType() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8108))(this);
	}
	template <typename T = void> T set_ChargeType(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8110))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8118))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8120))(this, value);
	}
	template <typename T = int32_t> T get_MoneyType() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8128))(this);
	}
	template <typename T = void> T set_MoneyType(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8130))(this, value);
	}
	template <typename T = int32_t> T get_MoneyCnt() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8138))(this);
	}
	template <typename T = void> T set_MoneyCnt(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8140))(this, value);
	}
	template <typename T = int32_t> T get_Discount() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8148))(this);
	}
	template <typename T = void> T set_Discount(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8150))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Title() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8158))(this);
	}
	template <typename T = void> T set_LOCID_Title(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8160))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Desc() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8168))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8170))(this, value);
	}
	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8178))(this);
	}
	template <typename T = void> T set_AreaID(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8180))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8188))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8190))(this, value);
	}
	template <typename T = int32_t> T get_PayPrice() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8198))(this);
	}
	template <typename T = void> T set_PayPrice(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A81A0))(this, value);
	}
	template <typename T = int32_t> T get_PayDiscount() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A81A8))(this);
	}
	template <typename T = void> T set_PayDiscount(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A81B0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PayActiveBeginTime() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A81B8))(this);
	}
	template <typename T = void> T set_PayActiveBeginTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A81C0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PayActiveEndTime() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A81C8))(this);
	}
	template <typename T = void> T set_PayActiveEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A81D0))(this, value);
	}
	template <typename T = int32_t> T get_PayLimitNum() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A81D8))(this);
	}
	template <typename T = void> T set_PayLimitNum(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A81E0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_AwardList() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A81E8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PreorderBeginTime() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A81F0))(this);
	}
	template <typename T = void> T set_PreorderBeginTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A81F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PreorderEndTime() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8200))(this);
	}
	template <typename T = void> T set_PreorderEndTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8208))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SeasonName() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8210))(this);
	}
	template <typename T = void> T set_SeasonName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8218))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_RightContent() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8220))(this);
	}
	template <typename T = void> T set_RightContent(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8228))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_GiftDescription() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8230))(this);
	}
	template <typename T = void> T set_GiftDescription(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(SpChargeConf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51A8238))(this, value);
	}
	template <typename T = int32_t> T get_IsSetChargeStatus() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8240))(this);
	}
	template <typename T = void> T set_IsSetChargeStatus(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8248))(this, value);
	}
	template <typename T = int32_t> T get_MinLevel() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8250))(this);
	}
	template <typename T = void> T set_MinLevel(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8258))(this, value);
	}
	template <typename T = int32_t> T get_MaxLevel() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8260))(this);
	}
	template <typename T = void> T set_MaxLevel(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8268))(this, value);
	}
	template <typename T = int32_t> T get_ChargeLevel() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8270))(this);
	}
	template <typename T = void> T set_ChargeLevel(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8278))(this, value);
	}
	template <typename T = int32_t> T get_LevelupInterval() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8280))(this);
	}
	template <typename T = void> T set_LevelupInterval(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8288))(this, value);
	}
	template <typename T = int32_t> T get_IsPreorder() {
		return ((T (*)(SpChargeConf*))(Il2CppBase() + 0x51A8290))(this);
	}
	template <typename T = void> T set_IsPreorder(int32_t value) {
		return ((T (*)(SpChargeConf*, int32_t))(Il2CppBase() + 0x51A8298))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SpChargeConf*, bool))(Il2CppBase() + 0x51A82A0))(this, createIfMissing);
	}

};

}
