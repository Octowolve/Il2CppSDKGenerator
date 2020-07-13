#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class TimeZone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "TimeZone"));
	}

	template <typename T = uintptr_t> static T& currentTimeZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& tz_lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int64_t> static T& timezone_check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T get_CurrentTimeZone() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D8FFD8))(0);
	}
	template <typename T = uintptr_t> T GetDaylightChanges(int32_t year) {
		return ((T (*)(TimeZone*, int32_t))(Il2CppBase() + 0x0))(this, year);
	}
	template <typename T = uintptr_t> T GetUtcOffset(uintptr_t time) {
		return ((T (*)(TimeZone*, uintptr_t))(Il2CppBase() + 0x0))(this, time);
	}
	template <typename T = bool> T IsDaylightSavingTime(uintptr_t time) {
		return ((T (*)(TimeZone*, uintptr_t))(Il2CppBase() + 0x4D902CC))(this, time);
	}
	template <typename T = bool> static T IsDaylightSavingTime_1(uintptr_t time, uintptr_t daylightTimes) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D903CC))(0, time, daylightTimes);
	}
	template <typename T = uintptr_t> T ToLocalTime(uintptr_t time) {
		return ((T (*)(TimeZone*, uintptr_t))(Il2CppBase() + 0x4D907F8))(this, time);
	}
	template <typename T = uintptr_t> T ToUniversalTime(uintptr_t time) {
		return ((T (*)(TimeZone*, uintptr_t))(Il2CppBase() + 0x4D90E08))(this, time);
	}
	template <typename T = uintptr_t> T GetLocalTimeDiff(uintptr_t time) {
		return ((T (*)(TimeZone*, uintptr_t))(Il2CppBase() + 0x4D911F4))(this, time);
	}
	template <typename T = uintptr_t> T GetLocalTimeDiff_1(uintptr_t time, uintptr_t utc_offset) {
		return ((T (*)(TimeZone*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D91264))(this, time, utc_offset);
	}

};

}
