#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayMakerOnGUI
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("PlayMaker.dll", "", "PlayMakerOnGUI"));
	}

	template <typename T = uintptr_t> T& playMakerFSM() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& previewInEditMode() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(PlayMakerOnGUI*))(Il2CppBase() + 0x5146A98))(this);
	}
	template <typename T = void> T OnGUI() {
		return ((T (*)(PlayMakerOnGUI*))(Il2CppBase() + 0x5146B80))(this);
	}
	template <typename T = void> static T DoEditGUI() {
		return ((T (*)(void *))(Il2CppBase() + 0x5146CD0))(0);
	}

};

}
