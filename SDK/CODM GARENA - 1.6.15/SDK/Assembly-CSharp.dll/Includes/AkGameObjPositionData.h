#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkGameObjPositionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkGameObjPositionData"));
	}

	template <typename T = Il2CppVector3> T& forward() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& up() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
