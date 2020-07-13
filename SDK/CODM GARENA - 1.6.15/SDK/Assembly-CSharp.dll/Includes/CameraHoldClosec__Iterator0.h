#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CameraHoldClosecIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CameraHoldClose>c__Iterator0"));
	}

	template <typename T = float> T& holdTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& type() {
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
		return ((T (*)(CameraHoldClosecIterator0*))(Il2CppBase() + 0x1DDB7F0))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CameraHoldClosecIterator0*))(Il2CppBase() + 0x1DDB9DC))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CameraHoldClosecIterator0*))(Il2CppBase() + 0x1DDB9E4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CameraHoldClosecIterator0*))(Il2CppBase() + 0x1DDB9EC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CameraHoldClosecIterator0*))(Il2CppBase() + 0x1DDBA00))(this);
	}

};

}
