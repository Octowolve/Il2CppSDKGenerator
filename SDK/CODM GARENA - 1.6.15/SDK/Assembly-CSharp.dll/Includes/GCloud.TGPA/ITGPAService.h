#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TGPA {

class ITGPAService
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TGPA", "ITGPAService"));
	}


	template <typename T = int32_t> T GetVersionCode() {
		return ((T (*)(ITGPAService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T EnableLog(bool enable) {
		return ((T (*)(ITGPAService*, bool))(Il2CppBase() + 0x0))(this, enable);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ITGPAService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T RegisterCallback(uintptr_t callback) {
		return ((T (*)(ITGPAService*, uintptr_t))(Il2CppBase() + 0x0))(this, callback);
	}
	template <typename T = void> T UpdateGameFps(float value) {
		return ((T (*)(ITGPAService*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = void> T UpdateGameInfo(uintptr_t key, Il2CppString* value) {
		return ((T (*)(ITGPAService*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_1(uintptr_t key, int32_t value) {
		return ((T (*)(ITGPAService*, uintptr_t, int32_t))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_2(Il2CppDictionary<uintptr_t, Il2CppString*>* dict) {
		return ((T (*)(ITGPAService*, Il2CppDictionary<uintptr_t, Il2CppString*>*))(Il2CppBase() + 0x0))(this, dict);
	}
	template <typename T = void> T UpdateGameInfo_3(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(ITGPAService*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_4(Il2CppString* key, Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(ITGPAService*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, key, dict);
	}
	template <typename T = Il2CppString*> T GetDataFromTGPA(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(ITGPAService*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, key, value);
	}
	template <typename T = Il2CppString*> T CheckDeviceIsReal() {
		return ((T (*)(ITGPAService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetCurrentThreadTid() {
		return ((T (*)(ITGPAService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetOptCfgStr() {
		return ((T (*)(ITGPAService*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ReportUserInfo(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(ITGPAService*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x0))(this, dict);
	}

};

}
