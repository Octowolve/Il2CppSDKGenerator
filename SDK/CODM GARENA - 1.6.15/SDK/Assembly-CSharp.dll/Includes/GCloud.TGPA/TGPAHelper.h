#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TGPA {

class TGPAHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TGPA", "TGPAHelper"));
	}


	template <typename T = uintptr_t> static T getPlatformService() {
		return ((T (*)(void *))(Il2CppBase() + 0x443D41C))(0);
	}
	template <typename T = int32_t> static T GetVersionCode() {
		return ((T (*)(void *))(Il2CppBase() + 0x443D6FC))(0);
	}
	template <typename T = void> static T EnableLog(bool enable) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x443D704))(0, enable);
	}
	template <typename T = void> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x443D800))(0);
	}
	template <typename T = void> static T RegisterCallback(uintptr_t callback) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x443D8F4))(0, callback);
	}
	template <typename T = void> static T UpdateGameFps(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x443D9F0))(0, value);
	}
	template <typename T = void> static T UpdateGameInfo(uintptr_t key, Il2CppString* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x443DAEC))(0, key, value);
	}
	template <typename T = void> static T UpdateGameInfo_1(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443DBF0))(0, key, value);
	}
	template <typename T = void> static T UpdateGameInfo_2(Il2CppDictionary<uintptr_t, Il2CppString*>* dict) {
		return ((T (*)(void *, Il2CppDictionary<uintptr_t, Il2CppString*>*))(Il2CppBase() + 0x443DCF4))(0, dict);
	}
	template <typename T = void> static T UpdateGameInfo_3(uintptr_t key, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x443DDF0))(0, key, value);
	}
	template <typename T = void> static T UpdateGameInfo_4(Il2CppString* key, Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x443DEF4))(0, key, dict);
	}
	template <typename T = Il2CppString*> static T GetOptCfgStr() {
		return ((T (*)(void *))(Il2CppBase() + 0x443DFF8))(0);
	}
	template <typename T = Il2CppString*> static T GetDataFromTGPA(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x443E0EC))(0, key, value);
	}
	template <typename T = Il2CppString*> static T CheckDeviceIsReal() {
		return ((T (*)(void *))(Il2CppBase() + 0x443E1F0))(0);
	}
	template <typename T = void> static T ReportUserInfo(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x443E2E4))(0, dict);
	}
	template <typename T = int32_t> static T GetCurrentThreadTid() {
		return ((T (*)(void *))(Il2CppBase() + 0x443E3E0))(0);
	}

};

}
