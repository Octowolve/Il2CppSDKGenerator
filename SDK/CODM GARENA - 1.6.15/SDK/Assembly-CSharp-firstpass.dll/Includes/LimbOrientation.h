#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LimbOrientation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "LimbOrientation"));
	}

	template <typename T = Il2CppVector3> T& upperBoneForwardAxis() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& lowerBoneForwardAxis() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& lastBoneLeftAxis() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
