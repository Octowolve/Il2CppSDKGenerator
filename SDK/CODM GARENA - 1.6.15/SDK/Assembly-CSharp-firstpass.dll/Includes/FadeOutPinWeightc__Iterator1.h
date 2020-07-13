#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FadeOutPinWeightcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "<FadeOutPinWeight>c__Iterator1"));
	}

	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(FadeOutPinWeightcIterator1*))(Il2CppBase() + 0x38A3BFC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FadeOutPinWeightcIterator1*))(Il2CppBase() + 0x38A3D54))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FadeOutPinWeightcIterator1*))(Il2CppBase() + 0x38A3D5C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FadeOutPinWeightcIterator1*))(Il2CppBase() + 0x38A3D64))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FadeOutPinWeightcIterator1*))(Il2CppBase() + 0x38A3D78))(this);
	}

};

}
