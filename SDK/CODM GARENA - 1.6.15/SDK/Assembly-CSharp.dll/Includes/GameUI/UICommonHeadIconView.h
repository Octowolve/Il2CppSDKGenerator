#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonHeadIconView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonHeadIconView"));
	}

	template <typename T = uintptr_t> T& Avatar() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Frame() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AvatarWidget() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& FrameWidget() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& avatarURL() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& frameSpriteName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& QQIcon_off_bg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& QQIcon_off_fg() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& QRIcon_off_bg() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& QRIcon_off_fg() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& QRQQIcon_off_bg() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& QRQQIcon_off_fg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& WeChatIcon_off_bg() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& WeChatIcon_off_fg() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& QQIcon_on() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& QRIcon_on() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& QRQQIcon_on() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& WeChatIcon_on() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& FrameOffsetPerSize() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& FrameEffect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& FrameId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mCutPanel() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& mbShowEffEct() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& mbShowFrame() {
		return *(T*)((uintptr_t)this + 0x65);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetHead() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlaformIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ShowPlaformIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaformScale_Frame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPlaformScale_UnFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableFrameSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantiateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectsActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T SetHead(int32_t avatarId, int32_t frameId, int32_t width, int32_t height, uint64_t playerID, bool bShowEffect, uintptr_t CutPanel) {
		return ((T (*)(UICommonHeadIconView*, int32_t, int32_t, int32_t, int32_t, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x29D7420))(this, avatarId, frameId, width, height, playerID, bShowEffect, CutPanel);
	}
	template <typename T = void> T SetHead_1(uintptr_t picInfo, int32_t width, int32_t height, uint32_t vip_flat, bool show_Frame, uint64_t PlayerID, bool bShowEffect, uintptr_t CutPanel) {
		return ((T (*)(UICommonHeadIconView*, uintptr_t, int32_t, int32_t, uint32_t, bool, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x29D6444))(this, picInfo, width, height, vip_flat, show_Frame, PlayerID, bShowEffect, CutPanel);
	}
	template <typename T = void> T SetGray() {
		return ((T (*)(UICommonHeadIconView*))(Il2CppBase() + 0x29D537C))(this);
	}
	template <typename T = void> T SetNormal() {
		return ((T (*)(UICommonHeadIconView*))(Il2CppBase() + 0x29D5568))(this);
	}
	template <typename T = void> T UpdateDepth(int32_t parentDepth) {
		return ((T (*)(UICommonHeadIconView*, int32_t))(Il2CppBase() + 0x29D5FEC))(this, parentDepth);
	}
	template <typename T = void> T ShowPlaformIcon(uint32_t vip_Flat) {
		return ((T (*)(UICommonHeadIconView*, uint32_t))(Il2CppBase() + 0x29D8924))(this, vip_Flat);
	}
	template <typename T = void> T ShowPlaformIcon_1() {
		return ((T (*)(UICommonHeadIconView*))(Il2CppBase() + 0x29D932C))(this);
	}
	template <typename T = void> T SetPlaformScale_Frame(uintptr_t sprBg, uintptr_t sprFg, int32_t width_Scale, int32_t height_Scale) {
		return ((T (*)(UICommonHeadIconView*, uintptr_t, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x29D8094))(this, sprBg, sprFg, width_Scale, height_Scale);
	}
	template <typename T = void> T SetPlaformScale_UnFrame(uintptr_t spr, int32_t width_Scale, int32_t height_Scale) {
		return ((T (*)(UICommonHeadIconView*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x29D7E74))(this, spr, width_Scale, height_Scale);
	}
	template <typename T = void> T DisableFrameSprite() {
		return ((T (*)(UICommonHeadIconView*))(Il2CppBase() + 0x29D7CAC))(this);
	}
	template <typename T = void> T InstantiateEffect(int32_t frameID, uintptr_t CutPanel, bool bShowFrame, bool bShowEffEct) {
		return ((T (*)(UICommonHeadIconView*, int32_t, uintptr_t, bool, bool))(Il2CppBase() + 0x29D8404))(this, frameID, CutPanel, bShowFrame, bShowEffEct);
	}
	template <typename T = void> T SetEffectsActive(bool bShow) {
		return ((T (*)(UICommonHeadIconView*, bool))(Il2CppBase() + 0x29D5760))(this, bShow);
	}

};

}
