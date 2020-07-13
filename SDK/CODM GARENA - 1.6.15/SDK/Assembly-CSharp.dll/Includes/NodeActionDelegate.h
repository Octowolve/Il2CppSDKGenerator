#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NodeActionDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NodeActionDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t node) {
		return ((T (*)(NodeActionDelegate*, uintptr_t))(Il2CppBase() + 0x3DB8B2C))(this, node);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t node, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NodeActionDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DB8BD8))(this, node, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NodeActionDelegate*, uintptr_t))(Il2CppBase() + 0x3DB8C04))(this, result);
	}

};

}
