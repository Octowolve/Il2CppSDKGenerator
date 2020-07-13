#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AudioInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AudioInfo"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& CurTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
