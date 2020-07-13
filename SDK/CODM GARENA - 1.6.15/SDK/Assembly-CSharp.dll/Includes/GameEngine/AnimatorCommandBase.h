#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimatorCommandBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimatorCommandBase"));
	}

	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Run() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRepeatitive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T Run(float deltaTime) {
		return ((T (*)(AnimatorCommandBase*, float))(Il2CppBase() + 0x2B584F8))(this, deltaTime);
	}
	template <typename T = bool> T CheckRepeatitive(Il2CppArray<uintptr_t>* args) {
		return ((T (*)(AnimatorCommandBase*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2B585A4))(this, args);
	}

};

}
