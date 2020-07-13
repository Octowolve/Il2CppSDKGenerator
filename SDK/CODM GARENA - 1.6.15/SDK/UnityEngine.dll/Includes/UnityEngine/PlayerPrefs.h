#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class PlayerPrefs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "PlayerPrefs"));
	}


	template <typename T = bool> static T TrySetInt(Il2CppString* key, int32_t value) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4AC6A40))(0, key, value);
	}
	template <typename T = bool> static T TrySetFloat(Il2CppString* key, float value) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x4AC6AE0))(0, key, value);
	}
	template <typename T = bool> static T TrySetSetString(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4AC6B80))(0, key, value);
	}
	template <typename T = void> static T SetInt(Il2CppString* key, int32_t value) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4AC6C20))(0, key, value);
	}
	template <typename T = int32_t> static T GetInt(Il2CppString* key, int32_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4AC6CEC))(0, key, defaultValue);
	}
	template <typename T = int32_t> static T GetInt_1(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AC6D8C))(0, key);
	}
	template <typename T = void> static T SetFloat(Il2CppString* key, float value) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x4AC6D94))(0, key, value);
	}
	template <typename T = float> static T GetFloat(Il2CppString* key, float defaultValue) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x4AC6E58))(0, key, defaultValue);
	}
	template <typename T = float> static T GetFloat_1(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AC6EF8))(0, key);
	}
	template <typename T = void> static T SetString(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4AC6F00))(0, key, value);
	}
	template <typename T = Il2CppString*> static T GetString(Il2CppString* key, Il2CppString* defaultValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4AC6FC4))(0, key, defaultValue);
	}
	template <typename T = Il2CppString*> static T GetString_1(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AC7064))(0, key);
	}
	template <typename T = bool> static T HasKey(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AC70E8))(0, key);
	}
	template <typename T = void> static T DeleteKey(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AC7180))(0, key);
	}
	template <typename T = void> static T DeleteAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC7218))(0);
	}
	template <typename T = void> static T Save() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC72A8))(0);
	}

};

}
