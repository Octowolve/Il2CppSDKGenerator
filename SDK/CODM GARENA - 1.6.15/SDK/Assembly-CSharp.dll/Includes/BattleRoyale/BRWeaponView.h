#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRWeaponView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRWeaponView"));
	}

	template <typename T = uintptr_t> T& WeaponA() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WeaponB() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& FireModeTipsLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& FireModeChangeBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& FireModeRoot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LeftRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& RightRoot() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponItemBinding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUIFull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshWeaponCarriedAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAttachmentAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAttachmentEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAttachmentEffectCoroutine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseAttachmentEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshWeaponAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshWeaponCarriedAmmoCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RefreshEquipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRWeaponView*))(Il2CppBase() + 0x2661B94))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRWeaponView*))(Il2CppBase() + 0x2661B9C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRWeaponView*))(Il2CppBase() + 0x2661BA8))(this);
	}
	template <typename T = uintptr_t> T GetWeaponItemBinding(int32_t posId) {
		return ((T (*)(BRWeaponView*, int32_t))(Il2CppBase() + 0x2661BB8))(this, posId);
	}
	template <typename T = void> T SetData(int32_t posId, uintptr_t data) {
		return ((T (*)(BRWeaponView*, int32_t, uintptr_t))(Il2CppBase() + 0x265F9FC))(this, posId, data);
	}
	template <typename T = void> T RefreshUIFull(int32_t posId) {
		return ((T (*)(BRWeaponView*, int32_t))(Il2CppBase() + 0x2661CCC))(this, posId);
	}
	template <typename T = void> T RefreshWeaponAmmoCount(int32_t posId) {
		return ((T (*)(BRWeaponView*, int32_t))(Il2CppBase() + 0x2661EA0))(this, posId);
	}
	template <typename T = void> T RefreshWeaponCarriedAmmoCount(int32_t posId) {
		return ((T (*)(BRWeaponView*, int32_t))(Il2CppBase() + 0x26620F8))(this, posId);
	}
	template <typename T = void> T RefreshEquipped(int32_t posId) {
		return ((T (*)(BRWeaponView*, int32_t))(Il2CppBase() + 0x266232C))(this, posId);
	}
	template <typename T = void> T SetWeaponUI(uintptr_t binding, bool isActive) {
		return ((T (*)(BRWeaponView*, uintptr_t, bool))(Il2CppBase() + 0x2662540))(this, binding, isActive);
	}
	template <typename T = void> T ShowAttachmentAdd(int32_t itemId, int32_t weaponPosId) {
		return ((T (*)(BRWeaponView*, int32_t, int32_t))(Il2CppBase() + 0x2660000))(this, itemId, weaponPosId);
	}
	template <typename T = void> T OpenAttachmentEffect(int32_t posId, Il2CppString* attachmentSpriteName) {
		return ((T (*)(BRWeaponView*, int32_t, Il2CppString*))(Il2CppBase() + 0x2662624))(this, posId, attachmentSpriteName);
	}
	template <typename T = uintptr_t> T CloseAttachmentEffectCoroutine(int32_t posId) {
		return ((T (*)(BRWeaponView*, int32_t))(Il2CppBase() + 0x2662774))(this, posId);
	}
	template <typename T = void> T CloseAttachmentEffect(int32_t posId) {
		return ((T (*)(BRWeaponView*, int32_t))(Il2CppBase() + 0x266245C))(this, posId);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRWeaponView*))(Il2CppBase() + 0x2662870))(this);
	}
	template <typename T = void> T Tick(float _) {
		return ((T (*)(BRWeaponView*, float))(Il2CppBase() + 0x2662878))(this, _);
	}
	template <typename T = void> T RefreshWeaponAmmoCount_1() {
		return ((T (*)(BRWeaponView*))(Il2CppBase() + 0x2662924))(this);
	}
	template <typename T = void> T RefreshWeaponCarriedAmmoCount_1() {
		return ((T (*)(BRWeaponView*))(Il2CppBase() + 0x265FDD0))(this);
	}
	template <typename T = void> T RefreshEquipped_1() {
		return ((T (*)(BRWeaponView*))(Il2CppBase() + 0x265FC5C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRWeaponView*, float))(Il2CppBase() + 0x26629D8))(this, P0);
	}

};

}
