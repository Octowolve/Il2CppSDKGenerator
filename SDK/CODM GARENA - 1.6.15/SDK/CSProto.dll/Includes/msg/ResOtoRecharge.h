#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResOtoRecharge
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResOtoRecharge"));
	}

	template <typename T = int32_t> T& _Order() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _RechargeId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ZoneId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _PlatId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _OtoType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _OtoSerialNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _Duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ProductID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _Price() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _UITemplateId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _UITemplateParam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Title() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Content() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reward_url() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Pic_url() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _ResetLimitNumDay() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _LimitNum() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& _SpecialItemId() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _SpecialItemNum() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _Discount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _RewardItem() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _BeginDate() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _EndDate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& _IsShowLocalTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorTitle() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorTitleTop() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorDesc() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorDescBg() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorContent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorTime() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorPrice() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorDiscount() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorBtnLabel() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ColorFrame() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _abtest_conf() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uint32_t> T& _chainoto_endtime() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uint32_t> T& _test_expire_time() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = bool> T& _IsActvBack() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uint32_t> T& _starttimestamp() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uint32_t> T& _endtimestamp() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& _ext_info() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xBC);
	}

	template <typename T = int32_t> T get_Order() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071738))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071740))(this, value);
	}
	template <typename T = int32_t> T get_RechargeId() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071748))(this);
	}
	template <typename T = void> T set_RechargeId(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071750))(this, value);
	}
	template <typename T = int32_t> T get_ZoneId() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071758))(this);
	}
	template <typename T = void> T set_ZoneId(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071760))(this, value);
	}
	template <typename T = int32_t> T get_PlatId() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071768))(this);
	}
	template <typename T = void> T set_PlatId(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071770))(this, value);
	}
	template <typename T = int32_t> T get_OtoType() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071778))(this);
	}
	template <typename T = void> T set_OtoType(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071780))(this, value);
	}
	template <typename T = int32_t> T get_OtoSerialNum() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071788))(this);
	}
	template <typename T = void> T set_OtoSerialNum(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071790))(this, value);
	}
	template <typename T = uint32_t> T get_Duration() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071798))(this);
	}
	template <typename T = void> T set_Duration(uint32_t value) {
		return ((T (*)(ResOtoRecharge*, uint32_t))(Il2CppBase() + 0x50717A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ProductID() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50717A8))(this);
	}
	template <typename T = void> T set_ProductID(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50717B0))(this, value);
	}
	template <typename T = float> T get_Price() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50717B8))(this);
	}
	template <typename T = void> T set_Price(float value) {
		return ((T (*)(ResOtoRecharge*, float))(Il2CppBase() + 0x50717C0))(this, value);
	}
	template <typename T = int32_t> T get_UITemplateId() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50717C8))(this);
	}
	template <typename T = void> T set_UITemplateId(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x50717D0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_UITemplateParam() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50717D8))(this);
	}
	template <typename T = void> T set_UITemplateParam(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50717E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Title() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50717E8))(this);
	}
	template <typename T = void> T set_Title(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50717F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Content() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50717F8))(this);
	}
	template <typename T = void> T set_Content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071800))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reward_url() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071808))(this);
	}
	template <typename T = void> T set_reward_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071810))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Pic_url() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071818))(this);
	}
	template <typename T = void> T set_Pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071820))(this, value);
	}
	template <typename T = int32_t> T get_ResetLimitNumDay() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071828))(this);
	}
	template <typename T = void> T set_ResetLimitNumDay(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071830))(this, value);
	}
	template <typename T = int32_t> T get_LimitNum() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071838))(this);
	}
	template <typename T = void> T set_LimitNum(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071840))(this, value);
	}
	template <typename T = uint32_t> T get_SpecialItemId() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071848))(this);
	}
	template <typename T = void> T set_SpecialItemId(uint32_t value) {
		return ((T (*)(ResOtoRecharge*, uint32_t))(Il2CppBase() + 0x5071850))(this, value);
	}
	template <typename T = int32_t> T get_SpecialItemNum() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071858))(this);
	}
	template <typename T = void> T set_SpecialItemNum(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071860))(this, value);
	}
	template <typename T = int32_t> T get_Discount() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071868))(this);
	}
	template <typename T = void> T set_Discount(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071870))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_RewardItem() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071878))(this);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071880))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071888))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071890))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x5071898))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50718A0))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x50718A8))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50718B0))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(ResOtoRecharge*, int32_t))(Il2CppBase() + 0x50718B8))(this, value);
	}
	template <typename T = bool> T get_IsShowLocalTime() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50718C0))(this);
	}
	template <typename T = void> T set_IsShowLocalTime(bool value) {
		return ((T (*)(ResOtoRecharge*, bool))(Il2CppBase() + 0x50718C8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorTitle() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50718D0))(this);
	}
	template <typename T = void> T set_ColorTitle(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50718D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorTitleTop() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50718E0))(this);
	}
	template <typename T = void> T set_ColorTitleTop(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50718E8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorDesc() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50718F0))(this);
	}
	template <typename T = void> T set_ColorDesc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50718F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorDescBg() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071900))(this);
	}
	template <typename T = void> T set_ColorDescBg(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071908))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorContent() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071910))(this);
	}
	template <typename T = void> T set_ColorContent(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071918))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorTime() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071920))(this);
	}
	template <typename T = void> T set_ColorTime(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071928))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorPrice() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071930))(this);
	}
	template <typename T = void> T set_ColorPrice(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071938))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorDiscount() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071940))(this);
	}
	template <typename T = void> T set_ColorDiscount(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071948))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorBtnLabel() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071950))(this);
	}
	template <typename T = void> T set_ColorBtnLabel(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071958))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ColorFrame() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071960))(this);
	}
	template <typename T = void> T set_ColorFrame(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResOtoRecharge*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071968))(this, value);
	}
	template <typename T = uint64_t> T get_id() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071970))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(ResOtoRecharge*, uint64_t))(Il2CppBase() + 0x5071978))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_conf() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071988))(this);
	}
	template <typename T = void> T set_abtest_conf(uintptr_t value) {
		return ((T (*)(ResOtoRecharge*, uintptr_t))(Il2CppBase() + 0x5071990))(this, value);
	}
	template <typename T = uint32_t> T get_chainoto_endtime() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x5071998))(this);
	}
	template <typename T = void> T set_chainoto_endtime(uint32_t value) {
		return ((T (*)(ResOtoRecharge*, uint32_t))(Il2CppBase() + 0x50719A0))(this, value);
	}
	template <typename T = uint32_t> T get_test_expire_time() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50719A8))(this);
	}
	template <typename T = void> T set_test_expire_time(uint32_t value) {
		return ((T (*)(ResOtoRecharge*, uint32_t))(Il2CppBase() + 0x50719B0))(this, value);
	}
	template <typename T = bool> T get_IsActvBack() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50719B8))(this);
	}
	template <typename T = void> T set_IsActvBack(bool value) {
		return ((T (*)(ResOtoRecharge*, bool))(Il2CppBase() + 0x50719C0))(this, value);
	}
	template <typename T = uint32_t> T get_starttimestamp() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50719C8))(this);
	}
	template <typename T = void> T set_starttimestamp(uint32_t value) {
		return ((T (*)(ResOtoRecharge*, uint32_t))(Il2CppBase() + 0x50719D0))(this, value);
	}
	template <typename T = uint32_t> T get_endtimestamp() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50719D8))(this);
	}
	template <typename T = void> T set_endtimestamp(uint32_t value) {
		return ((T (*)(ResOtoRecharge*, uint32_t))(Il2CppBase() + 0x50719E0))(this, value);
	}
	template <typename T = uintptr_t> T get_ext_info() {
		return ((T (*)(ResOtoRecharge*))(Il2CppBase() + 0x50719E8))(this);
	}
	template <typename T = void> T set_ext_info(uintptr_t value) {
		return ((T (*)(ResOtoRecharge*, uintptr_t))(Il2CppBase() + 0x50719F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResOtoRecharge*, bool))(Il2CppBase() + 0x50719F8))(this, createIfMissing);
	}

};

}
