#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DragActionHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DragActionHandler"));
	}


	template <typename T = bool> T Invoke() {
		return ((T (*)(DragActionHandler*))(Il2CppBase() + 0x1DA1F28))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(DragActionHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1DB1C64))(this, callback, object);
	}
	template <typename T = bool> T EndInvoke(uintptr_t result) {
		return ((T (*)(DragActionHandler*, uintptr_t))(Il2CppBase() + 0x1DB1C90))(this, result);
	}

};

}
