#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillComponentExtraAmmo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillComponent_ExtraAmmo"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_AddAmmo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T InternalNudge() {
		return ((T (*)(SkillComponentExtraAmmo*))(Il2CppBase() + 0x2E1310C))(this);
	}
	template <typename T = bool> T CanNudge() {
		return ((T (*)(SkillComponentExtraAmmo*))(Il2CppBase() + 0x2E131B4))(this);
	}
	template <typename T = void> T UnNudge() {
		return ((T (*)(SkillComponentExtraAmmo*))(Il2CppBase() + 0x2E13254))(this);
	}
	template <typename T = void> T AddAmmo() {
		return ((T (*)(SkillComponentExtraAmmo*))(Il2CppBase() + 0x2E132FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InternalNudge() {
		return ((T (*)(SkillComponentExtraAmmo*))(Il2CppBase() + 0x2E13394))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanNudge() {
		return ((T (*)(SkillComponentExtraAmmo*))(Il2CppBase() + 0x2E1339C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnNudge() {
		return ((T (*)(SkillComponentExtraAmmo*))(Il2CppBase() + 0x2E133A4))(this);
	}

};

}
