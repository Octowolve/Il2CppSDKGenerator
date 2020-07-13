#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class TimeZoneInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "TimeZoneInfo"));
	}

	template <typename T = uintptr_t> T& baseUtcOffset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& daylightDisplayName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& displayName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& local() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& standardDisplayName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& disableDaylightSavingTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& utc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& timeZoneDirectory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& adjustmentRules() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uintptr_t> T get_BaseUtcOffset() {
		return ((T (*)(TimeZoneInfo*))(Il2CppBase() + 0x4ED482C))(this);
	}
	template <typename T = Il2CppString*> T get_DisplayName() {
		return ((T (*)(TimeZoneInfo*))(Il2CppBase() + 0x4ED4838))(this);
	}
	template <typename T = Il2CppString*> T get_Id() {
		return ((T (*)(TimeZoneInfo*))(Il2CppBase() + 0x4ED4840))(this);
	}
	template <typename T = uintptr_t> static T get_Local() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ED4848))(0);
	}
	template <typename T = bool> T get_SupportsDaylightSavingTime() {
		return ((T (*)(TimeZoneInfo*))(Il2CppBase() + 0x4ED5130))(this);
	}
	template <typename T = uintptr_t> static T get_Utc() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ED5144))(0);
	}
	template <typename T = Il2CppString*> static T get_TimeZoneDirectory() {
		return ((T (*)(void *))(Il2CppBase() + 0x4ED4FDC))(0);
	}
	template <typename T = uintptr_t> static T CreateCustomTimeZone(Il2CppString* id, uintptr_t baseUtcOffset, Il2CppString* displayName, Il2CppString* standardDisplayName) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4ED52D0))(0, id, baseUtcOffset, displayName, standardDisplayName);
	}
	template <typename T = uintptr_t> static T CreateCustomTimeZone_1(Il2CppString* id, uintptr_t baseUtcOffset, Il2CppString* displayName, Il2CppString* standardDisplayName, Il2CppString* daylightDisplayName, Il2CppArray<uintptr_t>* adjustmentRules) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4ED5494))(0, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules);
	}
	template <typename T = uintptr_t> static T CreateCustomTimeZone_2(Il2CppString* id, uintptr_t baseUtcOffset, Il2CppString* displayName, Il2CppString* standardDisplayName, Il2CppString* daylightDisplayName, Il2CppArray<uintptr_t>* adjustmentRules, bool disableDaylightSavingTime) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4ED53A8))(0, id, baseUtcOffset, displayName, standardDisplayName, daylightDisplayName, adjustmentRules, disableDaylightSavingTime);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(TimeZoneInfo*, uintptr_t))(Il2CppBase() + 0x4ED5570))(this, other);
	}
	template <typename T = uintptr_t> static T FindSystemTimeZoneByFileName(Il2CppString* id, Il2CppString* filepath) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4ED4BDC))(0, id, filepath);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAdjustmentRules() {
		return ((T (*)(TimeZoneInfo*))(Il2CppBase() + 0x4ED6A38))(this);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(TimeZoneInfo*))(Il2CppBase() + 0x4ED6C28))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(TimeZoneInfo*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ED6D60))(this, info, context);
	}
	template <typename T = uintptr_t> T GetUtcOffset(uintptr_t dateTime) {
		return ((T (*)(TimeZoneInfo*, uintptr_t))(Il2CppBase() + 0x4ED6DF4))(this, dateTime);
	}
	template <typename T = bool> T HasSameRules(uintptr_t other) {
		return ((T (*)(TimeZoneInfo*, uintptr_t))(Il2CppBase() + 0x4ED5654))(this, other);
	}
	template <typename T = bool> T IsDaylightSavingTime(uintptr_t dateTime) {
		return ((T (*)(TimeZoneInfo*, uintptr_t))(Il2CppBase() + 0x4ED6F38))(this, dateTime);
	}
	template <typename T = bool> T IsInvalidTime(uintptr_t dateTime) {
		return ((T (*)(TimeZoneInfo*, uintptr_t))(Il2CppBase() + 0x4ED7E74))(this, dateTime);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(TimeZoneInfo*, uintptr_t))(Il2CppBase() + 0x4ED84E0))(this, sender);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(TimeZoneInfo*))(Il2CppBase() + 0x4ED8574))(this);
	}
	template <typename T = uintptr_t> T GetApplicableRule(uintptr_t dateTime) {
		return ((T (*)(TimeZoneInfo*, uintptr_t))(Il2CppBase() + 0x4ED76AC))(this, dateTime);
	}
	template <typename T = uintptr_t> static T TransitionPoint(uintptr_t transition, int32_t year) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4ED81F0))(0, transition, year);
	}
	template <typename T = bool> static T ValidTZFile(Il2CppArray<uintptr_t>* buffer, int32_t length) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4ED585C))(0, buffer, length);
	}
	template <typename T = int32_t> static T SwapInt32(int32_t i) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4ED857C))(0, i);
	}
	template <typename T = int32_t> static T ReadBigEndianInt32(Il2CppArray<uintptr_t>* buffer, int32_t start) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4ED8584))(0, buffer, start);
	}
	template <typename T = uintptr_t> static T ParseTZBuffer(Il2CppString* id, Il2CppArray<uintptr_t>* buffer, int32_t length) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x4ED59C8))(0, id, buffer, length);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T ValidateRules(Il2CppList<uintptr_t>* adjustmentRules) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4ED906C))(0, adjustmentRules);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T ParseAbbreviations(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4ED86A0))(0, buffer, index, count);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T ParseTimesTypes(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count, Il2CppDictionary<int32_t, Il2CppString*>* abbreviations) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppDictionary<int32_t, Il2CppString*>*))(Il2CppBase() + 0x4ED88F8))(0, buffer, index, count, abbreviations);
	}
	template <typename T = Il2CppList<void*>*> static T ParseTransitions(Il2CppArray<uintptr_t>* buffer, int32_t index, int32_t count, Il2CppDictionary<int32_t, uintptr_t>* time_types) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppDictionary<int32_t, uintptr_t>*))(Il2CppBase() + 0x4ED8AF8))(0, buffer, index, count, time_types);
	}
	template <typename T = uintptr_t> static T DateTimeFromUnixTime(int64_t unix_time) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x4ED9248))(0, unix_time);
	}

};

}
