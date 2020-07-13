#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseListenerList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseListenerList"));
	}

	template <typename T = Il2CppList<uint64_t>*> T& listenerIdList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& listenerList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ListenerList() {
		return ((T (*)(BaseListenerList*))(Il2CppBase() + 0x4A2708C))(this);
	}
	template <typename T = bool> T Add(uintptr_t listener) {
		return ((T (*)(BaseListenerList*, uintptr_t))(Il2CppBase() + 0x4A27094))(this, listener);
	}
	template <typename T = bool> T Remove(uintptr_t listener) {
		return ((T (*)(BaseListenerList*, uintptr_t))(Il2CppBase() + 0x4A27220))(this, listener);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetListenerIds() {
		return ((T (*)(BaseListenerList*))(Il2CppBase() + 0x4A273AC))(this);
	}

};

}
