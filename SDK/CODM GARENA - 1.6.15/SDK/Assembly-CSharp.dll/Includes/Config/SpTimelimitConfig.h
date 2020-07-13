#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SpTimelimitConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SpTimelimitConfig"));
	}

	template <typename T = int32_t> T& SeasonId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& BeginTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DefaultTaskMode() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& NoChargeWeekTaskUpLimit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ChargeWeekTaskUpLimit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& SplitLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& SpanLevel() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MaxLevel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RefreshDailyTaskInterval() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& MaxChargePassGiftLevel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& LOCID_SeasonName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& RoleForSuperStar() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& IsReserveChargeIdentity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& BpAwardMailTitle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& BpAwardMailContent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& CrossSeasonAward_1_id() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& CrossSeasonAward_1_num() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& CrossSeasonAward_1_agingtime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& CrossSeasonAward_1_reserve() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& CountDownSwitch() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppString*> T& LOCID_SeasonNumber() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& GspAmendExpSwitch() {
		return *(T*)((uintptr_t)this + 0x64);
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
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8D30))(this);
	}
	template <typename T = int32_t> T get_SeasonId() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8DD0))(this);
	}
	template <typename T = void> T set_SeasonId(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8DD8))(this, value);
	}
	template <typename T = int32_t> T get_BeginTime() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8DE0))(this);
	}
	template <typename T = void> T set_BeginTime(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8DE8))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8DF0))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8DF8))(this, value);
	}
	template <typename T = int32_t> T get_DefaultTaskMode() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E00))(this);
	}
	template <typename T = void> T set_DefaultTaskMode(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E08))(this, value);
	}
	template <typename T = int32_t> T get_NoChargeWeekTaskUpLimit() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E10))(this);
	}
	template <typename T = void> T set_NoChargeWeekTaskUpLimit(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E18))(this, value);
	}
	template <typename T = int32_t> T get_ChargeWeekTaskUpLimit() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E20))(this);
	}
	template <typename T = void> T set_ChargeWeekTaskUpLimit(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E28))(this, value);
	}
	template <typename T = int32_t> T get_SplitLevel() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E30))(this);
	}
	template <typename T = void> T set_SplitLevel(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E38))(this, value);
	}
	template <typename T = int32_t> T get_SpanLevel() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E40))(this);
	}
	template <typename T = void> T set_SpanLevel(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E48))(this, value);
	}
	template <typename T = int32_t> T get_MaxLevel() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E50))(this);
	}
	template <typename T = void> T set_MaxLevel(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E58))(this, value);
	}
	template <typename T = int32_t> T get_RefreshDailyTaskInterval() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E60))(this);
	}
	template <typename T = void> T set_RefreshDailyTaskInterval(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E68))(this, value);
	}
	template <typename T = int32_t> T get_MaxChargePassGiftLevel() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E70))(this);
	}
	template <typename T = void> T set_MaxChargePassGiftLevel(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8E78))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_SeasonName() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E80))(this);
	}
	template <typename T = void> T set_LOCID_SeasonName(Il2CppString* value) {
		return ((T (*)(SpTimelimitConfig*, Il2CppString*))(Il2CppBase() + 0x30E8E88))(this, value);
	}
	template <typename T = Il2CppString*> T get_SeasonName() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8E90))(this);
	}
	template <typename T = int32_t> T get_RoleForSuperStar() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8EA0))(this);
	}
	template <typename T = void> T set_RoleForSuperStar(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8EA8))(this, value);
	}
	template <typename T = int32_t> T get_IsReserveChargeIdentity() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8EB0))(this);
	}
	template <typename T = void> T set_IsReserveChargeIdentity(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8EB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BpAwardMailTitle() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8EC0))(this);
	}
	template <typename T = void> T set_BpAwardMailTitle(Il2CppString* value) {
		return ((T (*)(SpTimelimitConfig*, Il2CppString*))(Il2CppBase() + 0x30E8EC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_BpAwardMailContent() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8ED0))(this);
	}
	template <typename T = void> T set_BpAwardMailContent(Il2CppString* value) {
		return ((T (*)(SpTimelimitConfig*, Il2CppString*))(Il2CppBase() + 0x30E8ED8))(this, value);
	}
	template <typename T = int32_t> T get_CrossSeasonAward_1_id() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8EE0))(this);
	}
	template <typename T = void> T set_CrossSeasonAward_1_id(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8EE8))(this, value);
	}
	template <typename T = int32_t> T get_CrossSeasonAward_1_num() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8EF0))(this);
	}
	template <typename T = void> T set_CrossSeasonAward_1_num(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8EF8))(this, value);
	}
	template <typename T = int32_t> T get_CrossSeasonAward_1_agingtime() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8F00))(this);
	}
	template <typename T = void> T set_CrossSeasonAward_1_agingtime(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8F08))(this, value);
	}
	template <typename T = int32_t> T get_CrossSeasonAward_1_reserve() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8F10))(this);
	}
	template <typename T = void> T set_CrossSeasonAward_1_reserve(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8F18))(this, value);
	}
	template <typename T = int32_t> T get_CountDownSwitch() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8F20))(this);
	}
	template <typename T = void> T set_CountDownSwitch(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8F28))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOCID_SeasonNumber() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8F30))(this);
	}
	template <typename T = void> T set_LOCID_SeasonNumber(Il2CppString* value) {
		return ((T (*)(SpTimelimitConfig*, Il2CppString*))(Il2CppBase() + 0x30E8F38))(this, value);
	}
	template <typename T = Il2CppString*> T get_SeasonNumber() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8F40))(this);
	}
	template <typename T = int32_t> T get_GspAmendExpSwitch() {
		return ((T (*)(SpTimelimitConfig*))(Il2CppBase() + 0x30E8F50))(this);
	}
	template <typename T = void> T set_GspAmendExpSwitch(int32_t value) {
		return ((T (*)(SpTimelimitConfig*, int32_t))(Il2CppBase() + 0x30E8F58))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SpTimelimitConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E8F60))(this, bytes, position);
	}

};

}
