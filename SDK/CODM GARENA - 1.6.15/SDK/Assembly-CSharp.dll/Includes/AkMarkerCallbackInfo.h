#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMarkerCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMarkerCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4906C10))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkMarkerCallbackInfo*, uintptr_t))(Il2CppBase() + 0x4906CA4))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMarkerCallbackInfo*))(Il2CppBase() + 0x4906D60))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkMarkerCallbackInfo*))(Il2CppBase() + 0x4906DD0))(this);
	}
	template <typename T = uint32_t> T get_uIdentifier() {
		return ((T (*)(AkMarkerCallbackInfo*))(Il2CppBase() + 0x4906F60))(this);
	}
	template <typename T = uint32_t> T get_uPosition() {
		return ((T (*)(AkMarkerCallbackInfo*))(Il2CppBase() + 0x490700C))(this);
	}
	template <typename T = Il2CppString*> T get_strLabel() {
		return ((T (*)(AkMarkerCallbackInfo*))(Il2CppBase() + 0x49070B8))(this);
	}

};

}
