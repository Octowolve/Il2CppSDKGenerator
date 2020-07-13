#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class LoginUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "LoginUtility"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenTeramsOfUseUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPrivacyPolicyUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTermsOfUseUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrivacyPolicyUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> static T OpenTeramsOfUseUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x2526F70))(0);
	}
	template <typename T = void> static T OpenPrivacyPolicyUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x2527268))(0);
	}
	template <typename T = Il2CppString*> static T GetTermsOfUseUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x25270C0))(0);
	}
	template <typename T = Il2CppString*> static T GetPrivacyPolicyUrl() {
		return ((T (*)(void *))(Il2CppBase() + 0x25273B8))(0);
	}

};

}
