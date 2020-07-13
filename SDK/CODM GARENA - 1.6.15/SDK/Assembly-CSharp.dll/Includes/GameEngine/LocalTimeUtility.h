#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LocalTimeUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LocalTimeUtility"));
	}

	template <typename T = Il2CppString*> static T& DaylightSavingTimeTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalZone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalUtcOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLocalUtcOffsetNow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalDaylightSavingTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UtcTimeToLocalTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalTimeToUtcTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUtc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToStandardString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToCultureString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> static T GetLocalZone() {
		return ((T (*)(void *))(Il2CppBase() + 0x24A1578))(0);
	}
	template <typename T = uintptr_t> static T GetLocalUtcOffset(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A1680))(0, time);
	}
	template <typename T = uintptr_t> static T GetLocalUtcOffsetNow() {
		return ((T (*)(void *))(Il2CppBase() + 0x24A17EC))(0);
	}
	template <typename T = bool> static T IsLocalDaylightSavingTime(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A198C))(0, time);
	}
	template <typename T = uintptr_t> static T UtcTimeToLocalTime(uintptr_t utcTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A1AEC))(0, utcTime);
	}
	template <typename T = uintptr_t> static T LocalTimeToUtcTime(uintptr_t localTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A1D9C))(0, localTime);
	}
	template <typename T = void> static T CheckLocal(uintptr_t localTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A1EE8))(0, localTime);
	}
	template <typename T = void> static T CheckUtc(uintptr_t utcTime) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A1C38))(0, utcTime);
	}
	template <typename T = Il2CppString*> static T ToStandardString(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A204C))(0, time);
	}
	template <typename T = Il2CppString*> static T ToCultureString(uintptr_t time) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x24A2170))(0, time);
	}

};

}
