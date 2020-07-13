#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EdgeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EdgeInfo"));
	}

	template <typename T = int32_t> T& FrameCount() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& Min() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& Max() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
