#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMonitoringCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMonitoringCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x490F398))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMonitoringCallbackInfo*, uintptr_t))(Il2CppBase() + 0x490F42C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMonitoringCallbackInfo*))(Il2CppBase() + 0x490F458))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMonitoringCallbackInfo*))(Il2CppBase() + 0x490F4C0))(this);
	}
	template <typename T = uintptr_t> T get_errorCode() {
		return ((T (*)(AkMonitoringCallbackInfo*))(Il2CppBase() + 0x490F648))(this);
	}
	template <typename T = uintptr_t> T get_errorLevel() {
		return ((T (*)(AkMonitoringCallbackInfo*))(Il2CppBase() + 0x490F6F4))(this);
	}
	template <typename T = uint32_t> T get_playingID() {
		return ((T (*)(AkMonitoringCallbackInfo*))(Il2CppBase() + 0x490F6FC))(this);
	}
	template <typename T = uint64_t> T get_gameObjID() {
		return ((T (*)(AkMonitoringCallbackInfo*))(Il2CppBase() + 0x490F7A8))(this);
	}
	template <typename T = Il2CppString*> T get_message() {
		return ((T (*)(AkMonitoringCallbackInfo*))(Il2CppBase() + 0x490F854))(this);
	}

};

}
