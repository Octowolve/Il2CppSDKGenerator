#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TriggerVoiceConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TriggerVoiceConfig"));
	}

	template <typename T = Il2CppString*> T& VoiceEvent1P() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& VoiceEvent3P() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint32_t> T& skillVoiceId() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
