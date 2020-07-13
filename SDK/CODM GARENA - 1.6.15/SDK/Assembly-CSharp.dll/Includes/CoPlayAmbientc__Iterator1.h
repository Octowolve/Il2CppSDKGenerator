#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoPlayAmbientcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CoPlayAmbient>c__Iterator1"));
	}

	template <typename T = bool> T& isPlay__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& isBehind__1() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = Il2CppVector3> T& vecPlayer2Me__1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& SqrtPos__1() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(CoPlayAmbientcIterator1*))(Il2CppBase() + 0x4053A1C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CoPlayAmbientcIterator1*))(Il2CppBase() + 0x4053ED8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CoPlayAmbientcIterator1*))(Il2CppBase() + 0x4053EE0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CoPlayAmbientcIterator1*))(Il2CppBase() + 0x4053EE8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CoPlayAmbientcIterator1*))(Il2CppBase() + 0x4053EFC))(this);
	}

};

}
