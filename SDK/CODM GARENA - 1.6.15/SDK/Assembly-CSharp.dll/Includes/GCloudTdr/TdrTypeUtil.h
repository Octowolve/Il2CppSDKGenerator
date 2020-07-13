#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrTypeUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrTypeUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_cstrlen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_wstrlen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_str2TdrIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_tdrIP2Str() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_str2TdrTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_tdrTime2Str() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_str2TdrDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_tdrDate2Str() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_str2TdrDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_tdrDateTime2Str() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = int32_t> static T cstrlen(Il2CppArray<uintptr_t>* str) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4446450))(0, str);
	}
	template <typename T = int32_t> static T wstrlen(Il2CppArray<uintptr_t>* str) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44468EC))(0, str);
	}
	template <typename T = uintptr_t> static T str2TdrIP(uintptr_t* ip, Il2CppString* strip) {
		return ((T (*)(void *, uintptr_t*, Il2CppString*))(Il2CppBase() + 0x444FA70))(0, ip, strip);
	}
	template <typename T = uintptr_t> static T tdrIP2Str(uintptr_t buf, uint32_t ip) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4447410))(0, buf, ip);
	}
	template <typename T = uintptr_t> static T str2TdrTime(uintptr_t* time, Il2CppString* strTime) {
		return ((T (*)(void *, uintptr_t*, Il2CppString*))(Il2CppBase() + 0x444FC4C))(0, time, strTime);
	}
	template <typename T = uintptr_t> static T tdrTime2Str(uintptr_t buf, uint32_t time) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x4447B60))(0, buf, time);
	}
	template <typename T = uintptr_t> static T str2TdrDate(uintptr_t* date, Il2CppString* strDate) {
		return ((T (*)(void *, uintptr_t*, Il2CppString*))(Il2CppBase() + 0x444FE5C))(0, date, strDate);
	}
	template <typename T = uintptr_t> static T tdrDate2Str(uintptr_t buf, uint32_t date) {
		return ((T (*)(void *, uintptr_t, uint32_t))(Il2CppBase() + 0x444839C))(0, buf, date);
	}
	template <typename T = uintptr_t> static T str2TdrDateTime(uintptr_t* datetime, Il2CppString* strDateTime) {
		return ((T (*)(void *, uintptr_t*, Il2CppString*))(Il2CppBase() + 0x444FFF4))(0, datetime, strDateTime);
	}
	template <typename T = uintptr_t> static T tdrDateTime2Str(uintptr_t buf, uint64_t datetime) {
		return ((T (*)(void *, uintptr_t, uint64_t))(Il2CppBase() + 0x4448BE8))(0, buf, datetime);
	}

};

}
