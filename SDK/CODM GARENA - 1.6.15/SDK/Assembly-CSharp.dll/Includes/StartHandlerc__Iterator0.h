#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StartHandlercIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<StartHandler>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(StartHandlercIterator0*))(Il2CppBase() + 0x27DBAB0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(StartHandlercIterator0*))(Il2CppBase() + 0x27DBB8C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(StartHandlercIterator0*))(Il2CppBase() + 0x27DBB94))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(StartHandlercIterator0*))(Il2CppBase() + 0x27DBB9C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(StartHandlercIterator0*))(Il2CppBase() + 0x27DBBB0))(this);
	}

};

}
