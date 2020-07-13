#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeysRequiredEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "KeysRequiredEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(KeysRequiredEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A82498))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(KeysRequiredEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A8623C))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(KeysRequiredEventHandler*, uintptr_t))(Il2CppBase() + 0x4A86274))(this, result);
	}

};

}
