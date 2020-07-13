#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ClientLimitOfferInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ClientLimitOfferInfo"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& AreaId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ShowArea() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Sort() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Skip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SkipParam() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& SkipParamString() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& SpecialTitle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& SpriteName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& SkipURL() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& PosterUrl() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& PictureUrl() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& PictureUrlSmall() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& StayTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& BeginDate() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& EndDate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& LabelBG() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& LabelContent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& ShowCountDown() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<int32_t>*> T& moduleSwitch() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_ID() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9C4))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D914))(this, value);
	}
	template <typename T = int32_t> T get_AreaId() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9CC))(this);
	}
	template <typename T = void> T set_AreaId(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D91C))(this, value);
	}
	template <typename T = int32_t> T get_ShowArea() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9D4))(this);
	}
	template <typename T = void> T set_ShowArea(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D924))(this, value);
	}
	template <typename T = int32_t> T get_Sort() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9DC))(this);
	}
	template <typename T = void> T set_Sort(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D92C))(this, value);
	}
	template <typename T = int32_t> T get_Skip() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9E4))(this);
	}
	template <typename T = void> T set_Skip(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D934))(this, value);
	}
	template <typename T = int32_t> T get_SkipParam() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9EC))(this);
	}
	template <typename T = void> T set_SkipParam(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D93C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SkipParamString() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9F4))(this);
	}
	template <typename T = void> T set_SkipParamString(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D9B4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5D9FC))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D944))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpecialTitle() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA04))(this);
	}
	template <typename T = void> T set_SpecialTitle(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D9BC))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpriteName() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA0C))(this);
	}
	template <typename T = void> T set_SpriteName(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D95C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SkipURL() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA14))(this);
	}
	template <typename T = void> T set_SkipURL(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D964))(this, value);
	}
	template <typename T = Il2CppString*> T get_PosterUrl() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA1C))(this);
	}
	template <typename T = void> T set_PosterUrl(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D96C))(this, value);
	}
	template <typename T = Il2CppString*> T get_PictureUrl() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA24))(this);
	}
	template <typename T = void> T set_PictureUrl(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D974))(this, value);
	}
	template <typename T = Il2CppString*> T get_PictureUrlSmall() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA2C))(this);
	}
	template <typename T = void> T set_PictureUrlSmall(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D97C))(this, value);
	}
	template <typename T = int32_t> T get_StayTime() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA34))(this);
	}
	template <typename T = void> T set_StayTime(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D984))(this, value);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA3C))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D98C))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA44))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D994))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA4C))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D99C))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA54))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(ClientLimitOfferInfo*, int32_t))(Il2CppBase() + 0x2D5D9A4))(this, value);
	}
	template <typename T = Il2CppString*> T get_LabelBG() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA5C))(this);
	}
	template <typename T = void> T set_LabelBG(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D94C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LabelContent() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA64))(this);
	}
	template <typename T = void> T set_LabelContent(Il2CppString* value) {
		return ((T (*)(ClientLimitOfferInfo*, Il2CppString*))(Il2CppBase() + 0x2D5D954))(this, value);
	}
	template <typename T = bool> T get_ShowCountDown() {
		return ((T (*)(ClientLimitOfferInfo*))(Il2CppBase() + 0x2D5DA6C))(this);
	}
	template <typename T = void> T set_ShowCountDown(bool value) {
		return ((T (*)(ClientLimitOfferInfo*, bool))(Il2CppBase() + 0x2D5D9AC))(this, value);
	}

};

}
