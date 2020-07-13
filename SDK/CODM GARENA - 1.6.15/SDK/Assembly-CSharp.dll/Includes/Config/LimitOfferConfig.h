#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LimitOfferConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LimitOfferConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& CountryId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ShowArea() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Skip() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& SkipParam() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PictureUrl() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& StayTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& BeginDate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& EndDate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Sort() {
		return *(T*)((uintptr_t)this + 0x3C);
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
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774478))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774518))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x3774520))(this, value);
	}
	template <typename T = int32_t> T get_CountryId() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774528))(this);
	}
	template <typename T = void> T set_CountryId(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x3774530))(this, value);
	}
	template <typename T = int32_t> T get_ShowArea() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774538))(this);
	}
	template <typename T = void> T set_ShowArea(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x3774540))(this, value);
	}
	template <typename T = int32_t> T get_Skip() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774548))(this);
	}
	template <typename T = void> T set_Skip(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x3774550))(this, value);
	}
	template <typename T = int32_t> T get_SkipParam() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774558))(this);
	}
	template <typename T = void> T set_SkipParam(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x3774560))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774568))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(LimitOfferConfig*, Il2CppString*))(Il2CppBase() + 0x3774570))(this, value);
	}
	template <typename T = Il2CppString*> T get_PictureUrl() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774578))(this);
	}
	template <typename T = void> T set_PictureUrl(Il2CppString* value) {
		return ((T (*)(LimitOfferConfig*, Il2CppString*))(Il2CppBase() + 0x3774580))(this, value);
	}
	template <typename T = int32_t> T get_StayTime() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774588))(this);
	}
	template <typename T = void> T set_StayTime(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x3774590))(this, value);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x3774598))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x37745A0))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x37745A8))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x37745B0))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x37745B8))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x37745C0))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x37745C8))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x37745D0))(this, value);
	}
	template <typename T = int32_t> T get_Sort() {
		return ((T (*)(LimitOfferConfig*))(Il2CppBase() + 0x37745D8))(this);
	}
	template <typename T = void> T set_Sort(int32_t value) {
		return ((T (*)(LimitOfferConfig*, int32_t))(Il2CppBase() + 0x37745E0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LimitOfferConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37745E8))(this, bytes, position);
	}

};

}
