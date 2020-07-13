#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnAddExpBuffNtfcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<OnAddExpBuffNtf>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& ntf() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
