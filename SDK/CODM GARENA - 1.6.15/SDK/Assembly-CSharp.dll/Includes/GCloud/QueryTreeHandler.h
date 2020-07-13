#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class QueryTreeHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "QueryTreeHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result, uintptr_t nodeList) {
		return ((T (*)(QueryTreeHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4434B1C))(this, result, nodeList);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t nodeList, uintptr_t callback, uintptr_t object) {
		return ((T (*)(QueryTreeHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4434BE0))(this, result, nodeList, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(QueryTreeHandler*, uintptr_t))(Il2CppBase() + 0x4434C18))(this, result);
	}

};

}
