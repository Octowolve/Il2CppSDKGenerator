#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class QueryLeafHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "QueryLeafHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result, uintptr_t node) {
		return ((T (*)(QueryLeafHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4434A00))(this, result, node);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t node, uintptr_t callback, uintptr_t object) {
		return ((T (*)(QueryLeafHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4434AC4))(this, result, node, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(QueryLeafHandler*, uintptr_t))(Il2CppBase() + 0x4434AFC))(this, result);
	}

};

}
