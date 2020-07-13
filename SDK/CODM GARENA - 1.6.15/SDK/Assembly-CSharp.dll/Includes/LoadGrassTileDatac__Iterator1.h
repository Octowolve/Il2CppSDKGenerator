#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadGrassTileDatacIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<LoadGrassTileData>c__Iterator1"));
	}

	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(LoadGrassTileDatacIterator1*))(Il2CppBase() + 0x36F891C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(LoadGrassTileDatacIterator1*))(Il2CppBase() + 0x36F892C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(LoadGrassTileDatacIterator1*))(Il2CppBase() + 0x36F8934))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(LoadGrassTileDatacIterator1*))(Il2CppBase() + 0x36F893C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(LoadGrassTileDatacIterator1*))(Il2CppBase() + 0x36F8940))(this);
	}

};

}
