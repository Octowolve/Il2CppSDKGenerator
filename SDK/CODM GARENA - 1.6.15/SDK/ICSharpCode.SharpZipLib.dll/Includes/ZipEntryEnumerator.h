#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ZipEntryEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("ICSharpCode.SharpZipLib.dll", "", "ZipEntryEnumerator"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& array() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(ZipEntryEnumerator*))(Il2CppBase() + 0x4A86990))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ZipEntryEnumerator*))(Il2CppBase() + 0x4A869D4))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(ZipEntryEnumerator*))(Il2CppBase() + 0x4A869E0))(this);
	}

};

}
