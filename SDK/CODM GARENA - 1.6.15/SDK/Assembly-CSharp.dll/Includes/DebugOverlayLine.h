#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DebugOverlayLine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DebugOverlayLine"));
	}

	template <typename T = Il2CppString*> T& label() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& expireTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
