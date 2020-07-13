#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TGPA {

class TGPAServiceAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TGPA", "TGPAServiceAndroid"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& IsOK() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& CanWork() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& performanceAjuster() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& fpsArr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& lastFps() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& fpsCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x443D4B4))(0);
	}
	template <typename T = int32_t> T GetVersionCode() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x443E6C4))(this);
	}
	template <typename T = void> T EnableLog(bool enable) {
		return ((T (*)(TGPAServiceAndroid*, bool))(Il2CppBase() + 0x443E7B4))(this, enable);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x443E910))(this);
	}
	template <typename T = void> T RegisterCallback(uintptr_t callback) {
		return ((T (*)(TGPAServiceAndroid*, uintptr_t))(Il2CppBase() + 0x443EB7C))(this, callback);
	}
	template <typename T = void> T UpdateGameFps(float value) {
		return ((T (*)(TGPAServiceAndroid*, float))(Il2CppBase() + 0x443EE98))(this, value);
	}
	template <typename T = void> T UpdateGameInfo(uintptr_t key, Il2CppString* value) {
		return ((T (*)(TGPAServiceAndroid*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x443F1EC))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_1(uintptr_t key, int32_t value) {
		return ((T (*)(TGPAServiceAndroid*, uintptr_t, int32_t))(Il2CppBase() + 0x443F394))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_2(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443F560))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_3(Il2CppDictionary<uintptr_t, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppDictionary<uintptr_t, Il2CppString*>*))(Il2CppBase() + 0x443F6E4))(this, dict);
	}
	template <typename T = void> T UpdateGameInfo_4(Il2CppString* key, Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x443F8D0))(this, key, dict);
	}
	template <typename T = Il2CppString*> T GetDataFromTGPA(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443FDBC))(this, key, value);
	}
	template <typename T = Il2CppString*> T GetOptCfgStr() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x443FF60))(this);
	}
	template <typename T = Il2CppString*> T CheckDeviceIsReal() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x4440070))(this);
	}
	template <typename T = int32_t> T GetCurrentThreadTid() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x4440178))(this);
	}
	template <typename T = void> T ReportUserInfo(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4440268))(this, dict);
	}
	template <typename T = bool> T _CheckSdk() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x443E580))(this);
	}
	template <typename T = int32_t> T _GetVersionCode() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x443E6C8))(this);
	}
	template <typename T = void> T _EnableLog(bool enable) {
		return ((T (*)(TGPAServiceAndroid*, bool))(Il2CppBase() + 0x443E7B8))(this, enable);
	}
	template <typename T = void> T _InitSdk() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x443E914))(this);
	}
	template <typename T = void> T _RegisterCallback(uintptr_t callback) {
		return ((T (*)(TGPAServiceAndroid*, uintptr_t))(Il2CppBase() + 0x443EB80))(this, callback);
	}
	template <typename T = void> T _UpdateGameFps(float fps) {
		return ((T (*)(TGPAServiceAndroid*, float))(Il2CppBase() + 0x443EE9C))(this, fps);
	}
	template <typename T = void> T _UpdateGameInfo(uintptr_t key, Il2CppString* value) {
		return ((T (*)(TGPAServiceAndroid*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x443F1F0))(this, key, value);
	}
	template <typename T = void> T _UpdateGameInfo_1(int32_t key, Il2CppString* value) {
		return ((T (*)(TGPAServiceAndroid*, int32_t, Il2CppString*))(Il2CppBase() + 0x4440298))(this, key, value);
	}
	template <typename T = void> T _UpdateGameInfo_2(int32_t key, int32_t value) {
		return ((T (*)(TGPAServiceAndroid*, int32_t, int32_t))(Il2CppBase() + 0x444043C))(this, key, value);
	}
	template <typename T = void> T _UpdateGameInfo_3(Il2CppDictionary<uintptr_t, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppDictionary<uintptr_t, Il2CppString*>*))(Il2CppBase() + 0x443F6E8))(this, dict);
	}
	template <typename T = void> T _UpdateGameInfo_4(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443F564))(this, key, value);
	}
	template <typename T = void> T _UpdateGameInfo_5(uintptr_t key, int32_t value) {
		return ((T (*)(TGPAServiceAndroid*, uintptr_t, int32_t))(Il2CppBase() + 0x443F398))(this, key, value);
	}
	template <typename T = void> T _UpdateGameInfo_6(Il2CppString* key, Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x443FC08))(this, key, dict);
	}
	template <typename T = Il2CppString*> T _GetDataFromTGPA(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443FDC0))(this, key, value);
	}
	template <typename T = Il2CppString*> T _CheckDeviceIsReal() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x4440074))(this);
	}
	template <typename T = Il2CppString*> T _GetOptCfgStr() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x443FF64))(this);
	}
	template <typename T = int32_t> T _GetCurrentThreadTid() {
		return ((T (*)(TGPAServiceAndroid*))(Il2CppBase() + 0x444017C))(this);
	}
	template <typename T = void> T _ReportUserInfo(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x443FA2C))(this, dict);
	}
	template <typename T = Il2CppString*> T convertDict2JsonStr(Il2CppDictionary<uintptr_t, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppDictionary<uintptr_t, Il2CppString*>*))(Il2CppBase() + 0x4440604))(this, dict);
	}
	template <typename T = Il2CppString*> T convertDict2JsonStr_1(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceAndroid*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4440998))(this, dict);
	}
	template <typename T = bool> T CheckGameFps(float fps) {
		return ((T (*)(TGPAServiceAndroid*, float))(Il2CppBase() + 0x444026C))(this, fps);
	}

};

}
