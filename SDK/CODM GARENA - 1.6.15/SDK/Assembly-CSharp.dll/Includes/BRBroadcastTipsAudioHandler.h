#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRBroadcastTipsAudioHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRBroadcastTipsAudioHandler"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetAudioClipID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> static T GetAudioClipID(uint32_t styleID, uintptr_t* clipID) {
		return ((T (*)(void *, uint32_t, uintptr_t*))(Il2CppBase() + 0x35C50B8))(0, styleID, clipID);
	}
	template <typename T = void> static T PlayAudio(uint32_t styleID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x35C5200))(0, styleID);
	}

};

}
