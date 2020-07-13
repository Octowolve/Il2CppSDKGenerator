#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class RemoteConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "RemoteConfig"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDouble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = int64_t> T GetLong(Il2CppString* key, int64_t defaultValue) {
		return ((T (*)(RemoteConfig*, Il2CppString*, int64_t))(Il2CppBase() + 0x4437068))(this, key, defaultValue);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(RemoteConfig*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x44372AC))(this, key, defaultValue);
	}
	template <typename T = bool> T GetBool(Il2CppString* key, bool defaultValue) {
		return ((T (*)(RemoteConfig*, Il2CppString*, bool))(Il2CppBase() + 0x443760C))(this, key, defaultValue);
	}
	template <typename T = int32_t> T GetInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(RemoteConfig*, Il2CppString*, int32_t))(Il2CppBase() + 0x4437838))(this, key, defaultValue);
	}
	template <typename T = double> T GetDouble(Il2CppString* key, double defaultValue) {
		return ((T (*)(RemoteConfig*, Il2CppString*, double))(Il2CppBase() + 0x4437A60))(this, key, defaultValue);
	}
	template <typename T = int64_t> static T abase_remoteconfig_GetLong(Il2CppString* key, int64_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, int64_t))(Il2CppBase() + 0x443718C))(0, key, defaultValue);
	}
	template <typename T = bool> static T abase_remoteconfig_GetString(Il2CppString* key, uintptr_t value, int32_t len, Il2CppString* defaultValue) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x44374AC))(0, key, value, len, defaultValue);
	}
	template <typename T = bool> static T abase_remoteconfig_GetBool(Il2CppString* key, bool defaultValue) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4437720))(0, key, defaultValue);
	}
	template <typename T = int32_t> static T abase_remoteconfig_GetInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4437950))(0, key, defaultValue);
	}
	template <typename T = double> static T abase_remoteconfig_GetDouble(Il2CppString* key, double defaultValue) {
		return ((T (*)(void *, Il2CppString*, double))(Il2CppBase() + 0x4437B84))(0, key, defaultValue);
	}

};

}
