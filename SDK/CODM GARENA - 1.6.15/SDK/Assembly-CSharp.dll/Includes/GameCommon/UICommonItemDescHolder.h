#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class UICommonItemDescHolder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "UICommonItemDescHolder"));
	}

	template <typename T = uintptr_t> T& mDescType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mItemID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& mText() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mAutoSide() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& mSide() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& mWidthPadding() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& mHeightPadding() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mTips() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& defaultAssetID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> static T& kArrowPadding() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragStartClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(UICommonItemDescHolder*, int32_t))(Il2CppBase() + 0x49F4AA0))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(UICommonItemDescHolder*))(Il2CppBase() + 0x49F4AA8))(this);
	}
	template <typename T = void> T set_Text(Il2CppString* value) {
		return ((T (*)(UICommonItemDescHolder*, Il2CppString*))(Il2CppBase() + 0x49F4AB0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Text() {
		return ((T (*)(UICommonItemDescHolder*))(Il2CppBase() + 0x49F4AB8))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(UICommonItemDescHolder*))(Il2CppBase() + 0x49F4AC0))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(UICommonItemDescHolder*))(Il2CppBase() + 0x49F4CEC))(this);
	}
	template <typename T = void> T OnPressClick(uintptr_t obj, bool isPress) {
		return ((T (*)(UICommonItemDescHolder*, uintptr_t, bool))(Il2CppBase() + 0x49F4F18))(this, obj, isPress);
	}
	template <typename T = void> T OnDragStartClick(uintptr_t obj) {
		return ((T (*)(UICommonItemDescHolder*, uintptr_t))(Il2CppBase() + 0x49F5848))(this, obj);
	}
	template <typename T = void> T SetSide(uintptr_t side) {
		return ((T (*)(UICommonItemDescHolder*, uintptr_t))(Il2CppBase() + 0x49F5904))(this, side);
	}
	template <typename T = void> T SetType(uintptr_t descType) {
		return ((T (*)(UICommonItemDescHolder*, uintptr_t))(Il2CppBase() + 0x49F63A8))(this, descType);
	}
	template <typename T = void> T RefreshPosition() {
		return ((T (*)(UICommonItemDescHolder*))(Il2CppBase() + 0x49F59B4))(this);
	}
	template <typename T = void> T AutoSide() {
		return ((T (*)(UICommonItemDescHolder*))(Il2CppBase() + 0x49F6450))(this);
	}
	template <typename T = uintptr_t> T GetEAssetID() {
		return ((T (*)(UICommonItemDescHolder*))(Il2CppBase() + 0x49F6618))(this);
	}
	template <typename T = void> T Show(bool show) {
		return ((T (*)(UICommonItemDescHolder*, bool))(Il2CppBase() + 0x49F4FF0))(this, show);
	}

};

}
