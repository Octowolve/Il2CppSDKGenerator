#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections.Specialized {

class StringEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Collections.Specialized", "StringEnumerator"));
	}

	template <typename T = uintptr_t> T& enumerable() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_Current() {
		return ((T (*)(StringEnumerator*))(Il2CppBase() + 0x4CA09D0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(StringEnumerator*))(Il2CppBase() + 0x4CA0BD4))(this);
	}

};

}
