#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class LightProbes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "LightProbes"));
	}


	template <typename T = int32_t> static T GetSimpleInterpolatedProbe(Il2CppVector3 position, int32_t preTetIndex, uintptr_t* probe) {
		return ((T (*)(void *, Il2CppVector3, int32_t, uintptr_t*))(Il2CppBase() + 0x47A7794))(0, position, preTetIndex, probe);
	}
	template <typename T = int32_t> static T INTERNAL_CALL_GetSimpleInterpolatedProbe(uintptr_t position, int32_t preTetIndex, uintptr_t* probe, bool useFade) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t*, bool))(Il2CppBase() + 0x47A77D0))(0, position, preTetIndex, probe, useFade);
	}

};

}
