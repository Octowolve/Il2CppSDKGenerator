#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TimelimitDesc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TimelimitDesc"));
	}

	template <typename T = int32_t> T& _SeasonId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _BeginTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _DefaultTaskMode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _NoChargeWeekTaskUpLimit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _ChargeWeekTaskUpLimit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _SplitLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _SpanLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& _MaxLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _RefreshDailyTaskInterval() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _MaxChargePassGiftLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _IsReserveChargeIdentity() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BpAwardMailTitle() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _BpAwardMailContent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _CrossSeasonAward() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_SeasonName() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _RoleForSuperStar() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ShowTexture() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _ShowItem_1() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _GetItem_Level_1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _ShowItem_2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _GetItem_Level_2() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _ShowItem_3() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _GetItem_Level_3() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _SamsungShowLocal() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SamsungPicUrl() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SamsungPic() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _CountDownSwitch() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _CountDownTips() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LOCID_SeasonNumber() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& _GspAmendExpSwitch() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA480))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA488))(this, value);
	}
	template <typename T = int32_t> T get_BeginTime() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA490))(this);
	}
	template <typename T = void> T set_BeginTime(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA498))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA4A0))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA4A8))(this, value);
	}
	template <typename T = int32_t> T get_DefaultTaskMode() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA4B0))(this);
	}
	template <typename T = void> T set_DefaultTaskMode(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA4B8))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeWeekTaskUpLimit() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA4C0))(this);
	}
	template <typename T = void> T set_NoChargeWeekTaskUpLimit(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA4C8))(this, value);
	}
	template <typename T = int32_t> T get_ChargeWeekTaskUpLimit() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA4D0))(this);
	}
	template <typename T = void> T set_ChargeWeekTaskUpLimit(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA4D8))(this, value);
	}
	template <typename T = int32_t> T get_SplitLevel() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA4E0))(this);
	}
	template <typename T = void> T set_SplitLevel(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA4E8))(this, value);
	}
	template <typename T = int32_t> T get_SpanLevel() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA4F0))(this);
	}
	template <typename T = void> T set_SpanLevel(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA4F8))(this, value);
	}
	template <typename T = int64_t> T get_MaxLevel() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA500))(this);
	}
	template <typename T = void> T set_MaxLevel(int64_t value) {
		return ((T (*)(TimelimitDesc*, int64_t))(Il2CppBase() + 0x51AA508))(this, value);
	}
	template <typename T = int32_t> T get_RefreshDailyTaskInterval() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA518))(this);
	}
	template <typename T = void> T set_RefreshDailyTaskInterval(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA520))(this, value);
	}
	template <typename T = int32_t> T get_MaxChargePassGiftLevel() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA528))(this);
	}
	template <typename T = void> T set_MaxChargePassGiftLevel(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA530))(this, value);
	}
	template <typename T = int32_t> T get_IsReserveChargeIdentity() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA538))(this);
	}
	template <typename T = void> T set_IsReserveChargeIdentity(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA540))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BpAwardMailTitle() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA548))(this);
	}
	template <typename T = void> T set_BpAwardMailTitle(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA550))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_BpAwardMailContent() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA558))(this);
	}
	template <typename T = void> T set_BpAwardMailContent(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA560))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_CrossSeasonAward() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA568))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_SeasonName() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA570))(this);
	}
	template <typename T = void> T set_LOCID_SeasonName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA578))(this, value);
	}
	template <typename T = int32_t> T get_RoleForSuperStar() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA580))(this);
	}
	template <typename T = void> T set_RoleForSuperStar(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA588))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ShowTexture() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA590))(this);
	}
	template <typename T = void> T set_ShowTexture(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA598))(this, value);
	}
	template <typename T = int32_t> T get_ShowItem_1() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA5A0))(this);
	}
	template <typename T = void> T set_ShowItem_1(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA5A8))(this, value);
	}
	template <typename T = int32_t> T get_GetItem_Level_1() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA5B0))(this);
	}
	template <typename T = void> T set_GetItem_Level_1(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA5B8))(this, value);
	}
	template <typename T = int32_t> T get_ShowItem_2() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA5C0))(this);
	}
	template <typename T = void> T set_ShowItem_2(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA5C8))(this, value);
	}
	template <typename T = int32_t> T get_GetItem_Level_2() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA5D0))(this);
	}
	template <typename T = void> T set_GetItem_Level_2(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA5D8))(this, value);
	}
	template <typename T = int32_t> T get_ShowItem_3() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA5E0))(this);
	}
	template <typename T = void> T set_ShowItem_3(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA5E8))(this, value);
	}
	template <typename T = int32_t> T get_GetItem_Level_3() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA5F0))(this);
	}
	template <typename T = void> T set_GetItem_Level_3(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA5F8))(this, value);
	}
	template <typename T = int32_t> T get_SamsungShowLocal() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA600))(this);
	}
	template <typename T = void> T set_SamsungShowLocal(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA608))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SamsungPicUrl() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA610))(this);
	}
	template <typename T = void> T set_SamsungPicUrl(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA618))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SamsungPic() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA620))(this);
	}
	template <typename T = void> T set_SamsungPic(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA628))(this, value);
	}
	template <typename T = int32_t> T get_CountDownSwitch() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA630))(this);
	}
	template <typename T = void> T set_CountDownSwitch(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA638))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CountDownTips() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA640))(this);
	}
	template <typename T = void> T set_CountDownTips(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA648))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LOCID_SeasonNumber() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA650))(this);
	}
	template <typename T = void> T set_LOCID_SeasonNumber(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TimelimitDesc*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA658))(this, value);
	}
	template <typename T = int32_t> T get_GspAmendExpSwitch() {
		return ((T (*)(TimelimitDesc*))(Il2CppBase() + 0x51AA660))(this);
	}
	template <typename T = void> T set_GspAmendExpSwitch(int32_t value) {
		return ((T (*)(TimelimitDesc*, int32_t))(Il2CppBase() + 0x51AA668))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TimelimitDesc*, bool))(Il2CppBase() + 0x51AA670))(this, createIfMissing);
	}

};

}
