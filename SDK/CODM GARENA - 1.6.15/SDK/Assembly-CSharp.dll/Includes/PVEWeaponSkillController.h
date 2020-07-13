#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVEWeaponSkillController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVEWeaponSkillController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSkillUseType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeSkillActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeProjectileCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406D1F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406D020))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406D298))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406D4B8))(this);
	}
	template <typename T = void> T ChangeSkillActorID(uintptr_t msg) {
		return ((T (*)(PVEWeaponSkillController*, uintptr_t))(Il2CppBase() + 0x406D588))(this, msg);
	}
	template <typename T = void> T ChangeProjectileCount(uintptr_t msg) {
		return ((T (*)(PVEWeaponSkillController*, uintptr_t))(Il2CppBase() + 0x406DB34))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406DDAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406DDB4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406DDBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PVEWeaponSkillController*))(Il2CppBase() + 0x406DDC4))(this);
	}

};

}
