#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BGMCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BGMCallback"));
	}


	template <typename T = uintptr_t> T Invoke(bool in_bOtherAudioPlaying, uintptr_t in_Cookie) {
		return ((T (*)(BGMCallback*, bool, uintptr_t))(Il2CppBase() + 0x48F5D5C))(this, in_bOtherAudioPlaying, in_Cookie);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool in_bOtherAudioPlaying, uintptr_t in_Cookie, uintptr_t callback, uintptr_t object) {
		return ((T (*)(BGMCallback*, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48F5DF0))(this, in_bOtherAudioPlaying, in_Cookie, callback, object);
	}
	template <typename T = uintptr_t> T EndInvoke(uintptr_t result) {
		return ((T (*)(BGMCallback*, uintptr_t))(Il2CppBase() + 0x48F5EAC))(this, result);
	}

};

}
