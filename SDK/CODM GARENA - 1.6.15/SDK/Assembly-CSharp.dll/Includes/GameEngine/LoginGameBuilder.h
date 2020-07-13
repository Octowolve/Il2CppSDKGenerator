#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LoginGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LoginGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_m_GameModeType() {
		return ((T (*)(LoginGameBuilder*))(Il2CppBase() + 0x24AD2B0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(LoginGameBuilder*))(Il2CppBase() + 0x24AD2B8))(this);
	}

};

}
