#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IDragAndDropCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IDragAndDropCallback"));
	}


	template <typename T = void> T OnDragDropStart() {
		return ((T (*)(IDragAndDropCallback*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnDragDropMove(Il2CppVector3 delta) {
		return ((T (*)(IDragAndDropCallback*, Il2CppVector3))(Il2CppBase() + 0x0))(this, delta);
	}
	template <typename T = void> T OnDragDropRelease(uintptr_t surface) {
		return ((T (*)(IDragAndDropCallback*, uintptr_t))(Il2CppBase() + 0x0))(this, surface);
	}

};

}
