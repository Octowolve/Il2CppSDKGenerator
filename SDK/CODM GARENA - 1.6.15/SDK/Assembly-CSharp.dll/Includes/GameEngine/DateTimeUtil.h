#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DateTimeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DateTimeUtil"));
	}

	template <typename T = int32_t> static T& SECONDS_DAILY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SECONDS_HOUR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SECONDS_MINUTE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MILLIONSECONDS_SECONDLY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& MILLISECONDS_PER_SECOND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& HOUR_PER_DAY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DAY_PER_WEEK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MINUTES_PER_HOUR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& utcStartDataTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentFormatServerStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertTimeStampToDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertTimeStampToUTCDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Convert2TimeStampToDataTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Conver2TimeStampToTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertTimeStampToDateTimeFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertDateTimeToTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDayOfWeekByTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStampToPara() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStampToUTC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientLocalTimeStamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClientLocalTimeStamp_Milliseconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertDateTimeInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStampNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStampCD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStampSpanBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatUintTime2HMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatUintTime2DHMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForMatCountdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatUintLeftTime2HMS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = uint64_t> static T GetCurrentTimeStamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B54DC))(0);
	}
	template <typename T = Il2CppString*> static T GetCurrentFormatServerStamp(uintptr_t inDateFormat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41B593C))(0, inDateFormat);
	}
	template <typename T = uintptr_t> static T GetCurrentDateTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B5C0C))(0);
	}
	template <typename T = uintptr_t> static T ConvertTimeStampToDateTime(double timeStamp) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x41B5D78))(0, timeStamp);
	}
	template <typename T = uintptr_t> static T ConvertTimeStampToUTCDateTime(double timeStamp) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x41B5F4C))(0, timeStamp);
	}
	template <typename T = uintptr_t> static T Convert2TimeStampToDataTime(double timeStampYMD, double timeStampHMS) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x41B6094))(0, timeStampYMD, timeStampHMS);
	}
	template <typename T = int32_t> static T Conver2TimeStampToTimeStamp(double timeStampYMD, double timeStampHMS) {
		return ((T (*)(void *, double, double))(Il2CppBase() + 0x41B628C))(0, timeStampYMD, timeStampHMS);
	}
	template <typename T = Il2CppString*> static T ConvertTimeStampToDateTimeFormat(int32_t timeStamp) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x41B63CC))(0, timeStamp);
	}
	template <typename T = int32_t> static T ConvertDateTimeToTimeStamp(uintptr_t dateTime, bool bUniversal) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x41B574C))(0, dateTime, bUniversal);
	}
	template <typename T = int32_t> static T GetDayOfWeekByTimeStamp(uintptr_t dateTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41B66C8))(0, dateTime);
	}
	template <typename T = Il2CppString*> static T FormatTimeStamp(double timeStamp, uintptr_t format) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x41B5A4C))(0, timeStamp, format);
	}
	template <typename T = Il2CppString*> static T FormatTimeStampToPara(double time, Il2CppString* format) {
		return ((T (*)(void *, double, Il2CppString*))(Il2CppBase() + 0x41B8274))(0, time, format);
	}
	template <typename T = Il2CppString*> static T FormatTimeStampToUTC(double time, Il2CppString* format) {
		return ((T (*)(void *, double, Il2CppString*))(Il2CppBase() + 0x41B8428))(0, time, format);
	}
	template <typename T = int32_t> static T GetClientLocalTimeStamp() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B85F8))(0);
	}
	template <typename T = int64_t> static T GetClientLocalTimeStamp_Milliseconds() {
		return ((T (*)(void *))(Il2CppBase() + 0x41B89A8))(0);
	}
	template <typename T = int32_t> static T ConvertDateTimeInt(uintptr_t inTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41B8758))(0, inTime);
	}
	template <typename T = Il2CppString*> static T FormatTimeStampNormal(double timeStamp, uintptr_t format) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x41B6800))(0, timeStamp, format);
	}
	template <typename T = Il2CppString*> static T FormatTimeStampCD(double timeStamp, uintptr_t format) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x41B6A34))(0, timeStamp, format);
	}
	template <typename T = Il2CppString*> static T FormatTimeStampSpanBefore(double timeStamp, uintptr_t format) {
		return ((T (*)(void *, double, uintptr_t))(Il2CppBase() + 0x41B7D38))(0, timeStamp, format);
	}
	template <typename T = Il2CppString*> static T FormatUintTime2HMS(uint32_t time) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x41B8BC8))(0, time);
	}
	template <typename T = Il2CppString*> static T FormatUintTime2DHMS(uint32_t time, uintptr_t countDownsFormat) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x41B9030))(0, time, countDownsFormat);
	}
	template <typename T = Il2CppString*> static T ForMatCountdown(Il2CppDictionary<uintptr_t, int32_t>* Date, uintptr_t format) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, int32_t>*, uintptr_t))(Il2CppBase() + 0x41B9548))(0, Date, format);
	}
	template <typename T = Il2CppString*> static T FormatUintLeftTime2HMS(uint32_t time) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x41BA17C))(0, time);
	}

};

}
