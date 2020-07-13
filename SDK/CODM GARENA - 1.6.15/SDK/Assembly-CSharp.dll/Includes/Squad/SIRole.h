#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SIRole
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SIRole"));
	}

	template <typename T = uintptr_t> T& m_Skill_A() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Skill_B() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_BrHat() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_BrBag() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_BrCloth() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_BrSuit() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_RoleConfig() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix2_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleSkinData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleSkinMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T get_Skill_A() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x39316C0))(this);
	}
	template <typename T = uintptr_t> T get_Skill_B() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x39316C8))(this);
	}
	template <typename T = uintptr_t> T get_BrHat() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x39316D0))(this);
	}
	template <typename T = uintptr_t> T get_BrBag() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x39316D8))(this);
	}
	template <typename T = uintptr_t> T get_BrCloth() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x39316E0))(this);
	}
	template <typename T = uintptr_t> T get_BrSuit() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x39316E8))(this);
	}
	template <typename T = void> T SetRoleData(uintptr_t data, uintptr_t skillFrom) {
		return ((T (*)(SIRole*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3924D10))(this, data, skillFrom);
	}
	template <typename T = void> T SetRoleSkinData(uintptr_t roleSkinData) {
		return ((T (*)(SIRole*, uintptr_t))(Il2CppBase() + 0x39316F0))(this, roleSkinData);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T GetRoleSkinMap() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x3931910))(this);
	}
	template <typename T = uintptr_t> T get_RoleConfig() {
		return ((T (*)(SIRole*))(Il2CppBase() + 0x3931A68))(this);
	}

};

}
