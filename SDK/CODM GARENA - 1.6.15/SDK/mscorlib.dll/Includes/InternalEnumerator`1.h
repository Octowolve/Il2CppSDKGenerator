#pragma once
#include <Il2Cpp/Il2Cpp.h>

class InternalEnumerator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "InternalEnumerator`1"));
	}

	template <typename T = uintptr_t> T& array() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& idx() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T System_Collections_IEnumerator_Reset() {
		return ((T (*)(InternalEnumerator1*))(Il2CppBase() + 0x4A66D84))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(InternalEnumerator1*))(Il2CppBase() + 0x4A66EF0))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(InternalEnumerator1*))(Il2CppBase() + 0x4A66F1C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(InternalEnumerator1*))(Il2CppBase() + 0x4A66F8C))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(InternalEnumerator1*))(Il2CppBase() + 0x4A66F94))(this);
	}

};

}
