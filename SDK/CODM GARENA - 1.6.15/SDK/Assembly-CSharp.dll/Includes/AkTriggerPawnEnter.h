#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerPawnEnter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerPawnEnter"));
	}


	template <typename T = void> T OnPawnFirstEnter(uintptr_t pTarget) {
		return ((T (*)(AkTriggerPawnEnter*, uintptr_t))(Il2CppBase() + 0x22B18EC))(this, pTarget);
	}

};

}
