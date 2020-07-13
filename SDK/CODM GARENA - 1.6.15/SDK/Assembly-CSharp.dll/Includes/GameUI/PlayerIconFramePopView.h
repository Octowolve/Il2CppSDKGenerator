#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PlayerIconFramePopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PlayerIconFramePopView"));
	}

	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& scrollBar() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& NewFrameRedBox_Tri() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NewFrameRedTag() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& CallingCardRedTag() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Icon() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& Frame() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& Desc() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& BtnGrid() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ShowBtn() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ResetBtn() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& GoBtn() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& UnShowBtn() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& IconTypeBtn() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& IconTypeSelect() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& FrameTypeBtn() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& FrameTypeSelect() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& CallingCardTypeBtn() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& CallingCardTypeSelect() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& ShowBtnState() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& UnShowBtnState() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& ResetBtnState() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& CardShowBtnState() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& TimeLeftLabel() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& IsFrameClick() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& IsCallingClick() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = uintptr_t> T& avatarRoot() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& callingCardRoot() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& callingCardGrid() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& callingCardItem() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& CallingCardEquipBtn() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& callingcardScrollView() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRedPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowResetBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallingCardBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTimeLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetIconFrameTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T SetRedPoint() {
		return ((T (*)(PlayerIconFramePopView*))(Il2CppBase() + 0x3A94F98))(this);
	}
	template <typename T = void> T RefreshType(uintptr_t type) {
		return ((T (*)(PlayerIconFramePopView*, uintptr_t))(Il2CppBase() + 0x3A95114))(this, type);
	}
	template <typename T = void> T SetShowingData(uintptr_t data) {
		return ((T (*)(PlayerIconFramePopView*, uintptr_t))(Il2CppBase() + 0x3A95760))(this, data);
	}
	template <typename T = bool> T ShowResetBtn() {
		return ((T (*)(PlayerIconFramePopView*))(Il2CppBase() + 0x3A9635C))(this);
	}
	template <typename T = void> T SetCallingCardBtnState(bool canBeSelected) {
		return ((T (*)(PlayerIconFramePopView*, bool))(Il2CppBase() + 0x3A96588))(this, canBeSelected);
	}
	template <typename T = Il2CppString*> T GetTimeLeft(int32_t timeLeft) {
		return ((T (*)(PlayerIconFramePopView*, int32_t))(Il2CppBase() + 0x3A966A8))(this, timeLeft);
	}
	template <typename T = void> T SetIconFrameTime(uintptr_t mIconData) {
		return ((T (*)(PlayerIconFramePopView*, uintptr_t))(Il2CppBase() + 0x3A960E4))(this, mIconData);
	}

};

}
