#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AnimatorClipInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AnimatorClipInfo"));
	}

	template <typename T = int32_t> T& m_ClipInstanceID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& m_Weight() {
		return *(T*)((uintptr_t)this + 0x4);
	}

	template <typename T = uintptr_t> T get_clip() {
		return ((T (*)(AnimatorClipInfo*))(Il2CppBase() + 0x469754C))(this);
	}
	template <typename T = uintptr_t> static T ClipInstanceToScriptingObject(int32_t instanceID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46974B4))(0, instanceID);
	}

};

}
