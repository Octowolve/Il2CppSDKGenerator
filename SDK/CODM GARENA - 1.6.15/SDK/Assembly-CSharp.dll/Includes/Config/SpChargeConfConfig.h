#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpChargeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpChargeConfConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& AreaID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& IsSetChargeStatus() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ChargeType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MinLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ChargeLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& LevelupInterval() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& IsPreorder() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& MoneyType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MoneyCnt() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& AwardList_1_id() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& AwardList_1_num() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& AwardList_1_time() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& PayPrice() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& PayDiscount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& PayActiveBeginTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& PayActiveEndTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& PayLimitNum() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& LOCID_Title() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> T& Logo_Sprite() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& PreorderBeginTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppString*> T& PreorderEndTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& SeasonName() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& RightContent() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& GiftDescription() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E421C))(this);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E42BC))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E42C4))(this, value);
	}
	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E42CC))(this);
	}
	template <typename T = void> T set_AreaID(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E42D4))(this, value);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E42DC))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E42E4))(this, value);
	}
	template <typename T = int32_t> T get_IsSetChargeStatus() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E42EC))(this);
	}
	template <typename T = void> T set_IsSetChargeStatus(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E42F4))(this, value);
	}
	template <typename T = int32_t> T get_ChargeType() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E42FC))(this);
	}
	template <typename T = void> T set_ChargeType(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4304))(this, value);
	}
	template <typename T = int32_t> T get_MinLevel() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E430C))(this);
	}
	template <typename T = void> T set_MinLevel(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4314))(this, value);
	}
	template <typename T = int32_t> T get_MaxLevel() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E431C))(this);
	}
	template <typename T = void> T set_MaxLevel(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4324))(this, value);
	}
	template <typename T = int32_t> T get_ChargeLevel() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E432C))(this);
	}
	template <typename T = void> T set_ChargeLevel(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4334))(this, value);
	}
	template <typename T = int32_t> T get_LevelupInterval() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E433C))(this);
	}
	template <typename T = void> T set_LevelupInterval(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4344))(this, value);
	}
	template <typename T = int32_t> T get_IsPreorder() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E434C))(this);
	}
	template <typename T = void> T set_IsPreorder(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4354))(this, value);
	}
	template <typename T = int32_t> T get_Value() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E435C))(this);
	}
	template <typename T = void> T set_Value(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4364))(this, value);
	}
	template <typename T = int32_t> T get_MoneyType() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E436C))(this);
	}
	template <typename T = void> T set_MoneyType(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4374))(this, value);
	}
	template <typename T = int32_t> T get_MoneyCnt() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E437C))(this);
	}
	template <typename T = void> T set_MoneyCnt(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4384))(this, value);
	}
	template <typename T = int32_t> T get_AwardList_1_id() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E438C))(this);
	}
	template <typename T = void> T set_AwardList_1_id(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4394))(this, value);
	}
	template <typename T = int32_t> T get_AwardList_1_num() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E439C))(this);
	}
	template <typename T = void> T set_AwardList_1_num(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E43A4))(this, value);
	}
	template <typename T = int32_t> T get_AwardList_1_time() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E43AC))(this);
	}
	template <typename T = void> T set_AwardList_1_time(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E43B4))(this, value);
	}
	template <typename T = int32_t> T get_PayPrice() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E43BC))(this);
	}
	template <typename T = void> T set_PayPrice(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E43C4))(this, value);
	}
	template <typename T = int32_t> T get_PayDiscount() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E43CC))(this);
	}
	template <typename T = void> T set_PayDiscount(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E43D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_PayActiveBeginTime() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E43DC))(this);
	}
	template <typename T = void> T set_PayActiveBeginTime(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E43E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_PayActiveEndTime() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E43EC))(this);
	}
	template <typename T = void> T set_PayActiveEndTime(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E43F4))(this, value);
	}
	template <typename T = int32_t> T get_PayLimitNum() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E43FC))(this);
	}
	template <typename T = void> T set_PayLimitNum(int32_t value) {
		return ((T (*)(SpChargeConfConfig*, int32_t))(Il2CppBase() + 0x30E4404))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_Title() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E440C))(this);
	}
	template <typename T = void> T set_LOCID_Title(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E4414))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E441C))(this);
	}
	template <typename T = Il2CppString*> T get_LOCID_Desc() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E442C))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E4434))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E443C))(this);
	}
	template <typename T = Il2CppString*> T get_Logo_Sprite() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E444C))(this);
	}
	template <typename T = void> T set_Logo_Sprite(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E4454))(this, value);
	}
	template <typename T = Il2CppString*> T get_PreorderBeginTime() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E445C))(this);
	}
	template <typename T = void> T set_PreorderBeginTime(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E4464))(this, value);
	}
	template <typename T = Il2CppString*> T get_PreorderEndTime() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E446C))(this);
	}
	template <typename T = void> T set_PreorderEndTime(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E4474))(this, value);
	}
	template <typename T = Il2CppString*> T get_SeasonName() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E447C))(this);
	}
	template <typename T = void> T set_SeasonName(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E4484))(this, value);
	}
	template <typename T = Il2CppString*> T get_RightContent() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E448C))(this);
	}
	template <typename T = void> T set_RightContent(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E4494))(this, value);
	}
	template <typename T = Il2CppString*> T get_GiftDescription() {
		return ((T (*)(SpChargeConfConfig*))(Il2CppBase() + 0x30E449C))(this);
	}
	template <typename T = void> T set_GiftDescription(Il2CppString* value) {
		return ((T (*)(SpChargeConfConfig*, Il2CppString*))(Il2CppBase() + 0x30E44A4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpChargeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E44AC))(this, bytes, position);
	}

};

}
