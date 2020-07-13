#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpatialAudioListenerList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SpatialAudioListenerList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& listenerList() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ListenerList() {
		return ((T (*)(SpatialAudioListenerList*))(Il2CppBase() + 0x22A8D10))(this);
	}
	template <typename T = bool> T Add(uintptr_t listener) {
		return ((T (*)(SpatialAudioListenerList*, uintptr_t))(Il2CppBase() + 0x22A8878))(this, listener);
	}
	template <typename T = bool> T Remove(uintptr_t listener) {
		return ((T (*)(SpatialAudioListenerList*, uintptr_t))(Il2CppBase() + 0x22A8A88))(this, listener);
	}
	template <typename T = void> T Refresh() {
		return ((T (*)(SpatialAudioListenerList*))(Il2CppBase() + 0x22A8D18))(this);
	}

};

}
