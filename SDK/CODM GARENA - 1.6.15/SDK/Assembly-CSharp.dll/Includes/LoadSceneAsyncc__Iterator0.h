#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadSceneAsynccIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadSceneAsync>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& scene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& instCount__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& remainder__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& numPerFrame__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& startIndex__0() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& endIndex__0() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& loadedCount__0() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& db() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& nextFrame__2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadSceneAsynccIterator0*))(Il2CppBase() + 0x488E6E0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadSceneAsynccIterator0*))(Il2CppBase() + 0x488EB4C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadSceneAsynccIterator0*))(Il2CppBase() + 0x488EB54))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadSceneAsynccIterator0*))(Il2CppBase() + 0x488EB5C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadSceneAsynccIterator0*))(Il2CppBase() + 0x488EB70))(this);
	}

};

}
