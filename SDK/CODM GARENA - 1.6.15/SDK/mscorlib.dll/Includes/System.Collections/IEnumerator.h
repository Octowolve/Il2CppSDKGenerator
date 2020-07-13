#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class IEnumerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "IEnumerator"));
	}


	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(IEnumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(IEnumerator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IEnumerator*))(Il2CppBase() + 0x0))(this);
	}

};

}
