#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkPlaylistItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkPlaylistItem"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4905900))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkPlaylistItem*, uintptr_t))(Il2CppBase() + 0x49171E4))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkPlaylistItem*))(Il2CppBase() + 0x4917210))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkPlaylistItem*))(Il2CppBase() + 0x4917278))(this);
	}
	template <typename T = uintptr_t> T Assign(uintptr_t in_rCopy) {
		return ((T (*)(AkPlaylistItem*, uintptr_t))(Il2CppBase() + 0x4917400))(this, in_rCopy);
	}
	template <typename T = bool> T IsEqualTo(uintptr_t in_rCopy) {
		return ((T (*)(AkPlaylistItem*, uintptr_t))(Il2CppBase() + 0x4917570))(this, in_rCopy);
	}
	template <typename T = uintptr_t> T SetExternalSources(uint32_t in_nExternalSrc, uintptr_t in_pExternalSrc) {
		return ((T (*)(AkPlaylistItem*, uint32_t, uintptr_t))(Il2CppBase() + 0x49176A0))(this, in_nExternalSrc, in_pExternalSrc);
	}
	template <typename T = void> T set_audioNodeID(uint32_t value) {
		return ((T (*)(AkPlaylistItem*, uint32_t))(Il2CppBase() + 0x49177E4))(this, value);
	}
	template <typename T = uint32_t> T get_audioNodeID() {
		return ((T (*)(AkPlaylistItem*))(Il2CppBase() + 0x4917898))(this);
	}
	template <typename T = void> T set_msDelay(int32_t value) {
		return ((T (*)(AkPlaylistItem*, int32_t))(Il2CppBase() + 0x4917944))(this, value);
	}
	template <typename T = int32_t> T get_msDelay() {
		return ((T (*)(AkPlaylistItem*))(Il2CppBase() + 0x49179F8))(this);
	}
	template <typename T = void> T set_pCustomInfo(uintptr_t value) {
		return ((T (*)(AkPlaylistItem*, uintptr_t))(Il2CppBase() + 0x4917AA4))(this, value);
	}
	template <typename T = uintptr_t> T get_pCustomInfo() {
		return ((T (*)(AkPlaylistItem*))(Il2CppBase() + 0x4917B58))(this);
	}

};

}
