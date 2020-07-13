#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FollowPathcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FollowPath>c__Iterator0"));
	}

	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& targetSplineMove__2() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& localPawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& storyPawn__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(FollowPathcIterator0*))(Il2CppBase() + 0x5031DB4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FollowPathcIterator0*))(Il2CppBase() + 0x5032228))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FollowPathcIterator0*))(Il2CppBase() + 0x5032230))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FollowPathcIterator0*))(Il2CppBase() + 0x5032238))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FollowPathcIterator0*))(Il2CppBase() + 0x503224C))(this);
	}

};

}
