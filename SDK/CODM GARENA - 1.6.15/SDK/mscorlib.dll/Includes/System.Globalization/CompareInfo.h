#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Globalization {

class CompareInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Globalization", "CompareInfo"));
	}

	template <typename T = bool> static T& useManagedCollation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& culture() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& icu_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& collator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& collators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& monitor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(uintptr_t sender) {
		return ((T (*)(CompareInfo*, uintptr_t))(Il2CppBase() + 0x3FD2234))(this, sender);
	}
	template <typename T = bool> static T get_UseManagedCollation() {
		return ((T (*)(void *))(Il2CppBase() + 0x3FD1FD0))(0);
	}
	template <typename T = void> T construct_compareinfo(Il2CppString* locale) {
		return ((T (*)(CompareInfo*, Il2CppString*))(Il2CppBase() + 0x3FD20B4))(this, locale);
	}
	template <typename T = void> T free_internal_collator() {
		return ((T (*)(CompareInfo*))(Il2CppBase() + 0x3FD2410))(this);
	}
	template <typename T = int32_t> T internal_compare(Il2CppString* str1, int32_t offset1, int32_t length1, Il2CppString* str2, int32_t offset2, int32_t length2, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3FD2414))(this, str1, offset1, length1, str2, offset2, length2, options);
	}
	template <typename T = void> T assign_sortkey(uintptr_t key, Il2CppString* source, uintptr_t options) {
		return ((T (*)(CompareInfo*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FD2418))(this, key, source, options);
	}
	template <typename T = int32_t> T internal_index(Il2CppString* source, int32_t sindex, int32_t count, Il2CppString* value, uintptr_t options, bool first) {
		return ((T (*)(CompareInfo*, Il2CppString*, int32_t, int32_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x3FD241C))(this, source, sindex, count, value, options, first);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(CompareInfo*))(Il2CppBase() + 0x3FD2448))(this);
	}
	template <typename T = int32_t> T internal_compare_managed(Il2CppString* str1, int32_t offset1, int32_t length1, Il2CppString* str2, int32_t offset2, int32_t length2, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3FD24AC))(this, str1, offset1, length1, str2, offset2, length2, options);
	}
	template <typename T = int32_t> T internal_compare_switch(Il2CppString* str1, int32_t offset1, int32_t length1, Il2CppString* str2, int32_t offset2, int32_t length2, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3FD2500))(this, str1, offset1, length1, str2, offset2, length2, options);
	}
	template <typename T = int32_t> T Compare(Il2CppString* string1, Il2CppString* string2) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FD2608))(this, string1, string2);
	}
	template <typename T = int32_t> T Compare_1(Il2CppString* string1, Il2CppString* string2, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FD2634))(this, string1, string2, options);
	}
	template <typename T = int32_t> T Compare_2(Il2CppString* string1, int32_t offset1, int32_t length1, Il2CppString* string2, int32_t offset2, int32_t length2, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, int32_t, int32_t, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3FD27A0))(this, string1, offset1, length1, string2, offset2, length2, options);
	}
	template <typename T = bool> T Equals(uintptr_t value) {
		return ((T (*)(CompareInfo*, uintptr_t))(Il2CppBase() + 0x3FD2AA0))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(CompareInfo*))(Il2CppBase() + 0x3FD2B68))(this);
	}
	template <typename T = uintptr_t> T GetSortKey(Il2CppString* source, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FD2B78))(this, source, options);
	}
	template <typename T = int32_t> T IndexOf(Il2CppString* source, Il2CppString* value) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3FD2D40))(this, source, value);
	}
	template <typename T = int32_t> T IndexOf_1(Il2CppString* source, Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3FD2DAC))(this, source, value, startIndex, count);
	}
	template <typename T = int32_t> T internal_index_managed(Il2CppString* s1, int32_t sindex, int32_t count, Il2CppString* s2, uintptr_t opt, bool first) {
		return ((T (*)(CompareInfo*, Il2CppString*, int32_t, int32_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x3FD2DDC))(this, s1, sindex, count, s2, opt, first);
	}
	template <typename T = int32_t> T internal_index_switch(Il2CppString* s1, int32_t sindex, int32_t count, Il2CppString* s2, uintptr_t opt, bool first) {
		return ((T (*)(CompareInfo*, Il2CppString*, int32_t, int32_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x3FD2E50))(this, s1, sindex, count, s2, opt, first);
	}
	template <typename T = int32_t> T IndexOf_2(Il2CppString* source, Il2CppString* value, int32_t startIndex, int32_t count, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3FD2F6C))(this, source, value, startIndex, count, options);
	}
	template <typename T = bool> T IsPrefix(Il2CppString* source, Il2CppString* prefix, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FD31B0))(this, source, prefix, options);
	}
	template <typename T = bool> T IsSuffix(Il2CppString* source, Il2CppString* suffix, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FD33B4))(this, source, suffix, options);
	}
	template <typename T = int32_t> T LastIndexOf(Il2CppString* source, Il2CppString* value, int32_t startIndex, int32_t count) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3FD35E0))(this, source, value, startIndex, count);
	}
	template <typename T = int32_t> T LastIndexOf_1(Il2CppString* source, Il2CppString* value, int32_t startIndex, int32_t count, uintptr_t options) {
		return ((T (*)(CompareInfo*, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x3FD3610))(this, source, value, startIndex, count, options);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(CompareInfo*))(Il2CppBase() + 0x3FD384C))(this);
	}
	template <typename T = int32_t> T get_LCID() {
		return ((T (*)(CompareInfo*))(Il2CppBase() + 0x3FD2B70))(this);
	}

};

}
