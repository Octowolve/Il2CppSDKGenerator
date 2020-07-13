#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDatacAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetData>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& rank() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
