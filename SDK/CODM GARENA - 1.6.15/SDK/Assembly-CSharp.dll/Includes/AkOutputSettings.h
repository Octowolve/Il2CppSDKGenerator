#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkOutputSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkOutputSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4904C84))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkOutputSettings*, uintptr_t))(Il2CppBase() + 0x4912EBC))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkOutputSettings*))(Il2CppBase() + 0x4912EE8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkOutputSettings*))(Il2CppBase() + 0x4912F50))(this);
	}
	template <typename T = void> T set_audioDeviceShareset(uint32_t value) {
		return ((T (*)(AkOutputSettings*, uint32_t))(Il2CppBase() + 0x49130D8))(this, value);
	}
	template <typename T = uint32_t> T get_audioDeviceShareset() {
		return ((T (*)(AkOutputSettings*))(Il2CppBase() + 0x491318C))(this);
	}
	template <typename T = void> T set_idDevice(uint32_t value) {
		return ((T (*)(AkOutputSettings*, uint32_t))(Il2CppBase() + 0x4913238))(this, value);
	}
	template <typename T = uint32_t> T get_idDevice() {
		return ((T (*)(AkOutputSettings*))(Il2CppBase() + 0x49132EC))(this);
	}
	template <typename T = void> T set_ePanningRule(uintptr_t value) {
		return ((T (*)(AkOutputSettings*, uintptr_t))(Il2CppBase() + 0x4913398))(this, value);
	}
	template <typename T = uintptr_t> T get_ePanningRule() {
		return ((T (*)(AkOutputSettings*))(Il2CppBase() + 0x491344C))(this);
	}
	template <typename T = void> T set_channelConfig(uintptr_t value) {
		return ((T (*)(AkOutputSettings*, uintptr_t))(Il2CppBase() + 0x49134F8))(this, value);
	}
	template <typename T = uintptr_t> T get_channelConfig() {
		return ((T (*)(AkOutputSettings*))(Il2CppBase() + 0x4913628))(this);
	}

};

}
