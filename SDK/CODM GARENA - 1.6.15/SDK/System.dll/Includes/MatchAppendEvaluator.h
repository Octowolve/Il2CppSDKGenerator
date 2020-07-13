#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MatchAppendEvaluator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "MatchAppendEvaluator"));
	}


	template <typename T = void> T Invoke(uintptr_t match, uintptr_t sb) {
		return ((T (*)(MatchAppendEvaluator*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E8C1C8))(this, match, sb);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t match, uintptr_t sb, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MatchAppendEvaluator*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E8C28C))(this, match, sb, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(MatchAppendEvaluator*, uintptr_t))(Il2CppBase() + 0x3E8C2C4))(this, result);
	}

};

}
