#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.Experimental.Director {

class AnimationPlayableOutput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine.Experimental.Director", "AnimationPlayableOutput"));
	}

	template <typename T = uintptr_t> T& m_Output() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = uintptr_t> static T get_Null() {
		return ((T (*)(void *))(Il2CppBase() + 0x4DAE210))(0);
	}
	template <typename T = uintptr_t> T get_sourcePlayable() {
		return ((T (*)(AnimationPlayableOutput*))(Il2CppBase() + 0x4DAE3A4))(this);
	}
	template <typename T = void> T SetSourcePlayableWithoutRebind(uintptr_t playableHandle) {
		return ((T (*)(AnimationPlayableOutput*, uintptr_t))(Il2CppBase() + 0x4DAE400))(this, playableHandle);
	}

};

}
