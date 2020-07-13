#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeysEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "_KeysEnumerator"));
	}

	template <typename T = uintptr_t> T& m_collection() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_position() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(KeysEnumerator*))(Il2CppBase() + 0x4C9E07C))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(KeysEnumerator*))(Il2CppBase() + 0x4C9E168))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(KeysEnumerator*))(Il2CppBase() + 0x4C9E070))(this);
	}

};

}
