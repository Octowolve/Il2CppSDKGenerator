#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResLimitOffer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResLimitOffer"));
	}

	template <typename T = int32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _AreaId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _ShowArea() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _Sort() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _Skip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _SkipParam() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SkipParamString() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _moduleSwitch() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& _IntmoduleSwitch() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _Title() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SpecialTitle() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SpriteName() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PictureUrl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PictureUrlSmall() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _StayTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _ShowCountdown() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _ShowPrice() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _BeginDate() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _EndDate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _StartTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _EndTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LabelContent() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _LabelBG() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _abtest_conf() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& _conf_end_timestamp() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _PosterURL() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _SkipURL() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& _starttimestamp() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uint32_t> T& _endtimestamp() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _ext_info() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x80);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50714A0))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50714A8))(this, value);
	}
	template <typename T = int32_t> T get_AreaId() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50714B0))(this);
	}
	template <typename T = void> T set_AreaId(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50714B8))(this, value);
	}
	template <typename T = int32_t> T get_ShowArea() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50714C0))(this);
	}
	template <typename T = void> T set_ShowArea(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50714C8))(this, value);
	}
	template <typename T = int32_t> T get_Sort() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50714D0))(this);
	}
	template <typename T = void> T set_Sort(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50714D8))(this, value);
	}
	template <typename T = int32_t> T get_Skip() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50714E0))(this);
	}
	template <typename T = void> T set_Skip(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50714E8))(this, value);
	}
	template <typename T = int32_t> T get_SkipParam() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50714F0))(this);
	}
	template <typename T = void> T set_SkipParam(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50714F8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkipParamString() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071500))(this);
	}
	template <typename T = void> T set_SkipParamString(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071508))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_moduleSwitch() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071510))(this);
	}
	template <typename T = void> T set_moduleSwitch(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071518))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_IntmoduleSwitch() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071520))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Title() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071528))(this);
	}
	template <typename T = void> T set_Title(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071530))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SpecialTitle() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071538))(this);
	}
	template <typename T = void> T set_SpecialTitle(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071540))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SpriteName() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071548))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071550))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PictureUrl() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071558))(this);
	}
	template <typename T = void> T set_PictureUrl(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071560))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PictureUrlSmall() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071568))(this);
	}
	template <typename T = void> T set_PictureUrlSmall(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071570))(this, value);
	}
	template <typename T = int32_t> T get_StayTime() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071578))(this);
	}
	template <typename T = void> T set_StayTime(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x5071580))(this, value);
	}
	template <typename T = bool> T get_ShowCountdown() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071588))(this);
	}
	template <typename T = void> T set_ShowCountdown(bool value) {
		return ((T (*)(ResLimitOffer*, bool))(Il2CppBase() + 0x5071590))(this, value);
	}
	template <typename T = int32_t> T get_ShowPrice() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071598))(this);
	}
	template <typename T = void> T set_ShowPrice(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50715A0))(this, value);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50715A8))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50715B0))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50715B8))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50715C0))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50715C8))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50715D0))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50715D8))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(ResLimitOffer*, int32_t))(Il2CppBase() + 0x50715E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LabelContent() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50715E8))(this);
	}
	template <typename T = void> T set_LabelContent(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50715F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_LabelBG() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x50715F8))(this);
	}
	template <typename T = void> T set_LabelBG(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071600))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_conf() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071608))(this);
	}
	template <typename T = void> T set_abtest_conf(uintptr_t value) {
		return ((T (*)(ResLimitOffer*, uintptr_t))(Il2CppBase() + 0x5071610))(this, value);
	}
	template <typename T = uint32_t> T get_conf_end_timestamp() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071618))(this);
	}
	template <typename T = void> T set_conf_end_timestamp(uint32_t value) {
		return ((T (*)(ResLimitOffer*, uint32_t))(Il2CppBase() + 0x5071620))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_PosterURL() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071628))(this);
	}
	template <typename T = void> T set_PosterURL(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071630))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SkipURL() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071638))(this);
	}
	template <typename T = void> T set_SkipURL(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(ResLimitOffer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5071640))(this, value);
	}
	template <typename T = uint32_t> T get_starttimestamp() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071648))(this);
	}
	template <typename T = void> T set_starttimestamp(uint32_t value) {
		return ((T (*)(ResLimitOffer*, uint32_t))(Il2CppBase() + 0x5071650))(this, value);
	}
	template <typename T = uint32_t> T get_endtimestamp() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071658))(this);
	}
	template <typename T = void> T set_endtimestamp(uint32_t value) {
		return ((T (*)(ResLimitOffer*, uint32_t))(Il2CppBase() + 0x5071660))(this, value);
	}
	template <typename T = uintptr_t> T get_ext_info() {
		return ((T (*)(ResLimitOffer*))(Il2CppBase() + 0x5071668))(this);
	}
	template <typename T = void> T set_ext_info(uintptr_t value) {
		return ((T (*)(ResLimitOffer*, uintptr_t))(Il2CppBase() + 0x5071670))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResLimitOffer*, bool))(Il2CppBase() + 0x5071678))(this, createIfMissing);
	}

};

}
