#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class TdrBufUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "TdrBufUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printMultiStr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printVariable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_printVariable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_printVariable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_printVariable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printWString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_printString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_printWString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printTdrIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_printTdrIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printTdrTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_printTdrTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printTdrDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_printTdrDate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_printTdrDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_printTdrDateTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = uintptr_t> static T printMultiStr(uintptr_t buf, Il2CppString* str, int32_t times) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4444DD0))(0, buf, str, times);
	}
	template <typename T = uintptr_t> static T printVariable(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, bool withSep) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, bool))(Il2CppBase() + 0x444532C))(0, buf, indent, sep, variable, withSep);
	}
	template <typename T = uintptr_t> static T printVariable_1(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, bool withSep) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x44455DC))(0, buf, indent, sep, variable, arrIdx, withSep);
	}
	template <typename T = uintptr_t> static T printVariable_2(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4445960))(0, buf, indent, sep, variable, format, args);
	}
	template <typename T = uintptr_t> static T printVariable_3(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4445C00))(0, buf, indent, sep, variable, arrIdx, format, args);
	}
	template <typename T = uintptr_t> static T printArray(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int64_t count) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int64_t))(Il2CppBase() + 0x4445F18))(0, buf, indent, sep, variable, count);
	}
	template <typename T = uintptr_t> static T printString(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, Il2CppArray<uintptr_t>* bStr) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4446140))(0, buf, indent, sep, variable, bStr);
	}
	template <typename T = uintptr_t> static T printWString(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, Il2CppArray<uintptr_t>* str) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x444654C))(0, buf, indent, sep, variable, str);
	}
	template <typename T = uintptr_t> static T printString_1(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, Il2CppArray<uintptr_t>* bStr) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x44469EC))(0, buf, indent, sep, variable, arrIdx, bStr);
	}
	template <typename T = uintptr_t> static T printWString_1(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, Il2CppArray<uintptr_t>* str) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4446D70))(0, buf, indent, sep, variable, arrIdx, str);
	}
	template <typename T = uintptr_t> static T printTdrIP(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, uint32_t ip) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, uint32_t))(Il2CppBase() + 0x4447184))(0, buf, indent, sep, variable, ip);
	}
	template <typename T = uintptr_t> static T printTdrIP_1(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, uint32_t ip) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, uint32_t))(Il2CppBase() + 0x44475D4))(0, buf, indent, sep, variable, arrIdx, ip);
	}
	template <typename T = uintptr_t> static T printTdrTime(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, uint32_t time) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, uint32_t))(Il2CppBase() + 0x44478D4))(0, buf, indent, sep, variable, time);
	}
	template <typename T = uintptr_t> static T printTdrTime_1(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, uint32_t time) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, uint32_t))(Il2CppBase() + 0x4447E10))(0, buf, indent, sep, variable, arrIdx, time);
	}
	template <typename T = uintptr_t> static T printTdrDate(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, uint32_t date) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, uint32_t))(Il2CppBase() + 0x4448110))(0, buf, indent, sep, variable, date);
	}
	template <typename T = uintptr_t> static T printTdrDate_1(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, uint32_t date) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, uint32_t))(Il2CppBase() + 0x444864C))(0, buf, indent, sep, variable, arrIdx, date);
	}
	template <typename T = uintptr_t> static T printTdrDateTime(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, uint64_t datetime) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, uint64_t))(Il2CppBase() + 0x444894C))(0, buf, indent, sep, variable, datetime);
	}
	template <typename T = uintptr_t> static T printTdrDateTime_1(uintptr_t buf, int32_t indent, char sep, Il2CppString* variable, int32_t arrIdx, uint64_t datetime) {
		return ((T (*)(void *, uintptr_t, int32_t, char, Il2CppString*, int32_t, uint64_t))(Il2CppBase() + 0x4449030))(0, buf, indent, sep, variable, arrIdx, datetime);
	}

};

}
