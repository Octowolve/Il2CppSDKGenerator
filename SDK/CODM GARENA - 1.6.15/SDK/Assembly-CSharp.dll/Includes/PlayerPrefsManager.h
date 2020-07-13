#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerPrefsManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerPrefsManager"));
	}

	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NEVER_DELETE_KEYS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& NEVER_DELETE_KEYS_TYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ALL_PLAYERS_KEY_FORMAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CURRENT_PLAYER_KEY_FORMAT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DEFAULT_PLAYER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNeverDeleteKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIntByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFloatByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStringByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetListByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBoolByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBoolByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIntByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFloatByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetListByRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasRawKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllPlayersKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllPlayersInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllPlayersString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllPlayersBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllPlayersInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllPlayersString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllPlayersBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayerKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentPlayerInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentPlayerFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentPlayerString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentPlayerBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasCurrentPlayerKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayerInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayerFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayerString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayerBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentPlayerStringToBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetCurrentPlayerStringToBool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteCurrentPlayerKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Save() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DeleteKeys() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x47F7C94))(0);
	}
	template <typename T = void> T AddNeverDeleteKeys(Il2CppString* key, uintptr_t type) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x47F7D44))(this, key, type);
	}
	template <typename T = void> T SetIntByRawKey(Il2CppString* key, int32_t value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x47F8100))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetFloatByRawKey(Il2CppString* key, float value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, float, bool))(Il2CppBase() + 0x47F8224))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetStringByRawKey(Il2CppString* key, Il2CppString* value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x47F8348))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetListByRawKey(Il2CppString* key, Il2CppList<int32_t>* list, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, Il2CppList<int32_t>*, bool))(Il2CppBase() + 0x47F846C))(this, key, list, deleteWhenReinstall);
	}
	template <typename T = void> T SetBoolByRawKey(Il2CppString* key, bool value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, bool, bool))(Il2CppBase() + 0x47F8740))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = bool> T GetBoolByRawKey(Il2CppString* key, bool defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, bool))(Il2CppBase() + 0x47F8864))(this, key, defaultValue);
	}
	template <typename T = int32_t> T GetIntByRawKey(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x47F8968))(this, key, defaultValue);
	}
	template <typename T = float> T GetFloatByRawKey(Il2CppString* key, float defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, float))(Il2CppBase() + 0x47F8A68))(this, key, defaultValue);
	}
	template <typename T = Il2CppString*> T GetStringByRawKey(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F8B68))(this, key, defaultValue);
	}
	template <typename T = Il2CppList<int32_t>*> T GetListByRawKey(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47F8C68))(this, key);
	}
	template <typename T = bool> T HasRawKey(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47F8F0C))(this, key);
	}
	template <typename T = Il2CppString*> T GetAllPlayersKey(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47F8FF0))(this, key);
	}
	template <typename T = void> T SetAllPlayersInt(Il2CppString* key, int32_t value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x47F9128))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetAllPlayersString(Il2CppString* key, Il2CppString* value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x47F925C))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetAllPlayersBool(Il2CppString* key, bool value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, bool, bool))(Il2CppBase() + 0x47F9390))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = int32_t> T GetAllPlayersInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x47F94C4))(this, key, defaultValue);
	}
	template <typename T = Il2CppString*> T GetAllPlayersString(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F95D0))(this, key, defaultValue);
	}
	template <typename T = bool> T GetAllPlayersBool(Il2CppString* key, bool defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, bool))(Il2CppBase() + 0x47F96DC))(this, key, defaultValue);
	}
	template <typename T = Il2CppString*> T GetCurrentPlayerKey(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47F97EC))(this, key);
	}
	template <typename T = void> T SetCurrentPlayerInt(Il2CppString* key, int32_t value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x47F9A5C))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetCurrentPlayerFloat(Il2CppString* key, float value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, float, bool))(Il2CppBase() + 0x47F9B90))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetCurrentPlayerString(Il2CppString* key, Il2CppString* value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, Il2CppString*, bool))(Il2CppBase() + 0x47F9CC4))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = void> T SetCurrentPlayerBool(Il2CppString* key, bool value, bool deleteWhenReinstall) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, bool, bool))(Il2CppBase() + 0x47F9DF8))(this, key, value, deleteWhenReinstall);
	}
	template <typename T = bool> T HasCurrentPlayerKey(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47F9F2C))(this, key);
	}
	template <typename T = int32_t> T GetCurrentPlayerInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, int32_t))(Il2CppBase() + 0x47FA01C))(this, key, defaultValue);
	}
	template <typename T = float> T GetCurrentPlayerFloat(Il2CppString* key, float defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, float))(Il2CppBase() + 0x47FA128))(this, key, defaultValue);
	}
	template <typename T = Il2CppString*> T GetCurrentPlayerString(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47FA234))(this, key);
	}
	template <typename T = bool> T GetCurrentPlayerBool(Il2CppString* key, bool defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, bool))(Il2CppBase() + 0x47FA324))(this, key, defaultValue);
	}
	template <typename T = bool> T GetCurrentPlayerStringToBool(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47FA434))(this, key);
	}
	template <typename T = bool> T GetCurrentPlayerStringToBool_1(Il2CppString* key, bool defaultValue) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*, bool))(Il2CppBase() + 0x47FA600))(this, key, defaultValue);
	}
	template <typename T = void> T DeleteCurrentPlayerKey(Il2CppString* key) {
		return ((T (*)(PlayerPrefsManager*, Il2CppString*))(Il2CppBase() + 0x47FA7E4))(this, key);
	}
	template <typename T = void> T Save() {
		return ((T (*)(PlayerPrefsManager*))(Il2CppBase() + 0x47FA8D4))(this);
	}
	template <typename T = void> T DeleteKeys() {
		return ((T (*)(PlayerPrefsManager*))(Il2CppBase() + 0x47FA9AC))(this);
	}

};

}
