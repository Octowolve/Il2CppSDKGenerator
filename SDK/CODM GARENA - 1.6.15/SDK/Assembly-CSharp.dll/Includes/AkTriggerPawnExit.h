#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerPawnExit
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerPawnExit"));
	}


	template <typename T = void> T OnPawnLastExit(uintptr_t pTarget) {
		return ((T (*)(AkTriggerPawnExit*, uintptr_t))(Il2CppBase() + 0x22B19F8))(this, pTarget);
	}

};

}
