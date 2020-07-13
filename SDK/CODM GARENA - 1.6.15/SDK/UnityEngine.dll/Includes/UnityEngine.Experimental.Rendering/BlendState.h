#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Rendering {

class BlendState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Rendering", "BlendState"));
	}

	template <typename T = uintptr_t> T& m_BlendState0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& m_BlendState1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_BlendState2() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_BlendState3() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_BlendState4() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_BlendState5() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_BlendState6() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_BlendState7() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = unsigned char> T& m_SeparateMRTBlendStates() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = unsigned char> T& m_AlphaToMask() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = int16_t> T& m_Padding() {
		return *(T*)((uintptr_t)this + 0x42);
	}

	template <typename T = uintptr_t> static T get_Default() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DB2584))(0);
	}
	template <typename T = void> T set_blendState0(uintptr_t value) {
		return ((T (*)(BlendState*, uintptr_t))(Il2CppBase() + 0x4DB2600))(this, value);
	}

};

}
