#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class OTORechargeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "OTORechargeConfig"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& IsActvBack() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RechargeId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SubRechargeId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ZoneId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PlatId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ProductID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Price() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Reward_url() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Pic_url() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Flag() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& SpecialItemId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& SpecialItemNum() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Discount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& RewardId_1() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& RewardNum_1() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& RewardId_2() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& RewardNum_2() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& RewardId_3() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& RewardNum_3() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint32_t> T& RewardId_4() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& RewardNum_4() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uint32_t> T& RewardId_5() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& RewardNum_5() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& RewardId_6() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& RewardNum_6() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& BeginDate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& EndDate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsShowLocalTime() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& ColorTitle() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& ColorTitleTop() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& ColorDesc() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppString*> T& ColorDescBg() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppString*> T& ColorContent() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppString*> T& ColorTime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppString*> T& ColorPrice() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppString*> T& ColorDiscount() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& ColorBtnLabel() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& ColorFrame() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = bool> T& Abtest_conf_enable_abtest() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_group_id() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& Abtest_conf_abtest_ratio() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_cond_start_time() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_cond_stat_duration() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_cond_logic_op() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_effect_duration() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_1_abtest_cond_type() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_1_abtest_cond_sub_type() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_1_abtest_cond_sub_type2() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_1_abtest_cond_value1() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_1_abtest_cond_value2() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_2_abtest_cond_type() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_2_abtest_cond_sub_type() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_2_abtest_cond_sub_type2() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_2_abtest_cond_value1() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_2_abtest_cond_value2() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_3_abtest_cond_type() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_3_abtest_cond_sub_type() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_3_abtest_cond_sub_type2() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_3_abtest_cond_value1() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = int32_t> T& Abtest_conf_abtest_recomm_cond_3_abtest_cond_value2() {
		return *(T*)((uintptr_t)this + 0x10C);
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
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DC78))(this);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD18))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DD20))(this, value);
	}
	template <typename T = int32_t> T get_IsActvBack() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD28))(this);
	}
	template <typename T = void> T set_IsActvBack(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DD30))(this, value);
	}
	template <typename T = int32_t> T get_RechargeId() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD38))(this);
	}
	template <typename T = void> T set_RechargeId(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DD40))(this, value);
	}
	template <typename T = int32_t> T get_SubRechargeId() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD48))(this);
	}
	template <typename T = void> T set_SubRechargeId(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DD50))(this, value);
	}
	template <typename T = int32_t> T get_ZoneId() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD58))(this);
	}
	template <typename T = void> T set_ZoneId(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DD60))(this, value);
	}
	template <typename T = int32_t> T get_PlatId() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD68))(this);
	}
	template <typename T = void> T set_PlatId(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DD70))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProductID() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD78))(this);
	}
	template <typename T = void> T set_ProductID(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DD80))(this, value);
	}
	template <typename T = float> T get_Price() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD88))(this);
	}
	template <typename T = void> T set_Price(float value) {
		return ((T (*)(OTORechargeConfig*, float))(Il2CppBase() + 0x377DD90))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DD98))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DDA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DDA8))(this);
	}
	template <typename T = void> T set_Content(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DDB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Reward_url() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DDB8))(this);
	}
	template <typename T = void> T set_Reward_url(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DDC0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Pic_url() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DDC8))(this);
	}
	template <typename T = void> T set_Pic_url(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DDD0))(this, value);
	}
	template <typename T = int32_t> T get_Flag() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DDD8))(this);
	}
	template <typename T = void> T set_Flag(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DDE0))(this, value);
	}
	template <typename T = uint32_t> T get_SpecialItemId() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DDE8))(this);
	}
	template <typename T = void> T set_SpecialItemId(uint32_t value) {
		return ((T (*)(OTORechargeConfig*, uint32_t))(Il2CppBase() + 0x377DDF0))(this, value);
	}
	template <typename T = int32_t> T get_SpecialItemNum() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DDF8))(this);
	}
	template <typename T = void> T set_SpecialItemNum(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DE00))(this, value);
	}
	template <typename T = int32_t> T get_Discount() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE08))(this);
	}
	template <typename T = void> T set_Discount(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DE10))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_1() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE18))(this);
	}
	template <typename T = void> T set_RewardId_1(uint32_t value) {
		return ((T (*)(OTORechargeConfig*, uint32_t))(Il2CppBase() + 0x377DE20))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_1() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE28))(this);
	}
	template <typename T = void> T set_RewardNum_1(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DE30))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE38))(this);
	}
	template <typename T = void> T set_RewardId_2(uint32_t value) {
		return ((T (*)(OTORechargeConfig*, uint32_t))(Il2CppBase() + 0x377DE40))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE48))(this);
	}
	template <typename T = void> T set_RewardNum_2(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DE50))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_3() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE58))(this);
	}
	template <typename T = void> T set_RewardId_3(uint32_t value) {
		return ((T (*)(OTORechargeConfig*, uint32_t))(Il2CppBase() + 0x377DE60))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_3() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE68))(this);
	}
	template <typename T = void> T set_RewardNum_3(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DE70))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_4() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE78))(this);
	}
	template <typename T = void> T set_RewardId_4(uint32_t value) {
		return ((T (*)(OTORechargeConfig*, uint32_t))(Il2CppBase() + 0x377DE80))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_4() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE88))(this);
	}
	template <typename T = void> T set_RewardNum_4(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DE90))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_5() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DE98))(this);
	}
	template <typename T = void> T set_RewardId_5(uint32_t value) {
		return ((T (*)(OTORechargeConfig*, uint32_t))(Il2CppBase() + 0x377DEA0))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_5() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DEA8))(this);
	}
	template <typename T = void> T set_RewardNum_5(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DEB0))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_6() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DEB8))(this);
	}
	template <typename T = void> T set_RewardId_6(uint32_t value) {
		return ((T (*)(OTORechargeConfig*, uint32_t))(Il2CppBase() + 0x377DEC0))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_6() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DEC8))(this);
	}
	template <typename T = void> T set_RewardNum_6(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DED0))(this, value);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DED8))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DEE0))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DEE8))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DEF0))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DEF8))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DF00))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF08))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DF10))(this, value);
	}
	template <typename T = bool> T get_IsShowLocalTime() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF18))(this);
	}
	template <typename T = void> T set_IsShowLocalTime(bool value) {
		return ((T (*)(OTORechargeConfig*, bool))(Il2CppBase() + 0x377DF20))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorTitle() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF28))(this);
	}
	template <typename T = void> T set_ColorTitle(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DF30))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorTitleTop() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF38))(this);
	}
	template <typename T = void> T set_ColorTitleTop(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DF40))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorDesc() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF48))(this);
	}
	template <typename T = void> T set_ColorDesc(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DF50))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorDescBg() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF58))(this);
	}
	template <typename T = void> T set_ColorDescBg(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DF60))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorContent() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF68))(this);
	}
	template <typename T = void> T set_ColorContent(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DF70))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorTime() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF78))(this);
	}
	template <typename T = void> T set_ColorTime(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DF80))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorPrice() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF88))(this);
	}
	template <typename T = void> T set_ColorPrice(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DF90))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorDiscount() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DF98))(this);
	}
	template <typename T = void> T set_ColorDiscount(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DFA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorBtnLabel() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DFA8))(this);
	}
	template <typename T = void> T set_ColorBtnLabel(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DFB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorFrame() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DFB8))(this);
	}
	template <typename T = void> T set_ColorFrame(Il2CppString* value) {
		return ((T (*)(OTORechargeConfig*, Il2CppString*))(Il2CppBase() + 0x377DFC0))(this, value);
	}
	template <typename T = bool> T get_Abtest_conf_enable_abtest() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DFC8))(this);
	}
	template <typename T = void> T set_Abtest_conf_enable_abtest(bool value) {
		return ((T (*)(OTORechargeConfig*, bool))(Il2CppBase() + 0x377DFD0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_group_id() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DFD8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_group_id(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377DFE0))(this, value);
	}
	template <typename T = float> T get_Abtest_conf_abtest_ratio() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DFE8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_ratio(float value) {
		return ((T (*)(OTORechargeConfig*, float))(Il2CppBase() + 0x377DFF0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_cond_start_time() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377DFF8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_cond_start_time(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E000))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_cond_stat_duration() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E008))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_cond_stat_duration(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E010))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_cond_logic_op() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E018))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_cond_logic_op(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E020))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_effect_duration() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E028))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_effect_duration(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E030))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_1_abtest_cond_type() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E038))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_1_abtest_cond_type(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E040))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_1_abtest_cond_sub_type() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E048))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_1_abtest_cond_sub_type(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E050))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_1_abtest_cond_sub_type2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E058))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_1_abtest_cond_sub_type2(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E060))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_1_abtest_cond_value1() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E068))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_1_abtest_cond_value1(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E070))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_1_abtest_cond_value2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E078))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_1_abtest_cond_value2(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E080))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_2_abtest_cond_type() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E088))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_2_abtest_cond_type(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E090))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_2_abtest_cond_sub_type() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E098))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_2_abtest_cond_sub_type(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E0A0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_2_abtest_cond_sub_type2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E0A8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_2_abtest_cond_sub_type2(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E0B0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_2_abtest_cond_value1() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E0B8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_2_abtest_cond_value1(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E0C0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_2_abtest_cond_value2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E0C8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_2_abtest_cond_value2(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E0D0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_3_abtest_cond_type() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E0D8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_3_abtest_cond_type(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E0E0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_3_abtest_cond_sub_type() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E0E8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_3_abtest_cond_sub_type(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E0F0))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_3_abtest_cond_sub_type2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E0F8))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_3_abtest_cond_sub_type2(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E100))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_3_abtest_cond_value1() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E108))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_3_abtest_cond_value1(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E110))(this, value);
	}
	template <typename T = int32_t> T get_Abtest_conf_abtest_recomm_cond_3_abtest_cond_value2() {
		return ((T (*)(OTORechargeConfig*))(Il2CppBase() + 0x377E118))(this);
	}
	template <typename T = void> T set_Abtest_conf_abtest_recomm_cond_3_abtest_cond_value2(int32_t value) {
		return ((T (*)(OTORechargeConfig*, int32_t))(Il2CppBase() + 0x377E120))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(OTORechargeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x377E128))(this, bytes, position);
	}

};

}
