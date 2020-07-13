#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JumpFailcIterator2
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<JumpFail>c__Iterator2"));
	}

	template <typename T = Il2CppVector3> T& destPos() {
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
		return ((T (*)(JumpFailcIterator2*))(Il2CppBase() + 0x4CC5C68))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(JumpFailcIterator2*))(Il2CppBase() + 0x4CC5E80))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(JumpFailcIterator2*))(Il2CppBase() + 0x4CC5E88))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(JumpFailcIterator2*))(Il2CppBase() + 0x4CC5E90))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(JumpFailcIterator2*))(Il2CppBase() + 0x4CC5EA4))(this);
	}

};

}
