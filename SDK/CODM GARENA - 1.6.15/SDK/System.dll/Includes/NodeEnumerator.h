#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NodeEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "NodeEnumerator"));
	}

	template <typename T = uintptr_t> T& tree() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = void*> T& pennants() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x4C99938))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x4C99A80))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x4C99AA0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x4C99C78))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x4C99C90))(this);
	}
	template <typename T = void> T check_version() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x4C99CA0))(this);
	}
	template <typename T = void> T check_current() {
		return ((T (*)(NodeEnumerator*))(Il2CppBase() + 0x4C99CA8))(this);
	}

};

}
