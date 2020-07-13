#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkDeviceSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkDeviceSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48F8D40))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkDeviceSettings*, uintptr_t))(Il2CppBase() + 0x48F8DD4))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F8E00))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F8E68))(this);
	}
	template <typename T = void> T set_pIOMemory(uintptr_t value) {
		return ((T (*)(AkDeviceSettings*, uintptr_t))(Il2CppBase() + 0x48F8FF0))(this, value);
	}
	template <typename T = uintptr_t> T get_pIOMemory() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F90A4))(this);
	}
	template <typename T = void> T set_uIOMemorySize(uint32_t value) {
		return ((T (*)(AkDeviceSettings*, uint32_t))(Il2CppBase() + 0x48F9150))(this, value);
	}
	template <typename T = uint32_t> T get_uIOMemorySize() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9204))(this);
	}
	template <typename T = void> T set_uIOMemoryAlignment(uint32_t value) {
		return ((T (*)(AkDeviceSettings*, uint32_t))(Il2CppBase() + 0x48F92B0))(this, value);
	}
	template <typename T = uint32_t> T get_uIOMemoryAlignment() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9364))(this);
	}
	template <typename T = void> T set_ePoolAttributes(int32_t value) {
		return ((T (*)(AkDeviceSettings*, int32_t))(Il2CppBase() + 0x48F9410))(this, value);
	}
	template <typename T = int32_t> T get_ePoolAttributes() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F94C4))(this);
	}
	template <typename T = void> T set_uGranularity(uint32_t value) {
		return ((T (*)(AkDeviceSettings*, uint32_t))(Il2CppBase() + 0x48F9570))(this, value);
	}
	template <typename T = uint32_t> T get_uGranularity() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9624))(this);
	}
	template <typename T = void> T set_uSchedulerTypeFlags(uint32_t value) {
		return ((T (*)(AkDeviceSettings*, uint32_t))(Il2CppBase() + 0x48F96D0))(this, value);
	}
	template <typename T = uint32_t> T get_uSchedulerTypeFlags() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9784))(this);
	}
	template <typename T = void> T set_threadProperties(uintptr_t value) {
		return ((T (*)(AkDeviceSettings*, uintptr_t))(Il2CppBase() + 0x48F9830))(this, value);
	}
	template <typename T = uintptr_t> T get_threadProperties() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F98F8))(this);
	}
	template <typename T = void> T set_fTargetAutoStmBufferLength(float value) {
		return ((T (*)(AkDeviceSettings*, float))(Il2CppBase() + 0x48F9A20))(this, value);
	}
	template <typename T = float> T get_fTargetAutoStmBufferLength() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9AD4))(this);
	}
	template <typename T = void> T set_uMaxConcurrentIO(uint32_t value) {
		return ((T (*)(AkDeviceSettings*, uint32_t))(Il2CppBase() + 0x48F9B80))(this, value);
	}
	template <typename T = uint32_t> T get_uMaxConcurrentIO() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9C34))(this);
	}
	template <typename T = void> T set_bUseStreamCache(bool value) {
		return ((T (*)(AkDeviceSettings*, bool))(Il2CppBase() + 0x48F9CE0))(this, value);
	}
	template <typename T = bool> T get_bUseStreamCache() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9D94))(this);
	}
	template <typename T = void> T set_uMaxCachePinnedBytes(uint32_t value) {
		return ((T (*)(AkDeviceSettings*, uint32_t))(Il2CppBase() + 0x48F9E40))(this, value);
	}
	template <typename T = uint32_t> T get_uMaxCachePinnedBytes() {
		return ((T (*)(AkDeviceSettings*))(Il2CppBase() + 0x48F9EF4))(this);
	}

};

}
