#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class OnDirCallbackHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "OnDirCallbackHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t nodeList, uintptr_t result) {
		return ((T (*)(OnDirCallbackHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1622B04))(this, nodeList, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t nodeList, uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(OnDirCallbackHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x1622BC8))(this, nodeList, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnDirCallbackHandler*, uintptr_t))(Il2CppBase() + 0x1622C90))(this, result);
	}

};

}
