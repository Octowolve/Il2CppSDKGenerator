#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkInitializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkInitializer"));
	}

	template <typename T = Il2CppString*> T& basePath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& language() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& defaultPoolSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& lowerPoolSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& streamingPoolSize() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& preparePoolSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& memoryCutoffThreshold() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& monitorPoolSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& monitorQueuePoolSize() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& lowMem_defaultPoolSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& lowMem_lowerPoolSize() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& lowMem_streamingPoolSize() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& lowMem_preparePoolSize() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& lowMem_monitorPoolSize() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& lowMem_spatialAudioPoolSize() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& callbackManagerBufferSize() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& spatialAudioPoolSize() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& maxSoundPropagationDepth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& diffractionFlags() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& engineLogging() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& MemBankCount() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& ms_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> static T GetBasePath() {
		return ((T (*)(void *))(Il2CppBase() + 0x4902F24))(0);
	}
	template <typename T = Il2CppString*> static T GetCurrentLanguage() {
		return ((T (*)(void *))(Il2CppBase() + 0x4902FD8))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AkInitializer*))(Il2CppBase() + 0x490308C))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkInitializer*))(Il2CppBase() + 0x49031E8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkInitializer*))(Il2CppBase() + 0x4903318))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(AkInitializer*))(Il2CppBase() + 0x4903444))(this);
	}
	template <typename T = void> T OnApplicationPause(bool pauseStatus) {
		return ((T (*)(AkInitializer*, bool))(Il2CppBase() + 0x4903530))(this, pauseStatus);
	}
	template <typename T = void> T OnApplicationFocus(bool focus) {
		return ((T (*)(AkInitializer*, bool))(Il2CppBase() + 0x4903664))(this, focus);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(AkInitializer*))(Il2CppBase() + 0x4903798))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AkInitializer*))(Il2CppBase() + 0x49038C4))(this);
	}

};

}
