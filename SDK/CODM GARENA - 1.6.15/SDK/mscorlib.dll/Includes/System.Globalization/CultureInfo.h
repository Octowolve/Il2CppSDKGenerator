#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class CultureInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "CultureInfo"));
	}

	template <typename T = int32_t> static T& NumOptionalCalendars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& GregorianTypeMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CalendarTypeBits() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& InvariantCultureId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& invariant_culture_info() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& shared_table_lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& BootstrapCultureID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& m_isReadOnly() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& cultureID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& parent_lcid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& specific_lcid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& datetime_index() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& number_index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_useUserOverride() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& numInfo() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& dateTimeInfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& textInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& m_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& displayname() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& englishname() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& nativename() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& iso3lang() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& iso2lang() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& icu_name() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& win3lang() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> T& territory() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& compareInfo() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& calendar_data() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& textinfo_data() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& optional_calendars() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& parent_culture() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_dataItem() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& calendar() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& constructed() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cached_serialized_form() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> static T& MSG_READONLY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& shared_by_number() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& shared_by_name() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map19() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map1A() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> static T get_InvariantCulture() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FCA4E8))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentCulture() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD4554))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentUICulture() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD4610))(0);
	}
	template <typename T = uintptr_t> static T ConstructCurrentCulture() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD46CC))(0);
	}
	template <typename T = uintptr_t> static T ConstructCurrentUICulture() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD48CC))(0);
	}
	template <typename T = Il2CppString*> T get_Territory() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD4964))(this);
	}
	template <typename T = int32_t> T get_LCID() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD496C))(this);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD4974))(this);
	}
	template <typename T = uintptr_t> T get_Parent() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD497C))(this);
	}
	template <typename T = uintptr_t> T get_TextInfo() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD4ADC))(this);
	}
	template <typename T = Il2CppString*> T get_IcuName() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD2080))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD4C5C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(CultureInfo*, uintptr_t))(Il2CppBase() + 0x3FD52D8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetCultures(uintptr_t types) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD53A0))(0, types);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD5578))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD5580))(this);
	}
	template <typename T = uintptr_t> T get_CompareInfo() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD5588))(this);
	}
	template <typename T = bool> T get_IsNeutralCulture() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD56C8))(this);
	}
	template <typename T = void> T CheckNeutral() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD5720))(this);
	}
	template <typename T = uintptr_t> T get_NumberFormat() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD5854))(this);
	}
	template <typename T = void> T set_NumberFormat(uintptr_t value) {
		return ((T (*)(CultureInfo*, uintptr_t))(Il2CppBase() + 0x3FD59C4))(this, value);
	}
	template <typename T = uintptr_t> T get_DateTimeFormat() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD5B54))(this);
	}
	template <typename T = void> T set_DateTimeFormat(uintptr_t value) {
		return ((T (*)(CultureInfo*, uintptr_t))(Il2CppBase() + 0x3FD60F0))(this, value);
	}
	template <typename T = Il2CppString*> T get_DisplayName() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD6280))(this);
	}
	template <typename T = bool> T get_IsReadOnly() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD62B4))(this);
	}
	template <typename T = uintptr_t> T GetFormat(uintptr_t formatType) {
		return ((T (*)(CultureInfo*, uintptr_t))(Il2CppBase() + 0x3FD62BC))(this, formatType);
	}
	template <typename T = void> T Construct() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD4ABC))(this);
	}
	template <typename T = bool> T ConstructInternalLocaleFromName(Il2CppString* locale) {
		return ((T (*)(CultureInfo*, Il2CppString*))(Il2CppBase() + 0x3FD41A0))(this, locale);
	}
	template <typename T = bool> T ConstructInternalLocaleFromLcid(int32_t lcid) {
		return ((T (*)(CultureInfo*, int32_t))(Il2CppBase() + 0x3FD3F74))(this, lcid);
	}
	template <typename T = bool> static T ConstructInternalLocaleFromCurrentLocale(uintptr_t ci) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD482C))(0, ci);
	}
	template <typename T = bool> T construct_internal_locale_from_lcid(int32_t lcid) {
		return ((T (*)(CultureInfo*, int32_t))(Il2CppBase() + 0x3FD6418))(this, lcid);
	}
	template <typename T = bool> T construct_internal_locale_from_name(Il2CppString* name) {
		return ((T (*)(CultureInfo*, Il2CppString*))(Il2CppBase() + 0x3FD641C))(this, name);
	}
	template <typename T = bool> static T construct_internal_locale_from_current_locale(uintptr_t ci) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD6420))(0, ci);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T internal_get_cultures(bool neutral, bool specific, bool installed) {
		return ((T (*)(void *, bool, bool, bool))(Il2CppBase() + 0x3FD5568))(0, neutral, specific, installed);
	}
	template <typename T = void> T construct_datetime_format() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD5F98))(this);
	}
	template <typename T = void> T construct_number_format() {
		return ((T (*)(CultureInfo*))(Il2CppBase() + 0x3FD59C0))(this);
	}
	template <typename T = void> T ConstructInvariant(bool read_only) {
		return ((T (*)(CultureInfo*, bool))(Il2CppBase() + 0x3FD3B44))(this, read_only);
	}
	template <typename T = uintptr_t> T CreateTextInfo(bool readOnly) {
		return ((T (*)(CultureInfo*, bool))(Il2CppBase() + 0x3FD4BAC))(this, readOnly);
	}
	template <typename T = void> static T insert_into_shared_tables(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3FD685C))(0, c);
	}
	template <typename T = uintptr_t> static T GetCultureInfo(int32_t culture) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3FD6A9C))(0, culture);
	}
	template <typename T = uintptr_t> static T GetCultureInfo_1(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FD6D3C))(0, name);
	}
	template <typename T = uintptr_t> static T CreateCulture(Il2CppString* name, bool reference) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3FD700C))(0, name, reference);
	}

};

}
