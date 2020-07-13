#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkDynamicSequenceItemCallbackInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkDynamicSequenceItemCallbackInfo"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48FACC4))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkDynamicSequenceItemCallbackInfo*, uintptr_t))(Il2CppBase() + 0x48FAD58))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkDynamicSequenceItemCallbackInfo*))(Il2CppBase() + 0x48FAE18))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkDynamicSequenceItemCallbackInfo*))(Il2CppBase() + 0x48FAE80))(this);
	}
	template <typename T = uint32_t> T get_playingID() {
		return ((T (*)(AkDynamicSequenceItemCallbackInfo*))(Il2CppBase() + 0x48FB014))(this);
	}
	template <typename T = uint32_t> T get_audioNodeID() {
		return ((T (*)(AkDynamicSequenceItemCallbackInfo*))(Il2CppBase() + 0x48FB0C0))(this);
	}
	template <typename T = uintptr_t> T get_pCustomInfo() {
		return ((T (*)(AkDynamicSequenceItemCallbackInfo*))(Il2CppBase() + 0x48FB16C))(this);
	}

};

}
