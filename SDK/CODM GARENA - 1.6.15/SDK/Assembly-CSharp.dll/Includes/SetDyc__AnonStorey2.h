#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetDycAnonStorey2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SetDy>c__AnonStorey2"));
	}

	template <typename T = uintptr_t> T& res() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
