#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIItemTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIItemTemplate"));
	}

	template <typename T = uintptr_t> T& RotateTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& QualitySprite() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ItemSprite() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& NumberLabel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TagSelected() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& TagChecked() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TagLocked() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& TagGot() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TagFx() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& TagSuite() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& DescLabel() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& NameLabel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& BtnClick() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ChipFlagObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ChipView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& timeLimitTemplate() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& dullSprite() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& TipHolder() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mCallbackParam() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& MeshEffectRoot() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& ParticalEffectRoot() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& AttachPreFlagObj() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& AttachNextFlagObj() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& BtnDownloadAsset() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppVector3> static T& mCurrencyScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConflictData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSuiteData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetChecked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDull() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFxisShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExpireDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T SetItem(int32_t itemId, int32_t num, void* callback, uintptr_t callbackParam, uintptr_t tipSide, Il2CppString* descText, bool useSquareSpriteName, bool ignoreQuality, int32_t duration) {
		return ((T (*)(UIItemTemplate*, int32_t, int32_t, void*, uintptr_t, uintptr_t, Il2CppString*, bool, bool, int32_t))(Il2CppBase() + 0x3AF5BA4))(this, itemId, num, callback, callbackParam, tipSide, descText, useSquareSpriteName, ignoreQuality, duration);
	}
	template <typename T = void> T SetConflictData(uintptr_t itemType, int32_t duration, int32_t num) {
		return ((T (*)(UIItemTemplate*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3AF6B68))(this, itemType, duration, num);
	}
	template <typename T = void> T SetGot(bool bGot) {
		return ((T (*)(UIItemTemplate*, bool))(Il2CppBase() + 0x3AF73D8))(this, bGot);
	}
	template <typename T = void> T SetSuiteData(int32_t itemId) {
		return ((T (*)(UIItemTemplate*, int32_t))(Il2CppBase() + 0x3AF6F68))(this, itemId);
	}
	template <typename T = void> T SetSelected(bool bSelect) {
		return ((T (*)(UIItemTemplate*, bool))(Il2CppBase() + 0x3AF74FC))(this, bSelect);
	}
	template <typename T = void> T SetChecked(bool bCheck) {
		return ((T (*)(UIItemTemplate*, bool))(Il2CppBase() + 0x3AF7620))(this, bCheck);
	}
	template <typename T = void> T SetLocked(bool bLock) {
		return ((T (*)(UIItemTemplate*, bool))(Il2CppBase() + 0x3AF7744))(this, bLock);
	}
	template <typename T = void> T SetDull(bool bDull) {
		return ((T (*)(UIItemTemplate*, bool))(Il2CppBase() + 0x3AF7868))(this, bDull);
	}
	template <typename T = void> T OnItemClick() {
		return ((T (*)(UIItemTemplate*))(Il2CppBase() + 0x3AF79AC))(this);
	}
	template <typename T = void> T SetFxisShow(bool isShow) {
		return ((T (*)(UIItemTemplate*, bool))(Il2CppBase() + 0x3AF7AA4))(this, isShow);
	}
	template <typename T = void> T SetExpireDuration(int32_t duration) {
		return ((T (*)(UIItemTemplate*, int32_t))(Il2CppBase() + 0x3AF7BC8))(this, duration);
	}
	template <typename T = void> T SetCulling(uintptr_t sv) {
		return ((T (*)(UIItemTemplate*, uintptr_t))(Il2CppBase() + 0x3AF7D6C))(this, sv);
	}
	template <typename T = void> T ResetAttachment(uint32_t itemId, uintptr_t itemType) {
		return ((T (*)(UIItemTemplate*, uint32_t, uintptr_t))(Il2CppBase() + 0x3AF710C))(this, itemId, itemType);
	}
	template <typename T = void> T SetWeaponAssetState(int32_t itemID) {
		return ((T (*)(UIItemTemplate*, int32_t))(Il2CppBase() + 0x3AF684C))(this, itemID);
	}
	template <typename T = void> T SetWeaponAssetInfo(int32_t ItemID) {
		return ((T (*)(UIItemTemplate*, int32_t))(Il2CppBase() + 0x3AF838C))(this, ItemID);
	}

};

}
