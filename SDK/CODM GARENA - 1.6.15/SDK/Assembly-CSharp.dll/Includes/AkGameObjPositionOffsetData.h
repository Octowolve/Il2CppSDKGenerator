#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkGameObjPositionOffsetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkGameObjPositionOffsetData"));
	}

	template <typename T = bool> T& KeepMe() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
