#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class PlayableOutput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "PlayableOutput"));
	}

	template <typename T = uintptr_t> T& m_Handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_Version() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> static T InternalGetSourcePlayable(uintptr_t output) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DAE368))(0, output);
	}
	template <typename T = void> static T INTERNAL_CALL_InternalGetSourcePlayable(uintptr_t output, uintptr_t* value) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DB22EC))(0, output, value);
	}
	template <typename T = void> static T InternalSetSourcePlayableWithoutRebind(uintptr_t output, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DAE3FC))(0, output, target);
	}
	template <typename T = void> static T INTERNAL_CALL_InternalSetSourcePlayableWithoutRebind(uintptr_t output, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DB238C))(0, output, target);
	}

};

}
