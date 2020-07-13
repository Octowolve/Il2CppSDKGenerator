#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ICanvasElement
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ICanvasElement"));
	}


	template <typename T = void> T Rebuild(uintptr_t executing) {
		return ((T (*)(ICanvasElement*, uintptr_t))(Il2CppBase() + 0x0))(this, executing);
	}
	template <typename T = uintptr_t> T get_transform() {
		return ((T (*)(ICanvasElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T LayoutComplete() {
		return ((T (*)(ICanvasElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T GraphicUpdateComplete() {
		return ((T (*)(ICanvasElement*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsDestroyed() {
		return ((T (*)(ICanvasElement*))(Il2CppBase() + 0x0))(this);
	}

};

}
