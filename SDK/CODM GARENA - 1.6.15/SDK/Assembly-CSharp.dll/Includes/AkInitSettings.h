#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkInitSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkInitSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4903AD8))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkInitSettings*, uintptr_t))(Il2CppBase() + 0x4903B6C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4903B98))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4903C00))(this);
	}
	template <typename T = void> T set_pfnAssertHook(int32_t value) {
		return ((T (*)(AkInitSettings*, int32_t))(Il2CppBase() + 0x4903D88))(this, value);
	}
	template <typename T = int32_t> T get_pfnAssertHook() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4903D8C))(this);
	}
	template <typename T = void> T set_uMaxNumPaths(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x4903D94))(this, value);
	}
	template <typename T = uint32_t> T get_uMaxNumPaths() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4903E48))(this);
	}
	template <typename T = void> T set_uDefaultPoolSize(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x4903EF4))(this, value);
	}
	template <typename T = uint32_t> T get_uDefaultPoolSize() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4903FA8))(this);
	}
	template <typename T = void> T set_fDefaultPoolRatioThreshold(float value) {
		return ((T (*)(AkInitSettings*, float))(Il2CppBase() + 0x4904054))(this, value);
	}
	template <typename T = float> T get_fDefaultPoolRatioThreshold() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904108))(this);
	}
	template <typename T = void> T set_uCommandQueueSize(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x49041B4))(this, value);
	}
	template <typename T = uint32_t> T get_uCommandQueueSize() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904268))(this);
	}
	template <typename T = void> T set_uPrepareEventMemoryPoolID(int32_t value) {
		return ((T (*)(AkInitSettings*, int32_t))(Il2CppBase() + 0x4904314))(this, value);
	}
	template <typename T = int32_t> T get_uPrepareEventMemoryPoolID() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x49043C8))(this);
	}
	template <typename T = void> T set_bEnableGameSyncPreparation(bool value) {
		return ((T (*)(AkInitSettings*, bool))(Il2CppBase() + 0x4904474))(this, value);
	}
	template <typename T = bool> T get_bEnableGameSyncPreparation() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904528))(this);
	}
	template <typename T = void> T set_uContinuousPlaybackLookAhead(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x49045D4))(this, value);
	}
	template <typename T = uint32_t> T get_uContinuousPlaybackLookAhead() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904688))(this);
	}
	template <typename T = void> T set_uNumSamplesPerFrame(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x4904734))(this, value);
	}
	template <typename T = uint32_t> T get_uNumSamplesPerFrame() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x49047E8))(this);
	}
	template <typename T = void> T set_uMonitorPoolSize(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x4904894))(this, value);
	}
	template <typename T = uint32_t> T get_uMonitorPoolSize() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904948))(this);
	}
	template <typename T = void> T set_uMonitorQueuePoolSize(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x49049F4))(this, value);
	}
	template <typename T = uint32_t> T get_uMonitorQueuePoolSize() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904AA8))(this);
	}
	template <typename T = void> T set_settingsMainOutput(uintptr_t value) {
		return ((T (*)(AkInitSettings*, uintptr_t))(Il2CppBase() + 0x4904B54))(this, value);
	}
	template <typename T = uintptr_t> T get_settingsMainOutput() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904D18))(this);
	}
	template <typename T = void> T set_uMaxHardwareTimeoutMs(uint32_t value) {
		return ((T (*)(AkInitSettings*, uint32_t))(Il2CppBase() + 0x4904E6C))(this, value);
	}
	template <typename T = uint32_t> T get_uMaxHardwareTimeoutMs() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4904F20))(this);
	}
	template <typename T = void> T set_bUseSoundBankMgrThread(bool value) {
		return ((T (*)(AkInitSettings*, bool))(Il2CppBase() + 0x4904FCC))(this, value);
	}
	template <typename T = bool> T get_bUseSoundBankMgrThread() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4905080))(this);
	}
	template <typename T = void> T set_bUseLEngineThread(bool value) {
		return ((T (*)(AkInitSettings*, bool))(Il2CppBase() + 0x490512C))(this, value);
	}
	template <typename T = bool> T get_bUseLEngineThread() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x49051E0))(this);
	}
	template <typename T = void> T set_szPluginDLLPath(Il2CppString* value) {
		return ((T (*)(AkInitSettings*, Il2CppString*))(Il2CppBase() + 0x490528C))(this, value);
	}
	template <typename T = Il2CppString*> T get_szPluginDLLPath() {
		return ((T (*)(AkInitSettings*))(Il2CppBase() + 0x4905340))(this);
	}

};

}
