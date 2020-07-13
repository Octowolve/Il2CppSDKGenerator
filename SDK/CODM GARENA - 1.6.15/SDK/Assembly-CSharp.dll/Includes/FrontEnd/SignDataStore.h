#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignDataStore"));
	}

	template <typename T = uintptr_t> T& NewFishSign() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NormalSign() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_IsNewFish() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitSignData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHasSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_IsNewFish() {
		return ((T (*)(SignDataStore*))(Il2CppBase() + 0x385CAA0))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(SignDataStore*))(Il2CppBase() + 0x385CAA8))(this);
	}
	template <typename T = void> T InitSignData(uintptr_t data) {
		return ((T (*)(SignDataStore*, uintptr_t))(Il2CppBase() + 0x385CB50))(this, data);
	}
	template <typename T = bool> T IsHasSign(bool newPlayerFlag) {
		return ((T (*)(SignDataStore*, bool))(Il2CppBase() + 0x385CCAC))(this, newPlayerFlag);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(SignDataStore*))(Il2CppBase() + 0x385CD74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(SignDataStore*))(Il2CppBase() + 0x385D000))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(SignDataStore*))(Il2CppBase() + 0x385D008))(this);
	}

};

}
