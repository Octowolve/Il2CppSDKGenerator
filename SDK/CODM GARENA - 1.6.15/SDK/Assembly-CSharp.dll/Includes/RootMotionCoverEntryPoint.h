#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RootMotionCoverEntryPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RootMotionCoverEntryPoint"));
	}

	template <typename T = Il2CppVector3> T& EnterPos() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& EnterRot() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& EnterAnimationName() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
