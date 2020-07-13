#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Init>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
