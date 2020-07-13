#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class IMainAudioListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "IMainAudioListener"));
	}


	template <typename T = uintptr_t> T get_CurrentAudioListener() {
		return ((T (*)(IMainAudioListener*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AttachAudioListenerTo(uintptr_t goListener) {
		return ((T (*)(IMainAudioListener*, uintptr_t))(Il2CppBase() + 0x0))(this, goListener);
	}

};

}
