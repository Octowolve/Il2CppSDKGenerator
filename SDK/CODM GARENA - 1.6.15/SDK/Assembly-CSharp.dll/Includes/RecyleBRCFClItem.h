#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RecyleBRCFClItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RecyleBRCFClItem"));
	}


	template <typename T = void> T Invoke(uintptr_t item) {
		return ((T (*)(RecyleBRCFClItem*, uintptr_t))(Il2CppBase() + 0x24F294C))(this, item);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t item, uintptr_t callback, uintptr_t object) {
		return ((T (*)(RecyleBRCFClItem*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x24F36C8))(this, item, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RecyleBRCFClItem*, uintptr_t))(Il2CppBase() + 0x24F36F4))(this, result);
	}

};

}
