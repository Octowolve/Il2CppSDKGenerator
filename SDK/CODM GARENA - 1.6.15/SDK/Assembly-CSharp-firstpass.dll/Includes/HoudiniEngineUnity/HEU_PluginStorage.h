#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUPluginStorage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_PluginStorage"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& _dataMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _requiresSave() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_RequiresSave() {
		return ((T (*)(HEUPluginStorage*))(Il2CppBase() + 0x2BEC76C))(this);
	}
	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BE9238))(0);
	}
	template <typename T = void> static T InstantiateAndLoad() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEC774))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetJSONArray(Il2CppString* jsonArray) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*))(Il2CppBase() + 0x4E42A68))(this, jsonArray);
	}
	template <typename T = void> T Set(Il2CppString* key, bool value) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, bool))(Il2CppBase() + 0x2BE9AE8))(this, key, value);
	}
	template <typename T = void> T Set_1(Il2CppString* key, int32_t value) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, int32_t))(Il2CppBase() + 0x2BEC054))(this, key, value);
	}
	template <typename T = void> T Set_2(Il2CppString* key, int64_t value) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, int64_t))(Il2CppBase() + 0x2BECC08))(this, key, value);
	}
	template <typename T = void> T Set_3(Il2CppString* key, float value) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, float))(Il2CppBase() + 0x2BEAC40))(this, key, value);
	}
	template <typename T = void> T Set_4(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BE9488))(this, key, value);
	}
	template <typename T = bool> T Get(Il2CppString* key, uintptr_t* value, bool defaultValue) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, uintptr_t*, bool))(Il2CppBase() + 0x2BE98F4))(this, key, value, defaultValue);
	}
	template <typename T = bool> T Get_1(Il2CppString* key, uintptr_t* value, int32_t defaultValue) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, uintptr_t*, int32_t))(Il2CppBase() + 0x2BEBE60))(this, key, value, defaultValue);
	}
	template <typename T = bool> T Get_2(Il2CppString* key, uintptr_t* value, int64_t defaultValue) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, uintptr_t*, int64_t))(Il2CppBase() + 0x2BECD4C))(this, key, value, defaultValue);
	}
	template <typename T = bool> T Get_3(Il2CppString* key, uintptr_t* value, float defaultValue) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, uintptr_t*, float))(Il2CppBase() + 0x2BEAA40))(this, key, value, defaultValue);
	}
	template <typename T = bool> T Get_4(Il2CppString* key, uintptr_t* value, Il2CppString* defaultValue) {
		return ((T (*)(HEUPluginStorage*, Il2CppString*, uintptr_t*, Il2CppString*))(Il2CppBase() + 0x2BE92E0))(this, key, value, defaultValue);
	}
	template <typename T = void> T MarkDirtyForSave() {
		return ((T (*)(HEUPluginStorage*))(Il2CppBase() + 0x2BECC04))(this);
	}
	template <typename T = void> static T SaveIfRequired() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BECEB0))(0);
	}
	template <typename T = void> T SavePluginData() {
		return ((T (*)(HEUPluginStorage*))(Il2CppBase() + 0x2BECF48))(this);
	}
	template <typename T = bool> T LoadPluginData() {
		return ((T (*)(HEUPluginStorage*))(Il2CppBase() + 0x2BEC880))(this);
	}
	template <typename T = void> static T ClearPluginData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BECF54))(0);
	}
	template <typename T = void> static T SaveSessionData(uintptr_t sessionData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BED048))(0, sessionData);
	}
	template <typename T = uintptr_t> static T LoadSessionData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BED04C))(0);
	}
	template <typename T = void> static T SaveAllSessionData(Il2CppList<uintptr_t>* allSessions) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BED054))(0, allSessions);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T LoadAllSessionData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BED058))(0);
	}
	template <typename T = uintptr_t> static T LoadSessionData_1(int64_t SessionID) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x2BED0F4))(0, SessionID);
	}

};

}
