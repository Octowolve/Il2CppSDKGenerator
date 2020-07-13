#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkChannelConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkChannelConfig"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48F6F0C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkChannelConfig*, uintptr_t))(Il2CppBase() + 0x48F6FA0))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F6FCC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F7034))(this);
	}
	template <typename T = void> T set_uNumChannels(uint32_t value) {
		return ((T (*)(AkChannelConfig*, uint32_t))(Il2CppBase() + 0x48F71BC))(this, value);
	}
	template <typename T = uint32_t> T get_uNumChannels() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F7270))(this);
	}
	template <typename T = void> T set_eConfigType(uint32_t value) {
		return ((T (*)(AkChannelConfig*, uint32_t))(Il2CppBase() + 0x48F731C))(this, value);
	}
	template <typename T = uint32_t> T get_eConfigType() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F73D0))(this);
	}
	template <typename T = void> T set_uChannelMask(uint32_t value) {
		return ((T (*)(AkChannelConfig*, uint32_t))(Il2CppBase() + 0x48F747C))(this, value);
	}
	template <typename T = uint32_t> T get_uChannelMask() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F7530))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F75DC))(this);
	}
	template <typename T = void> T SetStandard(uint32_t in_uChannelMask) {
		return ((T (*)(AkChannelConfig*, uint32_t))(Il2CppBase() + 0x48F7688))(this, in_uChannelMask);
	}
	template <typename T = void> T SetStandardOrAnonymous(uint32_t in_uNumChannels, uint32_t in_uChannelMask) {
		return ((T (*)(AkChannelConfig*, uint32_t, uint32_t))(Il2CppBase() + 0x48F773C))(this, in_uNumChannels, in_uChannelMask);
	}
	template <typename T = void> T SetAnonymous(uint32_t in_uNumChannels) {
		return ((T (*)(AkChannelConfig*, uint32_t))(Il2CppBase() + 0x48F7804))(this, in_uNumChannels);
	}
	template <typename T = void> T SetAmbisonic(uint32_t in_uNumChannels) {
		return ((T (*)(AkChannelConfig*, uint32_t))(Il2CppBase() + 0x48F78B8))(this, in_uNumChannels);
	}
	template <typename T = bool> T IsValid() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F796C))(this);
	}
	template <typename T = uint32_t> T Serialize() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F7A18))(this);
	}
	template <typename T = void> T Deserialize(uint32_t in_uChannelConfig) {
		return ((T (*)(AkChannelConfig*, uint32_t))(Il2CppBase() + 0x48F7AC4))(this, in_uChannelConfig);
	}
	template <typename T = uintptr_t> T RemoveLFE() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F7B78))(this);
	}
	template <typename T = uintptr_t> T RemoveCenter() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F7C64))(this);
	}
	template <typename T = bool> T IsChannelConfigSupported() {
		return ((T (*)(AkChannelConfig*))(Il2CppBase() + 0x48F7D50))(this);
	}

};

}
