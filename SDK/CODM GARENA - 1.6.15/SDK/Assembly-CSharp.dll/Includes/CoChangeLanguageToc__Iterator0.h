#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CoChangeLanguageTocIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<CoChangeLanguageTo>c__Iterator0"));
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
		return ((T (*)(CoChangeLanguageTocIterator0*))(Il2CppBase() + 0x35EA614))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(CoChangeLanguageTocIterator0*))(Il2CppBase() + 0x35EA9A4))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(CoChangeLanguageTocIterator0*))(Il2CppBase() + 0x35EA9AC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(CoChangeLanguageTocIterator0*))(Il2CppBase() + 0x35EA9B4))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CoChangeLanguageTocIterator0*))(Il2CppBase() + 0x35EA9C8))(this);
	}

};

}
