#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEmitterSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEmitterSettings"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48FC2E8))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkEmitterSettings*, uintptr_t))(Il2CppBase() + 0x48FC37C))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FC3A8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FC410))(this);
	}
	template <typename T = void> T set_reflectAuxBusID(uint32_t value) {
		return ((T (*)(AkEmitterSettings*, uint32_t))(Il2CppBase() + 0x48FC598))(this, value);
	}
	template <typename T = uint32_t> T get_reflectAuxBusID() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FC64C))(this);
	}
	template <typename T = void> T set_reflectionMaxPathLength(float value) {
		return ((T (*)(AkEmitterSettings*, float))(Il2CppBase() + 0x48FC6F8))(this, value);
	}
	template <typename T = float> T get_reflectionMaxPathLength() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FC7AC))(this);
	}
	template <typename T = void> T set_reflectionsAuxBusGain(float value) {
		return ((T (*)(AkEmitterSettings*, float))(Il2CppBase() + 0x48FC858))(this, value);
	}
	template <typename T = float> T get_reflectionsAuxBusGain() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FC90C))(this);
	}
	template <typename T = void> T set_reflectionsOrder(uint32_t value) {
		return ((T (*)(AkEmitterSettings*, uint32_t))(Il2CppBase() + 0x48FC9B8))(this, value);
	}
	template <typename T = uint32_t> T get_reflectionsOrder() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FCA6C))(this);
	}
	template <typename T = void> T set_reflectorFilterMask(uint32_t value) {
		return ((T (*)(AkEmitterSettings*, uint32_t))(Il2CppBase() + 0x48FCB18))(this, value);
	}
	template <typename T = uint32_t> T get_reflectorFilterMask() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FCBCC))(this);
	}
	template <typename T = void> T set_roomReverbAuxBusGain(float value) {
		return ((T (*)(AkEmitterSettings*, float))(Il2CppBase() + 0x48FCC78))(this, value);
	}
	template <typename T = float> T get_roomReverbAuxBusGain() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FCD2C))(this);
	}
	template <typename T = void> T set_useImageSources(unsigned char value) {
		return ((T (*)(AkEmitterSettings*, unsigned char))(Il2CppBase() + 0x48FCDD8))(this, value);
	}
	template <typename T = unsigned char> T get_useImageSources() {
		return ((T (*)(AkEmitterSettings*))(Il2CppBase() + 0x48FCE8C))(this);
	}

};

}
