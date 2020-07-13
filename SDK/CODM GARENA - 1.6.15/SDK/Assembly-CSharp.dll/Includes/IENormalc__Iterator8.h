#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IENormalcIterator8
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<IENormal>c__Iterator8"));
	}

	template <typename T = uintptr_t> T& part() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(IENormalcIterator8*))(Il2CppBase() + 0x297D138))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(IENormalcIterator8*))(Il2CppBase() + 0x297D744))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(IENormalcIterator8*))(Il2CppBase() + 0x297D74C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(IENormalcIterator8*))(Il2CppBase() + 0x297D754))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IENormalcIterator8*))(Il2CppBase() + 0x297D768))(this);
	}

};

}
