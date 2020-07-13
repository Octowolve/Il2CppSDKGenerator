#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class ListPool1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "ListPool`1"));
	}

	template <typename T = void*> static T& s_ListPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppList<uintptr_t>*> static T Get() {
		return ((T (*)(void *))(Il2CppBase() + 0x518D658))(0);
	}
	template <typename T = void> static T Release(Il2CppList<uintptr_t>* toRelease) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x518D74C))(0, toRelease);
	}
	template <typename T = void> static T s_ListPoolm__0(Il2CppList<uintptr_t>* l) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x518D958))(0, l);
	}

};

}
