#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucEvalPosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucEvalPosition"));
	}


	template <typename T = Il2CppVector3> T Invoke(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion) {
		return ((T (*)(FucEvalPosition*, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float))(Il2CppBase() + 0x2B575B8))(this, inCurve, elapsedTime, duartion);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucEvalPosition*, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B5781C))(this, inCurve, elapsedTime, duartion, callback, object);
	}
	template <typename T = Il2CppVector3> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucEvalPosition*, uintptr_t))(Il2CppBase() + 0x2B578F4))(this, result);
	}

};

}
