#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RootMotionFireFromCoverAnimationInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RootMotionFireFromCoverAnimationInfo"));
	}

	template <typename T = Il2CppString*> T& LeaveCoverAnimationName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& ReturnCoverAnimationName() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
