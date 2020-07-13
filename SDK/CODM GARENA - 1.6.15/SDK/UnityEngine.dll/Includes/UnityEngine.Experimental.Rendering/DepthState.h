#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class DepthState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "DepthState"));
	}

	template <typename T = unsigned char> T& m_WriteEnabled() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = signed char> T& m_CompareFunction() {
		return *(T*)((uintptr_t)this + 0x1);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DB26CC))(0);
	}
	template <typename T = void> T set_writeEnabled(bool value) {
		return ((T (*)(DepthState*, bool))(Il2CppBase() + 0x4DB27AC))(this, value);
	}
	template <typename T = void> T set_compareFunction(uintptr_t value) {
		return ((T (*)(DepthState*, uintptr_t))(Il2CppBase() + 0x4DB27BC))(this, value);
	}

};

}
