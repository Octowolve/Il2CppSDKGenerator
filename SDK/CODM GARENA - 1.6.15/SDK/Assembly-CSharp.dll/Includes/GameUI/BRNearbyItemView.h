#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRNearbyItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRNearbyItemView"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ItemColor() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ItemSign() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& SubScript() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& DisableSprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& SelectFrame() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& NormalFrame() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& HighLightBG() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& DefaultBG() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& DragDropObject() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& VestHP() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& VestHPPercent() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& OnIconClickCallback() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppVector3> T& DragObjectDefaultLocation() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& HasSaveDefaultLocation() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& m_IsDragOut() {
		return *(T*)((uintptr_t)this + 0xD1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDragObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconDragOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVestInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemSigned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowItemSignHighlight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA5C94))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA47B4))(this);
	}
	template <typename T = void> T ResetDragObject() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2D9F158))(this);
	}
	template <typename T = void> T SetSelected(bool selected) {
		return ((T (*)(BRNearbyItemView*, bool))(Il2CppBase() + 0x2D9DD54))(this, selected);
	}
	template <typename T = void> T EnableDrop(bool enable) {
		return ((T (*)(BRNearbyItemView*, bool))(Il2CppBase() + 0x2D9DED0))(this, enable);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA5D38))(this);
	}
	template <typename T = void> T OnIconClick() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA5DE8))(this);
	}
	template <typename T = void> T OnIconDragOut() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA5EAC))(this);
	}
	template <typename T = void> T SetData(uintptr_t data) {
		return ((T (*)(BRNearbyItemView*, uintptr_t))(Il2CppBase() + 0x2D9E190))(this, data);
	}
	template <typename T = void> T SetVestInfo() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA6590))(this);
	}
	template <typename T = void> T SetIcon() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA5F50))(this);
	}
	template <typename T = void> T SetHide(int32_t index) {
		return ((T (*)(BRNearbyItemView*, int32_t))(Il2CppBase() + 0x2D9E858))(this, index);
	}
	template <typename T = bool> T IsItemSigned(int32_t actorId) {
		return ((T (*)(BRNearbyItemView*, int32_t))(Il2CppBase() + 0x2DA6398))(this, actorId);
	}
	template <typename T = void> T ShowItemSignHighlight(bool isShow) {
		return ((T (*)(BRNearbyItemView*, bool))(Il2CppBase() + 0x2DA649C))(this, isShow);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRNearbyItemView*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2DA6910))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRNearbyItemView*, uintptr_t))(Il2CppBase() + 0x2DA6A84))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRNearbyItemView*))(Il2CppBase() + 0x2DA6BE4))(this);
	}

};

}
