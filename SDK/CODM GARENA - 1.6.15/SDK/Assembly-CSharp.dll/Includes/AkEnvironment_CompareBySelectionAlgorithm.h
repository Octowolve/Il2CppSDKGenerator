#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEnvironmentCompareBySelectionAlgorithm
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEnvironment_CompareBySelectionAlgorithm"));
	}


	template <typename T = int32_t> T Compare(uintptr_t a, uintptr_t b) {
		return ((T (*)(AkEnvironmentCompareBySelectionAlgorithm*, uintptr_t, uintptr_t))(Il2CppBase() + 0x48FD1C0))(this, a, b);
	}

};

}
