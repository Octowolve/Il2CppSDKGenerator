#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FrameIgnoreInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FrameIgnoreInfo"));
	}

	template <typename T = int32_t> T& FrameIndex() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& DataIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& DataLength() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
