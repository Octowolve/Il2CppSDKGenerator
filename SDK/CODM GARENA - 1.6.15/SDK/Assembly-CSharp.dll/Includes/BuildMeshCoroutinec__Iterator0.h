#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildMeshCoroutinecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BuildMeshCoroutine>c__Iterator0"));
	}

	template <typename T = Il2CppList<int32_t>*> T& excludeList__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& indexList__0() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& index__0() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& minY__0() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& minX__0() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& maxY__0() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& maxX__0() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& i__1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& pos__2() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& impactInfo__2() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& hit__2() {
		return *(T*)((uintptr_t)this + 0x38);
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

	template <typename T = bool> T MoveNext() {
		return ((T (*)(BuildMeshCoroutinecIterator0*))(Il2CppBase() + 0x2725374))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(BuildMeshCoroutinecIterator0*))(Il2CppBase() + 0x2726340))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BuildMeshCoroutinecIterator0*))(Il2CppBase() + 0x2726348))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BuildMeshCoroutinecIterator0*))(Il2CppBase() + 0x2726350))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BuildMeshCoroutinecIterator0*))(Il2CppBase() + 0x2726364))(this);
	}

};

}
