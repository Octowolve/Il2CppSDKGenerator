#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucEvalRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucEvalRotation"));
	}


	template <typename T = Il2CppQuaternion> T Invoke(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion, uintptr_t type) {
		return ((T (*)(FucEvalRotation*, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float, uintptr_t))(Il2CppBase() + 0x2B5770C))(this, inCurve, elapsedTime, duartion, type);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppDictionary<Il2CppString*, uintptr_t>* inCurve, float elapsedTime, float duartion, uintptr_t type, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucEvalRotation*, Il2CppDictionary<Il2CppString*, uintptr_t>*, float, float, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2B57938))(this, inCurve, elapsedTime, duartion, type, callback, object);
	}
	template <typename T = Il2CppQuaternion> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucEvalRotation*, uintptr_t))(Il2CppBase() + 0x2B57A3C))(this, result);
	}

};

}
