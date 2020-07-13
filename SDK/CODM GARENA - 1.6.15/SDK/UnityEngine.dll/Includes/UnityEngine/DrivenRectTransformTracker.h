#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class DrivenRectTransformTracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "DrivenRectTransformTracker"));
	}


	template <typename T = void> T Add(uintptr_t driver, uintptr_t rectTransform, uintptr_t drivenProperties) {
		return ((T (*)(DrivenRectTransformTracker*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DA6E98))(this, driver, rectTransform, drivenProperties);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(DrivenRectTransformTracker*))(Il2CppBase() + 0x4DA6EA0))(this);
	}

};

}
