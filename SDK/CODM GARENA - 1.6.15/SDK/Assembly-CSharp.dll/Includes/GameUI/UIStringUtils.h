#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIStringUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIStringUtils"));
	}

	template <typename T = int32_t> static T& kMiloLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kMilo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kKiloLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& kKilo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kKiloBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kMiloBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeLocFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocSafeFormat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeUpper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Short4Value() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShortClamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NetworkString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemExpiredTimeString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemExpiredTimeStringWithOutHour() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemExpiredTimeStringByTimestamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = Il2CppString*> static T SafeLocFormat(Il2CppString* locID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B132A8))(0, locID, args);
	}
	template <typename T = Il2CppString*> static T LocSafeFormat(Il2CppString* locID, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B1344C))(0, locID, args);
	}
	template <typename T = Il2CppString*> static T SafeUpper(Il2CppString* original) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3B135F0))(0, original);
	}
	template <typename T = Il2CppString*> static T Short4Value(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B13754))(0, value);
	}
	template <typename T = Il2CppString*> static T ShortClamp(float value, Il2CppString* format) {
		return ((T (*)(void *, float, Il2CppString*))(Il2CppBase() + 0x3AD5394))(0, value, format);
	}
	template <typename T = Il2CppString*> static T NetworkString(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3B13944))(0, bytes);
	}
	template <typename T = Il2CppString*> static T GetItemExpiredTimeString(int32_t duration) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B13AAC))(0, duration);
	}
	template <typename T = Il2CppString*> static T GetItemExpiredTimeStringWithOutHour(int32_t duration) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B13D8C))(0, duration);
	}
	template <typename T = Il2CppString*> static T GetItemExpiredTimeStringByTimestamp(int32_t expireTime) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3B13F18))(0, expireTime);
	}

};

}
