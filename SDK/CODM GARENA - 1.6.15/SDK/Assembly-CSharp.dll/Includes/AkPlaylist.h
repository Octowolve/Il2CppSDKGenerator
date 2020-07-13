#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPlaylist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPlaylist"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4914AA4))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkPlaylist*, uintptr_t))(Il2CppBase() + 0x4914B38))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPlaylist*))(Il2CppBase() + 0x4914C30))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPlaylist*))(Il2CppBase() + 0x4914CF8))(this);
	}
	template <typename T = uintptr_t> T Enqueue(uint32_t in_audioNodeID, int32_t in_msDelay, uintptr_t in_pCustomInfo, uint32_t in_cExternals, uintptr_t in_pExternalSources) {
		return ((T (*)(AkPlaylist*, uint32_t, int32_t, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x4915010))(this, in_audioNodeID, in_msDelay, in_pCustomInfo, in_cExternals, in_pExternalSources);
	}
	template <typename T = uintptr_t> T Enqueue_1(uint32_t in_audioNodeID, int32_t in_msDelay, uintptr_t in_pCustomInfo, uint32_t in_cExternals) {
		return ((T (*)(AkPlaylist*, uint32_t, int32_t, uintptr_t, uint32_t))(Il2CppBase() + 0x4915168))(this, in_audioNodeID, in_msDelay, in_pCustomInfo, in_cExternals);
	}
	template <typename T = uintptr_t> T Enqueue_2(uint32_t in_audioNodeID, int32_t in_msDelay, uintptr_t in_pCustomInfo) {
		return ((T (*)(AkPlaylist*, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x491523C))(this, in_audioNodeID, in_msDelay, in_pCustomInfo);
	}
	template <typename T = uintptr_t> T Enqueue_3(uint32_t in_audioNodeID, int32_t in_msDelay) {
		return ((T (*)(AkPlaylist*, uint32_t, int32_t))(Il2CppBase() + 0x491530C))(this, in_audioNodeID, in_msDelay);
	}
	template <typename T = uintptr_t> T Enqueue_4(uint32_t in_audioNodeID) {
		return ((T (*)(AkPlaylist*, uint32_t))(Il2CppBase() + 0x49153D4))(this, in_audioNodeID);
	}

};

}
