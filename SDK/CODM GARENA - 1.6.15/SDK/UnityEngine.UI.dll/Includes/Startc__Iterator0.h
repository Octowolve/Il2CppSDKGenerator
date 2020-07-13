#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "<Start>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& tweenInfo() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& elapsedTime__0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& percentage__1() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartcIterator0*))(Il2CppBase() + 0x518C684))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(StartcIterator0*))(Il2CppBase() + 0x518C854))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartcIterator0*))(Il2CppBase() + 0x518C85C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(StartcIterator0*))(Il2CppBase() + 0x518C864))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(StartcIterator0*))(Il2CppBase() + 0x518C878))(this);
	}

};

}
