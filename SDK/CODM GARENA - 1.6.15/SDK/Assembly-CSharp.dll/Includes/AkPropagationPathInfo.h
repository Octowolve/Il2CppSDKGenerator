#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPropagationPathInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPropagationPathInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> static T& kMaxNodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x491A07C))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkPropagationPathInfo*, uintptr_t))(Il2CppBase() + 0x491A110))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491A13C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491A1A4))(this);
	}
	template <typename T = void> T set_nodePoint(uintptr_t value) {
		return ((T (*)(AkPropagationPathInfo*, uintptr_t))(Il2CppBase() + 0x491A32C))(this, value);
	}
	template <typename T = uintptr_t> T get_nodePoint() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491A3F4))(this);
	}
	template <typename T = void> T set_numNodes(uint32_t value) {
		return ((T (*)(AkPropagationPathInfo*, uint32_t))(Il2CppBase() + 0x491A51C))(this, value);
	}
	template <typename T = uint32_t> T get_numNodes() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491A5D0))(this);
	}
	template <typename T = void> T set_length(float value) {
		return ((T (*)(AkPropagationPathInfo*, float))(Il2CppBase() + 0x491A67C))(this, value);
	}
	template <typename T = float> T get_length() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491A730))(this);
	}
	template <typename T = void> T set_gain(float value) {
		return ((T (*)(AkPropagationPathInfo*, float))(Il2CppBase() + 0x491A7DC))(this, value);
	}
	template <typename T = float> T get_gain() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491A890))(this);
	}
	template <typename T = void> T set_dryDiffractionAngle(float value) {
		return ((T (*)(AkPropagationPathInfo*, float))(Il2CppBase() + 0x491A93C))(this, value);
	}
	template <typename T = float> T get_dryDiffractionAngle() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491A9F0))(this);
	}
	template <typename T = void> T set_wetDiffractionAngle(float value) {
		return ((T (*)(AkPropagationPathInfo*, float))(Il2CppBase() + 0x491AA9C))(this, value);
	}
	template <typename T = float> T get_wetDiffractionAngle() {
		return ((T (*)(AkPropagationPathInfo*))(Il2CppBase() + 0x491AB50))(this);
	}

};

}
