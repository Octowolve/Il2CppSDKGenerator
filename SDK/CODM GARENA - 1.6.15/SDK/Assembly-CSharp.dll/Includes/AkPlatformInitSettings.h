#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPlatformInitSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPlatformInitSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x491383C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkPlatformInitSettings*, uintptr_t))(Il2CppBase() + 0x49138D0))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x49138FC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4913964))(this);
	}
	template <typename T = void> T set_threadLEngine(uintptr_t value) {
		return ((T (*)(AkPlatformInitSettings*, uintptr_t))(Il2CppBase() + 0x4913AEC))(this, value);
	}
	template <typename T = uintptr_t> T get_threadLEngine() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4913BB4))(this);
	}
	template <typename T = void> T set_threadBankManager(uintptr_t value) {
		return ((T (*)(AkPlatformInitSettings*, uintptr_t))(Il2CppBase() + 0x4913CDC))(this, value);
	}
	template <typename T = uintptr_t> T get_threadBankManager() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4913DA4))(this);
	}
	template <typename T = void> T set_threadMonitor(uintptr_t value) {
		return ((T (*)(AkPlatformInitSettings*, uintptr_t))(Il2CppBase() + 0x4913ECC))(this, value);
	}
	template <typename T = uintptr_t> T get_threadMonitor() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4913F94))(this);
	}
	template <typename T = void> T set_fLEngineDefaultPoolRatioThreshold(float value) {
		return ((T (*)(AkPlatformInitSettings*, float))(Il2CppBase() + 0x49140BC))(this, value);
	}
	template <typename T = float> T get_fLEngineDefaultPoolRatioThreshold() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4914170))(this);
	}
	template <typename T = void> T set_uLEngineDefaultPoolSize(uint32_t value) {
		return ((T (*)(AkPlatformInitSettings*, uint32_t))(Il2CppBase() + 0x491421C))(this, value);
	}
	template <typename T = uint32_t> T get_uLEngineDefaultPoolSize() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x49142D0))(this);
	}
	template <typename T = void> T set_uSampleRate(uint32_t value) {
		return ((T (*)(AkPlatformInitSettings*, uint32_t))(Il2CppBase() + 0x491437C))(this, value);
	}
	template <typename T = uint32_t> T get_uSampleRate() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4914430))(this);
	}
	template <typename T = void> T set_uNumRefillsInVoice(uint16_t value) {
		return ((T (*)(AkPlatformInitSettings*, uint16_t))(Il2CppBase() + 0x49144DC))(this, value);
	}
	template <typename T = uint16_t> T get_uNumRefillsInVoice() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4914590))(this);
	}
	template <typename T = void> T set_uChannelMask(uint32_t value) {
		return ((T (*)(AkPlatformInitSettings*, uint32_t))(Il2CppBase() + 0x491463C))(this, value);
	}
	template <typename T = uint32_t> T get_uChannelMask() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x49146F0))(this);
	}
	template <typename T = void> T set_bRoundFrameSizeToHWSize(bool value) {
		return ((T (*)(AkPlatformInitSettings*, bool))(Il2CppBase() + 0x491479C))(this, value);
	}
	template <typename T = bool> T get_bRoundFrameSizeToHWSize() {
		return ((T (*)(AkPlatformInitSettings*))(Il2CppBase() + 0x4914850))(this);
	}

};

}
