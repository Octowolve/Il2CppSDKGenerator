#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class OnGuidelineTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "OnGuidelineTrigger"));
	}


	template <typename T = void> T Invoke(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo) {
		return ((T (*)(OnGuidelineTrigger*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B04DE0))(this, tutorial, triggerInfo);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t tutorial, Il2CppArray<uintptr_t>* triggerInfo, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnGuidelineTrigger*, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B04E74))(this, tutorial, triggerInfo, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnGuidelineTrigger*, uintptr_t))(Il2CppBase() + 0x4B04F38))(this, result);
	}

};

}
