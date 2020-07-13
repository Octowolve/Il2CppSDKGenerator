#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class QueryAllHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "QueryAllHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result, uintptr_t treeList) {
		return ((T (*)(QueryAllHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x44348E4))(this, result, treeList);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t treeList, uintptr_t callback, uintptr_t object) {
		return ((T (*)(QueryAllHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44349A8))(this, result, treeList, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(QueryAllHandler*, uintptr_t))(Il2CppBase() + 0x44349E0))(this, result);
	}

};

}
