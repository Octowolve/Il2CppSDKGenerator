#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NextWaypointcIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<NextWaypoint>c__Iterator1"));
	}

	template <typename T = uintptr_t> T& next__0() {
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

	template <typename T = bool> T MoveNext() {
		return ((T (*)(NextWaypointcIterator1*))(Il2CppBase() + 0x3F34D84))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(NextWaypointcIterator1*))(Il2CppBase() + 0x3F35238))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(NextWaypointcIterator1*))(Il2CppBase() + 0x3F35240))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(NextWaypointcIterator1*))(Il2CppBase() + 0x3F35248))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NextWaypointcIterator1*))(Il2CppBase() + 0x3F3525C))(this);
	}

};

}
