#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EReactionRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EReactionRecord"));
	}

	template <typename T = bool> T& IsValid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& EventInstigatorID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& OriginatingChannel() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& ActivateTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
