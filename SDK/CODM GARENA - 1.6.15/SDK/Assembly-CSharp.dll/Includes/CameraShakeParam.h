#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraShakeParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CameraShakeParam"));
	}

	template <typename T = float> T& magnitude() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& speed() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
