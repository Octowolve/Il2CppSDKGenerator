#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WorkShop {

class ItemWorkShopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WorkShop", "ItemWorkShopView"));
	}

	template <typename T = uintptr_t> T& WidgetRoot() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& m_BgStr() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& m_IconStr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& SpriteBg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& textureBg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SpriteIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TextureIcon() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& LabelModeName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& LabelModeDesc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& GridBuff() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SpriteWeaponBuff() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& SpritePlayerBuff() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& WidgetDetail() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& BtnDetail() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& BtnEnter() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector3> T& m_ModeNameLocalPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppVector3> T& m_GridBuffLocalPos() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& m_BuffItemWidth() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& UI_DIF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_CurrentRefreshTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> static T& MAX_REFRESH_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModeDetailType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnEnterClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToMp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToZombie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnModeDeatilClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0CFE8))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0D1C4))(this);
	}
	template <typename T = void> T SetData(uintptr_t data, bool bMainPush) {
		return ((T (*)(ItemWorkShopView*, uintptr_t, bool))(Il2CppBase() + 0xC0D4D8))(this, data, bMainPush);
	}
	template <typename T = void> T SetBG(Il2CppString* cdnPath, Il2CppString* spritePath) {
		return ((T (*)(ItemWorkShopView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xC0DD1C))(this, cdnPath, spritePath);
	}
	template <typename T = void> T SetIcon(Il2CppString* cdnPath, Il2CppString* spritePath) {
		return ((T (*)(ItemWorkShopView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xC0E210))(this, cdnPath, spritePath);
	}
	template <typename T = void> T SetInfo(Il2CppString* nameStr, Il2CppString* descStr) {
		return ((T (*)(ItemWorkShopView*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xC0E704))(this, nameStr, descStr);
	}
	template <typename T = void> T SetBuff(bool bWeaponBuff, bool bPlayerBuff) {
		return ((T (*)(ItemWorkShopView*, bool, bool))(Il2CppBase() + 0xC0E9BC))(this, bWeaponBuff, bPlayerBuff);
	}
	template <typename T = void> T SetModeDetailType(uint32_t modeDetailType, uint32_t mpModeDetailType, Il2CppString* modeDetailDesc, Il2CppString* modeDeatailSpriteName, Il2CppString* modeDetailCdnPath) {
		return ((T (*)(ItemWorkShopView*, uint32_t, uint32_t, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xC0EB58))(this, modeDetailType, mpModeDetailType, modeDetailDesc, modeDeatailSpriteName, modeDetailCdnPath);
	}
	template <typename T = void> T OnBtnEnterClick() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0F0C8))(this);
	}
	template <typename T = void> T SwitchToMp() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0F30C))(this);
	}
	template <typename T = void> T SwitchToZombie() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0F828))(this);
	}
	template <typename T = void> T SwitchToBr() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0F598))(this);
	}
	template <typename T = void> T OnBtnModeDeatilClick() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0F9E4))(this);
	}
	template <typename T = void> T RefreshPos() {
		return ((T (*)(ItemWorkShopView*))(Il2CppBase() + 0xC0D278))(this);
	}

};

}
