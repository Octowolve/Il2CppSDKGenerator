#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateTdircIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<UpdateTdir>c__Iterator0"));
	}

	template <typename T = float> T& startUpdateTime__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& stopUpdateTime__0() {
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
		return ((T (*)(UpdateTdircIterator0*))(Il2CppBase() + 0x3B7E358))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(UpdateTdircIterator0*))(Il2CppBase() + 0x3B7E7A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(UpdateTdircIterator0*))(Il2CppBase() + 0x3B7E7AC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(UpdateTdircIterator0*))(Il2CppBase() + 0x3B7E7B4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(UpdateTdircIterator0*))(Il2CppBase() + 0x3B7E7C8))(this);
	}

};

}
