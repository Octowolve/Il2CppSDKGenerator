#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEnvironmentCompareByPriority
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEnvironment_CompareByPriority"));
	}


	template <typename T = int32_t> T Compare(uintptr_t a, uintptr_t b) {
		return ((T (*)(AkEnvironmentCompareByPriority*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48FD0C4))(this, a, b);
	}

};

}
