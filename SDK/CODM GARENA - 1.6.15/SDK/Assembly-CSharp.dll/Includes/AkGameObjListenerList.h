#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkGameObjListenerList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkGameObjListenerList"));
	}

	template <typename T = uintptr_t> T& akGameObj() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& initialListenerList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& useDefaultListeners() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T SetUseDefaultListeners(bool useDefault) {
		return ((T (*)(AkGameObjListenerList*, bool))(Il2CppBase() + 0x4901650))(this, useDefault);
	}
	template <typename T = void> T Init(uintptr_t akGameObj) {
		return ((T (*)(AkGameObjListenerList*, uintptr_t))(Il2CppBase() + 0x49001CC))(this, akGameObj);
	}
	template <typename T = bool> T Add(uintptr_t listener) {
		return ((T (*)(AkGameObjListenerList*, uintptr_t))(Il2CppBase() + 0x49018D0))(this, listener);
	}
	template <typename T = bool> T Remove(uintptr_t listener) {
		return ((T (*)(AkGameObjListenerList*, uintptr_t))(Il2CppBase() + 0x4901A20))(this, listener);
	}

};

}
