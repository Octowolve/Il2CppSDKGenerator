#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkSoundEngineController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkSoundEngineController"));
	}

	template <typename T = Il2CppString*> static T& s_DefaultBasePath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& s_Language() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& s_DefaultPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = int32_t> static T& s_LowerPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& s_StreamingPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& s_PreparePoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& s_MemoryCutoffThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& s_MonitorPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& s_MonitorQueuePoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& s_CallbackManagerBufferSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = bool> static T& s_EngineLogging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& s_SpatialAudioPoolSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> T& basePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& language() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& engineLogging() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& MemBankCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& EnableLowLatencyAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& ms_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = float> T& mfNextResumeEngineTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> static T& EnableMultiChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = float> static T& msDefaultPoolMemoryCutOff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x227D2FC))(0);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkSoundEngineController*))(Il2CppBase() + 0x227D458))(this);
	}
	template <typename T = Il2CppString*> static T GetDecodedBankFolder() {
		return ((T (*)(void *))(Il2CppBase() + 0x227D5A0))(0);
	}
	template <typename T = Il2CppString*> static T GetDecodedBankFullPath() {
		return ((T (*)(void *))(Il2CppBase() + 0x227D618))(0);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AkSoundEngineController*))(Il2CppBase() + 0x227D760))(this);
	}
	template <typename T = void> T Init(uintptr_t akInitializer) {
		return ((T (*)(AkSoundEngineController*, uintptr_t))(Il2CppBase() + 0x227D9BC))(this, akInitializer);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkSoundEngineController*))(Il2CppBase() + 0x227F490))(this);
	}
	template <typename T = void> T Terminate() {
		return ((T (*)(AkSoundEngineController*))(Il2CppBase() + 0x227F494))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(AkSoundEngineController*, bool))(Il2CppBase() + 0x227F9C0))(this, pauseStatus);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(AkSoundEngineController*, bool))(Il2CppBase() + 0x227FE8C))(this, focus);
	}
	template <typename T = void> static T ActivateAudio(bool activate) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x227FC48))(0, activate);
	}

};

}
