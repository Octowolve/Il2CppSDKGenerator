#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPositioningInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPositioningInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4918424))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkPositioningInfo*, uintptr_t))(Il2CppBase() + 0x49184B8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x49184E4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x491854C))(this);
	}
	template <typename T = void> T set_fCenterPct(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x49186D4))(this, value);
	}
	template <typename T = float> T get_fCenterPct() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4918788))(this);
	}
	template <typename T = void> T set_pannerType(uintptr_t value) {
		return ((T (*)(AkPositioningInfo*, uintptr_t))(Il2CppBase() + 0x4918834))(this, value);
	}
	template <typename T = uintptr_t> T get_pannerType() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x49188E8))(this);
	}
	template <typename T = void> T set_posSourceType(uintptr_t value) {
		return ((T (*)(AkPositioningInfo*, uintptr_t))(Il2CppBase() + 0x4918994))(this, value);
	}
	template <typename T = uintptr_t> T get_posSourceType() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4918A48))(this);
	}
	template <typename T = void> T set_bUpdateEachFrame(bool value) {
		return ((T (*)(AkPositioningInfo*, bool))(Il2CppBase() + 0x4918AF4))(this, value);
	}
	template <typename T = bool> T get_bUpdateEachFrame() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4918BA8))(this);
	}
	template <typename T = void> T set_e3DSpatializationMode(uintptr_t value) {
		return ((T (*)(AkPositioningInfo*, uintptr_t))(Il2CppBase() + 0x4918C54))(this, value);
	}
	template <typename T = uintptr_t> T get_e3DSpatializationMode() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4918D08))(this);
	}
	template <typename T = void> T set_bUseAttenuation(bool value) {
		return ((T (*)(AkPositioningInfo*, bool))(Il2CppBase() + 0x4918DB4))(this, value);
	}
	template <typename T = bool> T get_bUseAttenuation() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4918E68))(this);
	}
	template <typename T = void> T set_bUseConeAttenuation(bool value) {
		return ((T (*)(AkPositioningInfo*, bool))(Il2CppBase() + 0x4918F14))(this, value);
	}
	template <typename T = bool> T get_bUseConeAttenuation() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4918FC8))(this);
	}
	template <typename T = void> T set_fInnerAngle(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919074))(this, value);
	}
	template <typename T = float> T get_fInnerAngle() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919128))(this);
	}
	template <typename T = void> T set_fOuterAngle(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x49191D4))(this, value);
	}
	template <typename T = float> T get_fOuterAngle() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919288))(this);
	}
	template <typename T = void> T set_fConeMaxAttenuation(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919334))(this, value);
	}
	template <typename T = float> T get_fConeMaxAttenuation() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x49193E8))(this);
	}
	template <typename T = void> T set_LPFCone(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919494))(this, value);
	}
	template <typename T = float> T get_LPFCone() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919548))(this);
	}
	template <typename T = void> T set_HPFCone(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x49195F4))(this, value);
	}
	template <typename T = float> T get_HPFCone() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x49196A8))(this);
	}
	template <typename T = void> T set_fMaxDistance(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919754))(this, value);
	}
	template <typename T = float> T get_fMaxDistance() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919808))(this);
	}
	template <typename T = void> T set_fVolDryAtMaxDist(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x49198B4))(this, value);
	}
	template <typename T = float> T get_fVolDryAtMaxDist() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919968))(this);
	}
	template <typename T = void> T set_fVolAuxGameDefAtMaxDist(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919A14))(this, value);
	}
	template <typename T = float> T get_fVolAuxGameDefAtMaxDist() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919AC8))(this);
	}
	template <typename T = void> T set_fVolAuxUserDefAtMaxDist(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919B74))(this, value);
	}
	template <typename T = float> T get_fVolAuxUserDefAtMaxDist() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919C28))(this);
	}
	template <typename T = void> T set_LPFValueAtMaxDist(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919CD4))(this, value);
	}
	template <typename T = float> T get_LPFValueAtMaxDist() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919D88))(this);
	}
	template <typename T = void> T set_HPFValueAtMaxDist(float value) {
		return ((T (*)(AkPositioningInfo*, float))(Il2CppBase() + 0x4919E34))(this, value);
	}
	template <typename T = float> T get_HPFValueAtMaxDist() {
		return ((T (*)(AkPositioningInfo*))(Il2CppBase() + 0x4919EE8))(this);
	}

};

}
