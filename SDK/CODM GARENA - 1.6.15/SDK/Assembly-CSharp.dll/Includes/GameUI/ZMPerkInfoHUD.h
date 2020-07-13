#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ZMPerkInfoHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ZMPerkInfoHUD"));
	}

	template <typename T = uintptr_t> T& PerkGrid() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PerkSpriteTemplate() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PerkSpriteList() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPerkInfoChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddPerk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPlayerSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(ZMPerkInfoHUD*))(Il2CppBase() + 0x2A5F968))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(ZMPerkInfoHUD*))(Il2CppBase() + 0x2A5F970))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ZMPerkInfoHUD*))(Il2CppBase() + 0x2A5F97C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ZMPerkInfoHUD*))(Il2CppBase() + 0x2A5FAD4))(this);
	}
	template <typename T = void> T OnPerkInfoChange(uintptr_t msg) {
		return ((T (*)(ZMPerkInfoHUD*, uintptr_t))(Il2CppBase() + 0x2A5FBA4))(this, msg);
	}
	template <typename T = uintptr_t> T GenerateTemplate() {
		return ((T (*)(ZMPerkInfoHUD*))(Il2CppBase() + 0x2A600B4))(this);
	}
	template <typename T = void> T OnAddPerk(uintptr_t msg) {
		return ((T (*)(ZMPerkInfoHUD*, uintptr_t))(Il2CppBase() + 0x2A60330))(this, msg);
	}
	template <typename T = void> T PlayPlayerSound(int32_t PerkID) {
		return ((T (*)(ZMPerkInfoHUD*, int32_t))(Il2CppBase() + 0x2A60550))(this, PerkID);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ZMPerkInfoHUD*))(Il2CppBase() + 0x2A6080C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ZMPerkInfoHUD*))(Il2CppBase() + 0x2A60814))(this);
	}

};

}
