#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalLoadMapAsynccIterator5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InternalLoadMapAsync>c__Iterator5"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& sceneNameList__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $locvar0() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(InternalLoadMapAsynccIterator5*))(Il2CppBase() + 0x4AA46F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InternalLoadMapAsynccIterator5*))(Il2CppBase() + 0x4AA4AA0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InternalLoadMapAsynccIterator5*))(Il2CppBase() + 0x4AA4AA8))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InternalLoadMapAsynccIterator5*))(Il2CppBase() + 0x4AA4AB0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InternalLoadMapAsynccIterator5*))(Il2CppBase() + 0x4AA4AC4))(this);
	}

};

}
