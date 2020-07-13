#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayObtainSoundRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayObtainSoundRecord"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& LastPlaySoundTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
