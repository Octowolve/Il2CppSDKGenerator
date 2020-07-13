#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LoadingGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LoadingGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(LoadingGameBuilder*))(Il2CppBase() + 0x249F57C))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(LoadingGameBuilder*))(Il2CppBase() + 0x249F584))(this);
	}

};

}
