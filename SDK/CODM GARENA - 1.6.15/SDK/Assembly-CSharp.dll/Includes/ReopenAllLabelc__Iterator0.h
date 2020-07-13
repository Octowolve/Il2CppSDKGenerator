#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReopenAllLabelcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<ReopenAllLabel>c__Iterator0"));
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
		return ((T (*)(ReopenAllLabelcIterator0*))(Il2CppBase() + 0x2F607EC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(ReopenAllLabelcIterator0*))(Il2CppBase() + 0x2F60C34))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ReopenAllLabelcIterator0*))(Il2CppBase() + 0x2F60C3C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ReopenAllLabelcIterator0*))(Il2CppBase() + 0x2F60C44))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ReopenAllLabelcIterator0*))(Il2CppBase() + 0x2F60C58))(this);
	}

};

}
