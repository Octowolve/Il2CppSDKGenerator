#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoStartAutoRotacIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DoStartAutoRota>c__Iterator0"));
	}

	template <typename T = Il2CppVector3> T& forward__1() {
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
		return ((T (*)(DoStartAutoRotacIterator0*))(Il2CppBase() + 0x2659434))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(DoStartAutoRotacIterator0*))(Il2CppBase() + 0x265957C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(DoStartAutoRotacIterator0*))(Il2CppBase() + 0x2659584))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(DoStartAutoRotacIterator0*))(Il2CppBase() + 0x265958C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(DoStartAutoRotacIterator0*))(Il2CppBase() + 0x26595A0))(this);
	}

};

}
