#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BehaviorCaughtTargetcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BehaviorCaughtTarget>c__Iterator1"));
	}

	template <typename T = Il2CppVector3> T& targetBonePos__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(BehaviorCaughtTargetcIterator1*))(Il2CppBase() + 0x4CC4588))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(BehaviorCaughtTargetcIterator1*))(Il2CppBase() + 0x4CC54D0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BehaviorCaughtTargetcIterator1*))(Il2CppBase() + 0x4CC54D8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BehaviorCaughtTargetcIterator1*))(Il2CppBase() + 0x4CC54E0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BehaviorCaughtTargetcIterator1*))(Il2CppBase() + 0x4CC54F4))(this);
	}
	template <typename T = bool> T m__0() {
		return ((T (*)(BehaviorCaughtTargetcIterator1*))(Il2CppBase() + 0x4CC5588))(this);
	}

};

}
