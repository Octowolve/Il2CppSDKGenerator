#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ArraySegmentEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "ArraySegmentEnumerator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _array() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _start() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _end() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& _current() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(ArraySegmentEnumerator*))(Il2CppBase() + 0x4B58CE0))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(ArraySegmentEnumerator*))(Il2CppBase() + 0x4B58D10))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(ArraySegmentEnumerator*))(Il2CppBase() + 0x4B58E3C))(this);
	}
	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(ArraySegmentEnumerator*))(Il2CppBase() + 0x4B58E70))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(ArraySegmentEnumerator*))(Il2CppBase() + 0x4B58E80))(this);
	}

};

}
