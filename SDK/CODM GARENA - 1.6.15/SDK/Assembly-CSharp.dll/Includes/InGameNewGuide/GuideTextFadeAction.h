#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class GuideTextFadeAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "GuideTextFadeAction"));
	}


	template <typename T = void> T Invoke(uintptr_t label) {
		return ((T (*)(GuideTextFadeAction*, uintptr_t))(Il2CppBase() + 0x3169D08))(this, label);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t label, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GuideTextFadeAction*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3169DA0))(this, label, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(GuideTextFadeAction*, uintptr_t))(Il2CppBase() + 0x3169DCC))(this, result);
	}

};

}
