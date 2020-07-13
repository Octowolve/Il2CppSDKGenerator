#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ClientOTOInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ClientOTOInfo"));
	}

	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& RechargeId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ZoneId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PlatId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& OtoType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& OtoSerialNum() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ProductID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& Price() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& UITemplateId() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& UITemplateParam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& Reward_url() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& Pic_url() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Flag() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& SpecialItemId() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SpecialItemNum() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& Discount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& BeginDate() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& EndDate() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uint64_t> T& ExpireTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsShowLocalTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& ColorTitle() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& ColorTitleTop() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& ColorDesc() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& ColorDescBg() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& ColorContent() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& ColorTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& ColorPrice() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& ColorDiscount() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppString*> T& ColorBtnLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& ColorFrame() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& awards() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Order() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E1E4))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E0DC))(this, value);
	}
	template <typename T = int32_t> T get_RechargeId() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E1EC))(this);
	}
	template <typename T = void> T set_RechargeId(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E0E4))(this, value);
	}
	template <typename T = int32_t> T get_ZoneId() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E1F4))(this);
	}
	template <typename T = void> T set_ZoneId(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E0EC))(this, value);
	}
	template <typename T = int32_t> T get_PlatId() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E1FC))(this);
	}
	template <typename T = void> T set_PlatId(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E0F4))(this, value);
	}
	template <typename T = int32_t> T get_OtoType() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E204))(this);
	}
	template <typename T = void> T set_OtoType(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E0FC))(this, value);
	}
	template <typename T = int32_t> T get_OtoSerialNum() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E20C))(this);
	}
	template <typename T = void> T set_OtoSerialNum(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E104))(this, value);
	}
	template <typename T = uint32_t> T get_Duration() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E214))(this);
	}
	template <typename T = void> T set_Duration(uint32_t value) {
		return ((T (*)(ClientOTOInfo*, uint32_t))(Il2CppBase() + 0x2D5E10C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ProductID() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E21C))(this);
	}
	template <typename T = void> T set_ProductID(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E114))(this, value);
	}
	template <typename T = float> T get_Price() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E224))(this);
	}
	template <typename T = void> T set_Price(float value) {
		return ((T (*)(ClientOTOInfo*, float))(Il2CppBase() + 0x2D5E11C))(this, value);
	}
	template <typename T = int32_t> T get_UITemplateId() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E22C))(this);
	}
	template <typename T = void> T set_UITemplateId(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E124))(this, value);
	}
	template <typename T = Il2CppString*> T get_UITemplateParam() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E234))(this);
	}
	template <typename T = void> T set_UITemplateParam(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E12C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E23C))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E134))(this, value);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E244))(this);
	}
	template <typename T = void> T set_Content(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E13C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Reward_url() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E24C))(this);
	}
	template <typename T = void> T set_Reward_url(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E144))(this, value);
	}
	template <typename T = Il2CppString*> T get_Pic_url() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E254))(this);
	}
	template <typename T = void> T set_Pic_url(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E14C))(this, value);
	}
	template <typename T = int32_t> T get_Flag() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E25C))(this);
	}
	template <typename T = void> T set_Flag(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E264))(this, value);
	}
	template <typename T = uint32_t> T get_SpecialItemId() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E26C))(this);
	}
	template <typename T = void> T set_SpecialItemId(uint32_t value) {
		return ((T (*)(ClientOTOInfo*, uint32_t))(Il2CppBase() + 0x2D5E274))(this, value);
	}
	template <typename T = int32_t> T get_SpecialItemNum() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E27C))(this);
	}
	template <typename T = void> T set_SpecialItemNum(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E284))(this, value);
	}
	template <typename T = int32_t> T get_Discount() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E28C))(this);
	}
	template <typename T = void> T set_Discount(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E154))(this, value);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E294))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E15C))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E29C))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E164))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2A4))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E16C))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2AC))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(ClientOTOInfo*, int32_t))(Il2CppBase() + 0x2D5E174))(this, value);
	}
	template <typename T = uint64_t> T get_ExpireTime() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2B4))(this);
	}
	template <typename T = void> T set_ExpireTime(uint64_t value) {
		return ((T (*)(ClientOTOInfo*, uint64_t))(Il2CppBase() + 0x2D5E184))(this, value);
	}
	template <typename T = bool> T get_IsShowLocalTime() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2BC))(this);
	}
	template <typename T = void> T set_IsShowLocalTime(bool value) {
		return ((T (*)(ClientOTOInfo*, bool))(Il2CppBase() + 0x2D5E17C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorTitle() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2C4))(this);
	}
	template <typename T = void> T set_ColorTitle(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E194))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorTitleTop() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2CC))(this);
	}
	template <typename T = void> T set_ColorTitleTop(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E19C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorDesc() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2D4))(this);
	}
	template <typename T = void> T set_ColorDesc(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorDescBg() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2DC))(this);
	}
	template <typename T = void> T set_ColorDescBg(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1AC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorContent() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2E4))(this);
	}
	template <typename T = void> T set_ColorContent(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorTime() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2EC))(this);
	}
	template <typename T = void> T set_ColorTime(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorPrice() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2F4))(this);
	}
	template <typename T = void> T set_ColorPrice(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorDiscount() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E2FC))(this);
	}
	template <typename T = void> T set_ColorDiscount(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorBtnLabel() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E304))(this);
	}
	template <typename T = void> T set_ColorBtnLabel(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1D4))(this, value);
	}
	template <typename T = Il2CppString*> T get_ColorFrame() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E30C))(this);
	}
	template <typename T = void> T set_ColorFrame(Il2CppString* value) {
		return ((T (*)(ClientOTOInfo*, Il2CppString*))(Il2CppBase() + 0x2D5E1DC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetRewards() {
		return ((T (*)(ClientOTOInfo*))(Il2CppBase() + 0x2D5E314))(this);
	}

};

}
