#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ShopConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ShopConfig"));
	}

	template <typename T = uint32_t> T& _ShopID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ShopType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _GoodType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _GoodID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _GoodNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _OutputNum() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _CertainItemID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _CertainBoxID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _CertainItemNum() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& _ActiveBeginTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _ActiveEndTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& _SpNote() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _Sequence() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Desc() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _ActiveHourPeriod() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _OpenDayTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _CertainProp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _CertainItemDuration() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& _ResourceID() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _Recommend() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _ColorID() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _TabId() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<int32_t>*> T& _LanguageCode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _LOC_Name() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _LOC_Desc() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _LobbyView() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _ViewTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _enable_abtest() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T& _LOC_SpNote() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& _EnableMultiNum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& _AreaID() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& _LimitID() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _ResetLimitNumDay() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& _LimitNum() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PictureCDN() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _ShowLocalTime() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _PaymentList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _OpenBoxNow() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uint32_t> T& _shop_source() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uint32_t> T& _PermanentFlag() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Name() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_Desc() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_SpNote() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppString*> T& _MultiTab() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _MultiTabs() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uint32_t> T& _EnableSegprice() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& _ext_info() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& _abtest_conf() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SpNoteResource() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = bool> T& _ShowPromise() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = Il2CppString*> T& _PromiseDescLOCID() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppString*> T& _PromiseItemLOCID() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uint32_t> T& _PromiseNum() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = bool> T& _ExCoinIsLimit() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& _ColorSubID() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& _HasCondition() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uint32_t> T& _ShopConditionID() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& _LimitGiftNum() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& _CanGift() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10C);
	}

	template <typename T = uint32_t> T get_ShopID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x50729B0))(this);
	}
	template <typename T = void> T set_ShopID(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x50729B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Name() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x50729C0))(this);
	}
	template <typename T = void> T set_Name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50729C8))(this, value);
	}
	template <typename T = int32_t> T get_ShopType() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x50729D0))(this);
	}
	template <typename T = void> T set_ShopType(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x50729D8))(this, value);
	}
	template <typename T = int32_t> T get_GoodType() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x50729E0))(this);
	}
	template <typename T = void> T set_GoodType(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x50729E8))(this, value);
	}
	template <typename T = uint32_t> T get_GoodID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x50729F0))(this);
	}
	template <typename T = void> T set_GoodID(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x50729F8))(this, value);
	}
	template <typename T = int32_t> T get_GoodNum() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A00))(this);
	}
	template <typename T = void> T set_GoodNum(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072A08))(this, value);
	}
	template <typename T = int32_t> T get_OutputNum() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A10))(this);
	}
	template <typename T = void> T set_OutputNum(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072A18))(this, value);
	}
	template <typename T = int32_t> T get_CertainItemID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A20))(this);
	}
	template <typename T = void> T set_CertainItemID(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072A28))(this, value);
	}
	template <typename T = int32_t> T get_CertainBoxID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A30))(this);
	}
	template <typename T = void> T set_CertainBoxID(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072A38))(this, value);
	}
	template <typename T = int32_t> T get_CertainItemNum() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A40))(this);
	}
	template <typename T = void> T set_CertainItemNum(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072A48))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveBeginTime() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A50))(this);
	}
	template <typename T = void> T set_ActiveBeginTime(Il2CppString* value) {
		return ((T (*)(ShopConfig*, Il2CppString*))(Il2CppBase() + 0x5072A58))(this, value);
	}
	template <typename T = Il2CppString*> T get_ActiveEndTime() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A60))(this);
	}
	template <typename T = void> T set_ActiveEndTime(Il2CppString* value) {
		return ((T (*)(ShopConfig*, Il2CppString*))(Il2CppBase() + 0x5072A68))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A70))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072A78))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A80))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072A88))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpNote() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072A90))(this);
	}
	template <typename T = void> T set_SpNote(Il2CppString* value) {
		return ((T (*)(ShopConfig*, Il2CppString*))(Il2CppBase() + 0x5072A98))(this, value);
	}
	template <typename T = int32_t> T get_Sequence() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072AA0))(this);
	}
	template <typename T = void> T set_Sequence(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072AA8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Desc() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072AB0))(this);
	}
	template <typename T = void> T set_Desc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072AB8))(this, value);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T get_ActiveHourPeriod() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072AC0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_OpenDayTime() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072AC8))(this);
	}
	template <typename T = uintptr_t> T get_CertainProp() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072AD0))(this);
	}
	template <typename T = void> T set_CertainProp(uintptr_t value) {
		return ((T (*)(ShopConfig*, uintptr_t))(Il2CppBase() + 0x5072AD8))(this, value);
	}
	template <typename T = int32_t> T get_CertainItemDuration() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072AE0))(this);
	}
	template <typename T = void> T set_CertainItemDuration(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072AE8))(this, value);
	}
	template <typename T = uint32_t> T get_ResourceID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072AF0))(this);
	}
	template <typename T = void> T set_ResourceID(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x5072AF8))(this, value);
	}
	template <typename T = int32_t> T get_Recommend() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B00))(this);
	}
	template <typename T = void> T set_Recommend(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B08))(this, value);
	}
	template <typename T = int32_t> T get_ColorID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B10))(this);
	}
	template <typename T = void> T set_ColorID(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B18))(this, value);
	}
	template <typename T = int32_t> T get_TabId() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B20))(this);
	}
	template <typename T = void> T set_TabId(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B28))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_LanguageCode() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B30))(this);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_LOC_Name() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B38))(this);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_LOC_Desc() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B40))(this);
	}
	template <typename T = int32_t> T get_LobbyView() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B48))(this);
	}
	template <typename T = void> T set_LobbyView(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B50))(this, value);
	}
	template <typename T = int32_t> T get_ViewTime() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B58))(this);
	}
	template <typename T = void> T set_ViewTime(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B60))(this, value);
	}
	template <typename T = int32_t> T get_enable_abtest() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B68))(this);
	}
	template <typename T = void> T set_enable_abtest(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B70))(this, value);
	}
	template <typename T = Il2CppList<Il2CppArray<uintptr_t>*>*> T get_LOC_SpNote() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B78))(this);
	}
	template <typename T = int32_t> T get_EnableMultiNum() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B80))(this);
	}
	template <typename T = void> T set_EnableMultiNum(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B88))(this, value);
	}
	template <typename T = int32_t> T get_AreaID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072B90))(this);
	}
	template <typename T = void> T set_AreaID(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072B98))(this, value);
	}
	template <typename T = int32_t> T get_LimitID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072BA0))(this);
	}
	template <typename T = void> T set_LimitID(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072BA8))(this, value);
	}
	template <typename T = int32_t> T get_ResetLimitNumDay() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072BB0))(this);
	}
	template <typename T = void> T set_ResetLimitNumDay(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072BB8))(this, value);
	}
	template <typename T = int32_t> T get_LimitNum() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072BC0))(this);
	}
	template <typename T = void> T set_LimitNum(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072BC8))(this, value);
	}
	template <typename T = uint64_t> T get_id() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072BD0))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(ShopConfig*, uint64_t))(Il2CppBase() + 0x5072BD8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PictureCDN() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072BE8))(this);
	}
	template <typename T = void> T set_PictureCDN(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072BF0))(this, value);
	}
	template <typename T = bool> T get_ShowLocalTime() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072BF8))(this);
	}
	template <typename T = void> T set_ShowLocalTime(bool value) {
		return ((T (*)(ShopConfig*, bool))(Il2CppBase() + 0x5072C00))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PaymentList() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C08))(this);
	}
	template <typename T = int32_t> T get_OpenBoxNow() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C10))(this);
	}
	template <typename T = void> T set_OpenBoxNow(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072C18))(this, value);
	}
	template <typename T = uint32_t> T get_shop_source() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C20))(this);
	}
	template <typename T = void> T set_shop_source(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x5072C28))(this, value);
	}
	template <typename T = uint32_t> T get_PermanentFlag() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C30))(this);
	}
	template <typename T = void> T set_PermanentFlag(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x5072C38))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Name() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C40))(this);
	}
	template <typename T = void> T set_LOCID_Name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072C48))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_Desc() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C50))(this);
	}
	template <typename T = void> T set_LOCID_Desc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072C58))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_SpNote() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C60))(this);
	}
	template <typename T = void> T set_LOCID_SpNote(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072C68))(this, value);
	}
	template <typename T = Il2CppString*> T get_MultiTab() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C70))(this);
	}
	template <typename T = void> T set_MultiTab(Il2CppString* value) {
		return ((T (*)(ShopConfig*, Il2CppString*))(Il2CppBase() + 0x5072C78))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_MultiTabs() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C80))(this);
	}
	template <typename T = uint32_t> T get_EnableSegprice() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C88))(this);
	}
	template <typename T = void> T set_EnableSegprice(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x5072C90))(this, value);
	}
	template <typename T = uintptr_t> T get_ext_info() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072C98))(this);
	}
	template <typename T = void> T set_ext_info(uintptr_t value) {
		return ((T (*)(ShopConfig*, uintptr_t))(Il2CppBase() + 0x5072CA0))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_conf() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072CA8))(this);
	}
	template <typename T = void> T set_abtest_conf(uintptr_t value) {
		return ((T (*)(ShopConfig*, uintptr_t))(Il2CppBase() + 0x5072CB0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SpNoteResource() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072CB8))(this);
	}
	template <typename T = void> T set_SpNoteResource(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ShopConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5072CC0))(this, value);
	}
	template <typename T = bool> T get_ShowPromise() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072CC8))(this);
	}
	template <typename T = void> T set_ShowPromise(bool value) {
		return ((T (*)(ShopConfig*, bool))(Il2CppBase() + 0x5072CD0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PromiseDescLOCID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072CD8))(this);
	}
	template <typename T = void> T set_PromiseDescLOCID(Il2CppString* value) {
		return ((T (*)(ShopConfig*, Il2CppString*))(Il2CppBase() + 0x5072CE0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PromiseItemLOCID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072CE8))(this);
	}
	template <typename T = void> T set_PromiseItemLOCID(Il2CppString* value) {
		return ((T (*)(ShopConfig*, Il2CppString*))(Il2CppBase() + 0x5072CF0))(this, value);
	}
	template <typename T = uint32_t> T get_PromiseNum() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072CF8))(this);
	}
	template <typename T = void> T set_PromiseNum(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x5072D00))(this, value);
	}
	template <typename T = bool> T get_ExCoinIsLimit() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072D08))(this);
	}
	template <typename T = void> T set_ExCoinIsLimit(bool value) {
		return ((T (*)(ShopConfig*, bool))(Il2CppBase() + 0x5072D10))(this, value);
	}
	template <typename T = int32_t> T get_ColorSubID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072D18))(this);
	}
	template <typename T = void> T set_ColorSubID(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072D20))(this, value);
	}
	template <typename T = bool> T get_HasCondition() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072D28))(this);
	}
	template <typename T = void> T set_HasCondition(bool value) {
		return ((T (*)(ShopConfig*, bool))(Il2CppBase() + 0x5072D30))(this, value);
	}
	template <typename T = uint32_t> T get_ShopConditionID() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072D38))(this);
	}
	template <typename T = void> T set_ShopConditionID(uint32_t value) {
		return ((T (*)(ShopConfig*, uint32_t))(Il2CppBase() + 0x5072D40))(this, value);
	}
	template <typename T = int32_t> T get_LimitGiftNum() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072D48))(this);
	}
	template <typename T = void> T set_LimitGiftNum(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072D50))(this, value);
	}
	template <typename T = int32_t> T get_CanGift() {
		return ((T (*)(ShopConfig*))(Il2CppBase() + 0x5072D58))(this);
	}
	template <typename T = void> T set_CanGift(int32_t value) {
		return ((T (*)(ShopConfig*, int32_t))(Il2CppBase() + 0x5072D60))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ShopConfig*, bool))(Il2CppBase() + 0x5072D68))(this, createIfMissing);
	}

};

}
