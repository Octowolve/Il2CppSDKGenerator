#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalLoadMapSynccIterator6
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<InternalLoadMapSync>c__Iterator6"));
	}

	template <typename T = int32_t> T& sceneCount__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& sceneNameList__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(InternalLoadMapSynccIterator6*))(Il2CppBase() + 0x4AA4C44))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(InternalLoadMapSynccIterator6*))(Il2CppBase() + 0x4AA4E88))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InternalLoadMapSynccIterator6*))(Il2CppBase() + 0x4AA4E90))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InternalLoadMapSynccIterator6*))(Il2CppBase() + 0x4AA4E98))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(InternalLoadMapSynccIterator6*))(Il2CppBase() + 0x4AA4EAC))(this);
	}

};

}
