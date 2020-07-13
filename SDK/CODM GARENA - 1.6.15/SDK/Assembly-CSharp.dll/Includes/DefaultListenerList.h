#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DefaultListenerList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DefaultListenerList"));
	}


	template <typename T = bool> T Add(uintptr_t listener) {
		return ((T (*)(DefaultListenerList*, uintptr_t))(Il2CppBase() + 0x4A27444))(this, listener);
	}
	template <typename T = bool> T Remove(uintptr_t listener) {
		return ((T (*)(DefaultListenerList*, uintptr_t))(Il2CppBase() + 0x4A27574))(this, listener);
	}

};

}
