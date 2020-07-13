#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class ScriptableRenderContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "ScriptableRenderContext"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Initialize(uintptr_t ptr) {
		return ((T (*)(ScriptableRenderContext*, uintptr_t))(Il2CppBase() + 0x4DB30A8))(this, ptr);
	}

};

}
