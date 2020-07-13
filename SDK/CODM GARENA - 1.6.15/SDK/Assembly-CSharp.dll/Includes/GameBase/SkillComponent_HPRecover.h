#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillComponentHPRecover
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillComponent_HPRecover"));
	}

	template <typename T = float> T& HPRecoveryAmountPerSeconds() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MyCoroutine() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverHP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InternalNudge() {
		return ((T (*)(SkillComponentHPRecover*))(Il2CppBase() + 0x2E134E8))(this);
	}
	template <typename T = bool> T CanNudge() {
		return ((T (*)(SkillComponentHPRecover*))(Il2CppBase() + 0x2E13774))(this);
	}
	template <typename T = void> T UnNudge() {
		return ((T (*)(SkillComponentHPRecover*))(Il2CppBase() + 0x2E138F0))(this);
	}
	template <typename T = uintptr_t> T RecoverHP() {
		return ((T (*)(SkillComponentHPRecover*))(Il2CppBase() + 0x2E13694))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InternalNudge() {
		return ((T (*)(SkillComponentHPRecover*))(Il2CppBase() + 0x2E13A98))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanNudge() {
		return ((T (*)(SkillComponentHPRecover*))(Il2CppBase() + 0x2E13AA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnNudge() {
		return ((T (*)(SkillComponentHPRecover*))(Il2CppBase() + 0x2E13AA8))(this);
	}

};

}
