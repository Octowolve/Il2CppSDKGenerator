#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.NoLogin {

class DSTestData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.NoLogin", "DSTestData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& MainWeapons() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& WeaponNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RoleIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RoleNameList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uint32_t> static T& mainWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uint64_t> static T& roleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& TestMapNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMainWeaponID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uint32_t> static T get_MainWeaponID() {
		return ((T (*)(void *))(Il2CppBase() + 0x19DAFC0))(0);
	}
	template <typename T = void> static T SetMainWeaponID(uint32_t weaponID) {
		return ((T (*)(void *, uint32_t))(Il2CppBase() + 0x19DB070))(0, weaponID);
	}
	template <typename T = uint64_t> static T get_RoleID() {
		return ((T (*)(void *))(Il2CppBase() + 0x19DB234))(0);
	}
	template <typename T = void> static T SetRoleID(uint64_t id) {
		return ((T (*)(void *, uint64_t))(Il2CppBase() + 0x19DB2E4))(0, id);
	}

};

}
