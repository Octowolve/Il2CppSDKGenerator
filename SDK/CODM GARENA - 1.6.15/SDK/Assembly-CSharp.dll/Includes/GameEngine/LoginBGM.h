#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class LoginBGM
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "LoginBGM"));
	}

	template <typename T = Il2CppString*> T& AudioPath() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAllBankLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(LoginBGM*))(Il2CppBase() + 0x24AD048))(this);
	}
	template <typename T = void> T OnAllBankLoaded() {
		return ((T (*)(LoginBGM*))(Il2CppBase() + 0x24AD174))(this);
	}

};

}
