#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonHead
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonHead"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Container() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_width() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_height() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHeadIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetHeadIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetHeadIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableFrameSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T SetGray() {
		return ((T (*)(UICommonHead*))(Il2CppBase() + 0x29D526C))(this);
	}
	template <typename T = void> T SetNormal() {
		return ((T (*)(UICommonHead*))(Il2CppBase() + 0x29D5458))(this);
	}
	template <typename T = void> T SetEffectActive(bool IsShow) {
		return ((T (*)(UICommonHead*, bool))(Il2CppBase() + 0x29D5644))(this, IsShow);
	}
	template <typename T = void> T PrepareComponents(bool bUpdateDepth) {
		return ((T (*)(UICommonHead*, bool))(Il2CppBase() + 0x29D59C4))(this, bUpdateDepth);
	}
	template <typename T = void> T SetHeadIcon(uintptr_t picInfo, bool bUpdateDepth, uint32_t vip_flag, bool show_Frame, uint64_t playerID, bool bShowEffect, uintptr_t CutPanel) {
		return ((T (*)(UICommonHead*, uintptr_t, bool, uint32_t, bool, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x29D6254))(this, picInfo, bUpdateDepth, vip_flag, show_Frame, playerID, bShowEffect, CutPanel);
	}
	template <typename T = void> T SetHeadIcon_1(int32_t picId, int32_t frameId, Il2CppString* picUrl, bool bUpdateDepth, uint64_t playerID, bool bShowEffect, uintptr_t CutPanel) {
		return ((T (*)(UICommonHead*, int32_t, int32_t, Il2CppString*, bool, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x29D6F60))(this, picId, frameId, picUrl, bUpdateDepth, playerID, bShowEffect, CutPanel);
	}
	template <typename T = void> T SetHeadIcon_2(int32_t iconId, int32_t frameId, bool bUpdateDepth, uint64_t playerID, bool bShowEffect, uintptr_t CutPanel) {
		return ((T (*)(UICommonHead*, int32_t, int32_t, bool, uint64_t, bool, uintptr_t))(Il2CppBase() + 0x29D7244))(this, iconId, frameId, bUpdateDepth, playerID, bShowEffect, CutPanel);
	}
	template <typename T = void> T DisableFrameSprite() {
		return ((T (*)(UICommonHead*))(Il2CppBase() + 0x29D7B9C))(this);
	}

};

}
