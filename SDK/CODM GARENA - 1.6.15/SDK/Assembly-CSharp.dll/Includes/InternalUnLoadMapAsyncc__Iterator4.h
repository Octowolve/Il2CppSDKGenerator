#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalUnLoadMapAsynccIterator4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InternalUnLoadMapAsync>c__Iterator4"));
	}

	template <typename T = int32_t> T& mapID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& targetLevel__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& scenePath__2() {
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
		return ((T (*)(InternalUnLoadMapAsynccIterator4*))(Il2CppBase() + 0x4AA4F40))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InternalUnLoadMapAsynccIterator4*))(Il2CppBase() + 0x4AA5124))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InternalUnLoadMapAsynccIterator4*))(Il2CppBase() + 0x4AA512C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InternalUnLoadMapAsynccIterator4*))(Il2CppBase() + 0x4AA5134))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InternalUnLoadMapAsynccIterator4*))(Il2CppBase() + 0x4AA5148))(this);
	}

};

}
