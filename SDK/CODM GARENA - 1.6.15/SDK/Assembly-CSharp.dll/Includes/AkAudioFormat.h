#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAudioFormat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAudioFormat"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A216D4))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkAudioFormat*, uintptr_t))(Il2CppBase() + 0x4A21768))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A21794))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A217FC))(this);
	}
	template <typename T = void> T set_uSampleRate(uint32_t value) {
		return ((T (*)(AkAudioFormat*, uint32_t))(Il2CppBase() + 0x4A21984))(this, value);
	}
	template <typename T = uint32_t> T get_uSampleRate() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A21A38))(this);
	}
	template <typename T = void> T set_channelConfig(uintptr_t value) {
		return ((T (*)(AkAudioFormat*, uintptr_t))(Il2CppBase() + 0x4A21AE4))(this, value);
	}
	template <typename T = uintptr_t> T get_channelConfig() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A21BAC))(this);
	}
	template <typename T = void> T set_uBitsPerSample(uint32_t value) {
		return ((T (*)(AkAudioFormat*, uint32_t))(Il2CppBase() + 0x4A21CD4))(this, value);
	}
	template <typename T = uint32_t> T get_uBitsPerSample() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A21D88))(this);
	}
	template <typename T = void> T set_uBlockAlign(uint32_t value) {
		return ((T (*)(AkAudioFormat*, uint32_t))(Il2CppBase() + 0x4A21E34))(this, value);
	}
	template <typename T = uint32_t> T get_uBlockAlign() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A21EE8))(this);
	}
	template <typename T = void> T set_uTypeID(uint32_t value) {
		return ((T (*)(AkAudioFormat*, uint32_t))(Il2CppBase() + 0x4A21F94))(this, value);
	}
	template <typename T = uint32_t> T get_uTypeID() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A22048))(this);
	}
	template <typename T = void> T set_uInterleaveID(uint32_t value) {
		return ((T (*)(AkAudioFormat*, uint32_t))(Il2CppBase() + 0x4A220F4))(this, value);
	}
	template <typename T = uint32_t> T get_uInterleaveID() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A221A8))(this);
	}
	template <typename T = uint32_t> T GetNumChannels() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A22254))(this);
	}
	template <typename T = uint32_t> T GetBitsPerSample() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A22300))(this);
	}
	template <typename T = uint32_t> T GetBlockAlign() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A223AC))(this);
	}
	template <typename T = uint32_t> T GetTypeID() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A22458))(this);
	}
	template <typename T = uint32_t> T GetInterleaveID() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A22504))(this);
	}
	template <typename T = void> T SetAll(uint32_t in_uSampleRate, uintptr_t in_channelConfig, uint32_t in_uBitsPerSample, uint32_t in_uBlockAlign, uint32_t in_uTypeID, uint32_t in_uInterleaveID) {
		return ((T (*)(AkAudioFormat*, uint32_t, uintptr_t, uint32_t, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x4A225B0))(this, in_uSampleRate, in_channelConfig, in_uBitsPerSample, in_uBlockAlign, in_uTypeID, in_uInterleaveID);
	}
	template <typename T = bool> T IsChannelConfigSupported() {
		return ((T (*)(AkAudioFormat*))(Il2CppBase() + 0x4A226A8))(this);
	}

};

}
