#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPvePistolView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPvePistolView"));
	}

	template <typename T = uintptr_t> T& LoadoutItemDetail() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& WeaponUpgroupBtn() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& TabGrid() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& WeaponFuncTab() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& WeaponColorTab() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& ColorTab() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& AttachTypeTab() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& WeaponShowBtn() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& WeaponShowedBtn() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& WeaponBtnTable() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& BuffTipBtn() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& MagnifyBtn() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& AttachmentTipLabel() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenuSelectedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSkinTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOptic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkinMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillSkinMenuCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T SetMenuSelectedStatus() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A96A50))(this);
	}
	template <typename T = void> T ResetAllTab() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A8F7EC))(this);
	}
	template <typename T = void> T ShowWeaponTab() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A8FF30))(this);
	}
	template <typename T = void> T ShowSkinTab() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A90080))(this);
	}
	template <typename T = void> T ShowOptic() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A901D0))(this);
	}
	template <typename T = void> T ShowAttachment() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A90320))(this);
	}
	template <typename T = void> T ShowFilterView() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A90470))(this);
	}
	template <typename T = void> T SetSkinMenu(uint32_t itemId) {
		return ((T (*)(LoadoutPvePistolView*, uint32_t))(Il2CppBase() + 0x1A8F6F4))(this, itemId);
	}
	template <typename T = void> T FillSkinMenuCell(uint32_t weaponId, uint32_t itemId, uintptr_t cell) {
		return ((T (*)(LoadoutPvePistolView*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1A97310))(this, weaponId, itemId, cell);
	}
	template <typename T = bool> static T ShowFilterViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A97630))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A97730))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A97830))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A97930))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_SetMenuSelectedStatus() {
		return ((T (*)(LoadoutPvePistolView*))(Il2CppBase() + 0x1A97A30))(this);
	}

};

}
