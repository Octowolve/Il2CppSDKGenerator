#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.TGPA {

class TGPAServiceiOS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.TGPA", "TGPAServiceiOS"));
	}

	template <typename T = uintptr_t> static T& mInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4441090))(0);
	}
	template <typename T = int32_t> T GetVersionCode() {
		return ((T (*)(TGPAServiceiOS*))(Il2CppBase() + 0x44412DC))(this);
	}
	template <typename T = void> T EnableLog(bool enable) {
		return ((T (*)(TGPAServiceiOS*, bool))(Il2CppBase() + 0x44412E4))(this, enable);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TGPAServiceiOS*))(Il2CppBase() + 0x44412E8))(this);
	}
	template <typename T = void> T RegisterCallback(uintptr_t callback) {
		return ((T (*)(TGPAServiceiOS*, uintptr_t))(Il2CppBase() + 0x44412EC))(this, callback);
	}
	template <typename T = void> T UpdateGameFps(float value) {
		return ((T (*)(TGPAServiceiOS*, float))(Il2CppBase() + 0x44412F0))(this, value);
	}
	template <typename T = bool> T checkGameDataNeedSend(uintptr_t key) {
		return ((T (*)(TGPAServiceiOS*, uintptr_t))(Il2CppBase() + 0x44412F4))(this, key);
	}
	template <typename T = void> T UpdateGameInfo(uintptr_t key, Il2CppString* value) {
		return ((T (*)(TGPAServiceiOS*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4441350))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_1(Il2CppDictionary<uintptr_t, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceiOS*, Il2CppDictionary<uintptr_t, Il2CppString*>*))(Il2CppBase() + 0x4441354))(this, dict);
	}
	template <typename T = void> T UpdateGameInfo_2(int32_t key, Il2CppString* value) {
		return ((T (*)(TGPAServiceiOS*, int32_t, Il2CppString*))(Il2CppBase() + 0x4441358))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_3(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceiOS*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x444135C))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_4(uintptr_t key, int32_t value) {
		return ((T (*)(TGPAServiceiOS*, uintptr_t, int32_t))(Il2CppBase() + 0x4441360))(this, key, value);
	}
	template <typename T = void> T UpdateGameInfo_5(Il2CppString* key, Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceiOS*, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4441364))(this, key, dict);
	}
	template <typename T = Il2CppString*> T GetDataFromTGPA(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(TGPAServiceiOS*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4441368))(this, key, value);
	}
	template <typename T = Il2CppString*> T CheckDeviceIsReal() {
		return ((T (*)(TGPAServiceiOS*))(Il2CppBase() + 0x44413E0))(this);
	}
	template <typename T = Il2CppString*> T GetOptCfgStr() {
		return ((T (*)(TGPAServiceiOS*))(Il2CppBase() + 0x4441458))(this);
	}
	template <typename T = int32_t> T GetCurrentThreadTid() {
		return ((T (*)(TGPAServiceiOS*))(Il2CppBase() + 0x44414D0))(this);
	}
	template <typename T = void> T ReportUserInfo(Il2CppDictionary<Il2CppString*, Il2CppString*>* dict) {
		return ((T (*)(TGPAServiceiOS*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x44414D8))(this, dict);
	}

};

}
