#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InitPlayerItemscAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InitPlayerItems>c__AnonStorey1"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
