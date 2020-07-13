#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponPromotionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponPromotionInfo"));
	}

	template <typename T = uintptr_t> T& mGameMode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = void*> T& WeaponAttachmentUnlockMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& WeaponFireEffectUnlockList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& BulletTrackEffectUnlockList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& WeaponKillEffectUnlockList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& WeaponSkinUnlockMap() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<int32_t>*> T& WeaponBrocastList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& AllItemUnlockList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessWeaponLevelConfigImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponAttachmentUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentWeaponFireEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentBulletTrackEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentWeaponKillEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsWeaponSkinUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentWeaponBrocast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(WeaponPromotionInfo*))(Il2CppBase() + 0x3A6EC7C))(this);
	}
	template <typename T = void> T ProcessWeaponLevelConfigImpl(int32_t type, int32_t value) {
		return ((T (*)(WeaponPromotionInfo*, int32_t, int32_t))(Il2CppBase() + 0x3A6EE38))(this, type, value);
	}
	template <typename T = bool> T IsWeaponAttachmentUnlock(int32_t attachment) {
		return ((T (*)(WeaponPromotionInfo*, int32_t))(Il2CppBase() + 0x3A6F0E4))(this, attachment);
	}
	template <typename T = int32_t> T GetCurrentWeaponFireEffect() {
		return ((T (*)(WeaponPromotionInfo*))(Il2CppBase() + 0x3A6F1C4))(this);
	}
	template <typename T = int32_t> T GetCurrentBulletTrackEffect() {
		return ((T (*)(WeaponPromotionInfo*))(Il2CppBase() + 0x3A6F2DC))(this);
	}
	template <typename T = int32_t> T GetCurrentWeaponKillEffect() {
		return ((T (*)(WeaponPromotionInfo*))(Il2CppBase() + 0x3A6F3F4))(this);
	}
	template <typename T = bool> T IsWeaponSkinUnlock(uint32_t skinId) {
		return ((T (*)(WeaponPromotionInfo*, uint32_t))(Il2CppBase() + 0x3A6F50C))(this, skinId);
	}
	template <typename T = int32_t> T GetCurrentWeaponBrocast() {
		return ((T (*)(WeaponPromotionInfo*))(Il2CppBase() + 0x3A6F5EC))(this);
	}

};

}
