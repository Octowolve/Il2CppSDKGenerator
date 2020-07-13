#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FirstLevelTabBtnClickCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FirstLevelTabBtnClickCallbackHandler"));
	}


	template <typename T = bool> T Invoke(int32_t playlistType, bool bForce, bool bRedDotChange) {
		return ((T (*)(FirstLevelTabBtnClickCallbackHandler*, int32_t, bool, bool))(Il2CppBase() + 0x47FE5E0))(this, playlistType, bForce, bRedDotChange);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t playlistType, bool bForce, bool bRedDotChange, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FirstLevelTabBtnClickCallbackHandler*, int32_t, bool, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x47FE7D8))(this, playlistType, bForce, bRedDotChange, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(FirstLevelTabBtnClickCallbackHandler*, uintptr_t))(Il2CppBase() + 0x47FE8C8))(this, result);
	}

};

}
