#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkGameObjPosOffsetData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkGameObjPosOffsetData"));
	}

	template <typename T = Il2CppVector3> T& positionOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
