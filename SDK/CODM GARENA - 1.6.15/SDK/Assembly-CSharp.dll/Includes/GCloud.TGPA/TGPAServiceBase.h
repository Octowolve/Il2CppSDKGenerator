#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TGPA {

class TGPAServiceBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TGPA", "TGPAServiceBase"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4440DA4))(0);
	}
	template <typename T = int32_t> T GetVersionCode() {
		return ((T (*)(TGPAServiceBase*))(Il2CppBase() + 0x4440E54))(this);
	}
	template <typename T = void> T EnableLog(bool enable) {
		return ((T (*)(TGPAServiceBase*, bool))(Il2CppBase() + 0x4440E5C))(this, enable);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TGPAServiceBase*))(Il2CppBase() + 0x4440E60))(this);
	}
	template <typename T = void> T RegisterCallback(uintptr_t callback) {
		return ((T (*)(TGPAServiceBase*, uintptr_t))(Il2CppBase() + 0x4440E64))(this, callback);
	}
	template <typename T = void> T UpdateGameFps(float value) {
		return ((T (*)(TGPAServiceBase*, float))(Il2CppBase() + 0x4440E68))(this, value);
	}
	template <typename T = void> T UpdateGameInfo(uintptr_t key, int32_t value) {
		return ((T (*)(TGPAServiceBase*, uintptr_t, int32_t))(Il2CppBase() + 0x4440E6C))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_1(uintptr_t key, Il2CppString* value) {
		return ((T (*)(TGPAServiceBase*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4440E70))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_2(Il2CppDictionary<uintptr_t, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceBase*, Il2CppDictionary<uintptr_t, Il2CppString*>*))(Il2CppBase() + 0x4440E74))(this, dict);
	}
	template <typename T = void> T UpdateGameInfo_3(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceBase*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4440E78))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_4(Il2CppString* key, Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceBase*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4440E7C))(this, key, dict);
	}
	template <typename T = Il2CppString*> T GetDataFromTGPA(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceBase*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4440E80))(this, key, value);
	}
	template <typename T = Il2CppString*> T CheckDeviceIsReal() {
		return ((T (*)(TGPAServiceBase*))(Il2CppBase() + 0x4440EF8))(this);
	}
	template <typename T = Il2CppString*> T GetOptCfgStr() {
		return ((T (*)(TGPAServiceBase*))(Il2CppBase() + 0x4440F70))(this);
	}
	template <typename T = int32_t> T GetCurrentThreadTid() {
		return ((T (*)(TGPAServiceBase*))(Il2CppBase() + 0x4440FE8))(this);
	}
	template <typename T = void> T ReportUserInfo(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceBase*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4440FF0))(this, dict);
	}

};

}
