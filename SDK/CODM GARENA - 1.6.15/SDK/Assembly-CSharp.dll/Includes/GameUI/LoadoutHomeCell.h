#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutHomeCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutHomeCell"));
	}

	template <typename T = uintptr_t> T& ClickBtn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& NoneStateRoot() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& NormalStateRoot() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NormalIconSprite() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& NormalQualitySprite() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& NormalNameLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& RoleQualitySprite() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& NormalSuiteIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ReplaceLabel() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& NoneTips() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TipHolder() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& TagTimeObj() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TagTimeLabel() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& TagLockObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& TagLockLabel() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& TagDisable() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& TagReddot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TagSuiteActive() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& mCacheCallback() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mCacheParam() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& mIsAttachment() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mLoadoutPos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& mAttachmentType() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mLoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mAttachmentBelongto() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& bMainWeapon() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mCacheSquadMemberData() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& TIP_BORDER() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& unlockLevel() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& bForceUnLock() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& WEAPON_TITLE_LOC() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppString*> T& MAIN_WEAPON_TITLE_LOC() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppString*> T& VICE_WEAPON_TITLE_LOC() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAttachmentTypeToMenuType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponViewTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickNoAttachBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitForLoadoutPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitForAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSuiteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanEquip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUnlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockAvatarType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockLoadoutIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCannotEquipTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLockTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnlockLevelByPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DirectSetViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponDataByID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A40D68))(this);
	}
	template <typename T = uintptr_t> T ChangeAttachmentTypeToMenuType(uintptr_t aType) {
		return ((T (*)(LoadoutHomeCell*, uintptr_t))(Il2CppBase() + 0x1A40E48))(this, aType);
	}
	template <typename T = Il2CppString*> T GetWeaponViewTitle(uintptr_t squadType, uintptr_t posType) {
		return ((T (*)(LoadoutHomeCell*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A40F00))(this, squadType, posType);
	}
	template <typename T = void> T OnClickBtn() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A40FE4))(this);
	}
	template <typename T = void> T OnClickNoAttachBtn() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A426E8))(this);
	}
	template <typename T = void> T InitForLoadoutPos(uintptr_t loadoutData, uintptr_t pos, uintptr_t item, uintptr_t parentItem, void* callback, uintptr_t param, uintptr_t descSide, bool bUseSmall) {
		return ((T (*)(LoadoutHomeCell*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, void*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A42A90))(this, loadoutData, pos, item, parentItem, callback, param, descSide, bUseSmall);
	}
	template <typename T = void> T InitForAttachment(uintptr_t loadoutData, uintptr_t pos, uintptr_t attach, uintptr_t item, uintptr_t parentItem, bool bMain, void* callback, uintptr_t param, uintptr_t descSide, bool bUseSmall) {
		return ((T (*)(LoadoutHomeCell*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, bool, void*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A43548))(this, loadoutData, pos, attach, item, parentItem, bMain, callback, param, descSide, bUseSmall);
	}
	template <typename T = void> T Init(uintptr_t item, void* callback, uintptr_t param, uintptr_t descSide, bool bUseSmallSprite) {
		return ((T (*)(LoadoutHomeCell*, uintptr_t, void*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x1A42B90))(this, item, callback, param, descSide, bUseSmallSprite);
	}
	template <typename T = void> T SetSuiteInfo(uint32_t itemId, Il2CppString* itemName) {
		return ((T (*)(LoadoutHomeCell*, uint32_t, Il2CppString*))(Il2CppBase() + 0x1A43764))(this, itemId, itemName);
	}
	template <typename T = void> T SetLockState(bool bLock) {
		return ((T (*)(LoadoutHomeCell*, bool))(Il2CppBase() + 0x1A43C8C))(this, bLock);
	}
	template <typename T = void> T SetDisable(bool disable) {
		return ((T (*)(LoadoutHomeCell*, bool))(Il2CppBase() + 0x1A43B98))(this, disable);
	}
	template <typename T = bool> T CheckCanEquip() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A43DE0))(this);
	}
	template <typename T = bool> T CheckUnlock() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A43668))(this);
	}
	template <typename T = uintptr_t> T GetUnlockAvatarType() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A44188))(this);
	}
	template <typename T = int32_t> T GetUnlockLoadoutIdx() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A4263C))(this);
	}
	template <typename T = Il2CppString*> T GetCannotEquipTips() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A4297C))(this);
	}
	template <typename T = Il2CppString*> T GetLockTips() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A43F70))(this);
	}
	template <typename T = int32_t> T GetUnlockLevelByPos(uintptr_t pos) {
		return ((T (*)(LoadoutHomeCell*, uintptr_t))(Il2CppBase() + 0x1A44098))(this, pos);
	}
	template <typename T = void> T ProcessReddot() {
		return ((T (*)(LoadoutHomeCell*))(Il2CppBase() + 0x1A42534))(this);
	}
	template <typename T = void> T DirectSetViewData(bool bRet, Il2CppString* itemName, Il2CppString* qualitySpriteName, Il2CppString* iconspriteName) {
		return ((T (*)(LoadoutHomeCell*, bool, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x1A44234))(this, bRet, itemName, qualitySpriteName, iconspriteName);
	}
	template <typename T = void> T SetWeaponDataByID(int32_t nItemId, bool bWeapon, bool bSmallSprite, bool bUnLock) {
		return ((T (*)(LoadoutHomeCell*, int32_t, bool, bool, bool))(Il2CppBase() + 0x1A443A0))(this, nItemId, bWeapon, bSmallSprite, bUnLock);
	}
	template <typename T = bool> T GetItemInfo(int32_t nItemId, bool bWeapon, uintptr_t itemName, uintptr_t qualitySprite, uintptr_t iconSprite, bool bSmallSprite, bool bRole) {
		return ((T (*)(LoadoutHomeCell*, int32_t, bool, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0x1A44590))(this, nItemId, bWeapon, itemName, qualitySprite, iconSprite, bSmallSprite, bRole);
	}

};

}
