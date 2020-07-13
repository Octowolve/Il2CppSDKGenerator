#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class MatchEvaluator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "MatchEvaluator"));
	}


	template <typename T = Il2CppString*> T Invoke(uintptr_t match) {
		return ((T (*)(MatchEvaluator*, uintptr_t))(Il2CppBase() + 0x4ADAA7C))(this, match);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t match, uintptr_t callback, uintptr_t object) {
		return ((T (*)(MatchEvaluator*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4ADAB14))(this, match, callback, object);
	}
	template <typename T = Il2CppString*> T EndInvoke(uintptr_t result) {
		return ((T (*)(MatchEvaluator*, uintptr_t))(Il2CppBase() + 0x4ADAB40))(this, result);
	}

};

}
