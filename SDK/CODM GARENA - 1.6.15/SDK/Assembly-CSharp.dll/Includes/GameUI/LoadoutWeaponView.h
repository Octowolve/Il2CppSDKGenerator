#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutWeaponView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutWeaponView"));
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
	template <typename T = uintptr_t> T& WeaponTypeTab() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& AttachTypeTab() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& MagnifyBtn() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& ContentWidget() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& AttachmentTipLabel() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& EquipObj() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& WeCommunityBtn() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& WeaponGroupGrid() {
		return *(T*)((uintptr_t)this + 0x15C);
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
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMenuSelectedStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAllTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowDecorateTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSkinTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOptic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFilterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponGroupGrid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSkinMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillSkinMenuCell() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T SetMenuSelectedStatus() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F6E490))(this);
	}
	template <typename T = void> T ResetAllTab() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F5DD28))(this);
	}
	template <typename T = void> T ShowWeaponTab() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F5E5E4))(this);
	}
	template <typename T = void> T ShowDecorateTab() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F5E984))(this);
	}
	template <typename T = void> T ShowSkinTab() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F5E7B4))(this);
	}
	template <typename T = void> T ShowOptic() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F5EB54))(this);
	}
	template <typename T = void> T ShowAttachment() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F5ED24))(this);
	}
	template <typename T = void> T ShowFilterView() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F5EEF4))(this);
	}
	template <typename T = void> T UpdateWeaponGroupGrid() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F56C2C))(this);
	}
	template <typename T = void> T SetSkinMenu(uint32_t itemId) {
		return ((T (*)(LoadoutWeaponView*, uint32_t))(Il2CppBase() + 0x1F5DAF8))(this, itemId);
	}
	template <typename T = void> T FillSkinMenuCell(uint32_t weaponId, uint32_t itemId, uintptr_t cell) {
		return ((T (*)(LoadoutWeaponView*, uint32_t, uint32_t, uintptr_t))(Il2CppBase() + 0x1F6EE84))(this, weaponId, itemId, cell);
	}
	template <typename T = bool> static T ShowFilterViewm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F6F1A0))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F6F2A0))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F6F3A0))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__3(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F6F4A0))(0, it);
	}
	template <typename T = bool> static T ShowFilterViewm__4(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1F6F5A0))(0, it);
	}
	template <typename T = void> T xLuaBaseProxy_SetMenuSelectedStatus() {
		return ((T (*)(LoadoutWeaponView*))(Il2CppBase() + 0x1F6F6A0))(this);
	}

};

}
