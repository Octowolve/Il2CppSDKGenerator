#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DeadReplayFrameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DeadReplayFrameInfo"));
	}

	template <typename T = bool> T& IsLastFrame() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint64_t> T& Stamp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
