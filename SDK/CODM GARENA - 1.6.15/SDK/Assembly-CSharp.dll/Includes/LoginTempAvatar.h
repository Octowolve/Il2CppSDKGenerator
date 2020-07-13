#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoginTempAvatar
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoginTempAvatar"));
	}

	template <typename T = uintptr_t> T& UICamera() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& LoginAnimSound() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_Played() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TransToLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartRelogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(LoginTempAvatar*))(Il2CppBase() + 0x434FE38))(this);
	}
	template <typename T = void> T TransToLogin() {
		return ((T (*)(LoginTempAvatar*))(Il2CppBase() + 0x434FEDC))(this);
	}
	template <typename T = void> T StartRelogin() {
		return ((T (*)(LoginTempAvatar*))(Il2CppBase() + 0x4350168))(this);
	}
	template <typename T = bool> T get_HasEverLogin() {
		return ((T (*)(LoginTempAvatar*))(Il2CppBase() + 0x4350220))(this);
	}

};

}
