#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDragAndDropCallbackEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDragAndDropCallbackEx"));
	}


	template <typename T = void> T OnDragDropStart(uintptr_t dropView) {
		return ((T (*)(IDragAndDropCallbackEx*, uintptr_t))(Il2CppBase() + 0x0))(this, dropView);
	}
	template <typename T = void> T OnDragDropMove(uintptr_t dropView, Il2CppVector3 delta) {
		return ((T (*)(IDragAndDropCallbackEx*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x0))(this, dropView, delta);
	}
	template <typename T = void> T OnDragDropRelease(uintptr_t dropView, uintptr_t surface) {
		return ((T (*)(IDragAndDropCallbackEx*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, dropView, surface);
	}

};

}
