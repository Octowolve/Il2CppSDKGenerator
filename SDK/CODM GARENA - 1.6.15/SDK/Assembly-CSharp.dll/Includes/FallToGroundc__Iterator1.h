#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FallToGroundcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FallToGround>c__Iterator1"));
	}

	template <typename T = Il2CppVector3> T& groundPos() {
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
		return ((T (*)(FallToGroundcIterator1*))(Il2CppBase() + 0x4CCE9C8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(FallToGroundcIterator1*))(Il2CppBase() + 0x4CCEC24))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(FallToGroundcIterator1*))(Il2CppBase() + 0x4CCEC2C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(FallToGroundcIterator1*))(Il2CppBase() + 0x4CCEC34))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(FallToGroundcIterator1*))(Il2CppBase() + 0x4CCEC48))(this);
	}

};

}
