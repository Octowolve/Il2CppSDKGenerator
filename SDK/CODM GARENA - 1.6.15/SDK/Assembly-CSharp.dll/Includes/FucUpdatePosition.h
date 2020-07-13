#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FucUpdatePosition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FucUpdatePosition"));
	}


	template <typename T = Il2CppVector3> T Invoke(float inTime, bool inState) {
		return ((T (*)(FucUpdatePosition*, float, bool))(Il2CppBase() + 0x1DFCD10))(this, inTime, inState);
	}
	template <typename T = uintptr_t> T BeginInvoke(float inTime, bool inState, uintptr_t callback, uintptr_t object) {
		return ((T (*)(FucUpdatePosition*, float, bool, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DFCDD8))(this, inTime, inState, callback, object);
	}
	template <typename T = Il2CppVector3> T EndInvoke(uintptr_t result) {
		return ((T (*)(FucUpdatePosition*, uintptr_t))(Il2CppBase() + 0x1DFCEB8))(this, result);
	}

};

}
