#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioSwitch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioSwitch"));
	}

	template <typename T = float> T& healthPercent() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& switchValue() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
