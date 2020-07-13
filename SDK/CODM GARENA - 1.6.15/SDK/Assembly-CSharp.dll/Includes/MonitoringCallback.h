#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MonitoringCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MonitoringCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t in_errorCode, uintptr_t in_errorLevel, uint32_t in_playingID, uint64_t in_gameObjID, Il2CppString* in_msg) {
		return ((T (*)(MonitoringCallback*, uintptr_t, uintptr_t, uint32_t, uint64_t, Il2CppString*))(Il2CppBase() + 0x48F6370))(this, in_errorCode, in_errorLevel, in_playingID, in_gameObjID, in_msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t in_errorCode, uintptr_t in_errorLevel, uint32_t in_playingID, uint64_t in_gameObjID, Il2CppString* in_msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MonitoringCallback*, uintptr_t, uintptr_t, uint32_t, uint64_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48F6434))(this, in_errorCode, in_errorLevel, in_playingID, in_gameObjID, in_msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MonitoringCallback*, uintptr_t))(Il2CppBase() + 0x48F6570))(this, result);
	}

};

}
