#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class FtueTool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "FtueTool"));
	}

	template <typename T = uintptr_t> static T& BeginType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& EndType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> static T& PanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompletelySeeInScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustWidgetDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipAllTutorials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTutorialStepEnabledAndNotFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAllTutorialFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTriggeredTutorialFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsForcedTutorialFinished() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SignOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SignClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaskPicOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaskPicClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLevel2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = bool> static T CompletelySeeInScrollView(uintptr_t scrollView) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B02E24))(0, scrollView);
	}
	template <typename T = void> static T AdjustWidgetDepth(uintptr_t parentObj, int32_t adjustDepth) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x4B03190))(0, parentObj, adjustDepth);
	}
	template <typename T = void> static T SkipAllTutorials(uintptr_t reason) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B033A0))(0, reason);
	}
	template <typename T = bool> static T IsTutorialStepEnabledAndNotFinished(uintptr_t tutorialType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4AFAE0C))(0, tutorialType);
	}
	template <typename T = bool> static T IsAllTutorialFinished() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B03B3C))(0);
	}
	template <typename T = bool> static T IsTriggeredTutorialFinished() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B03DC0))(0);
	}
	template <typename T = bool> static T IsForcedTutorialFinished() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B03F98))(0);
	}
	template <typename T = void> static T SignOpen(uintptr_t type, uintptr_t eventType, uintptr_t trans, Il2CppVector3 pos, uintptr_t fackCallback, uintptr_t unforceTouchCallback, uintptr_t navData) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppVector3, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B04160))(0, type, eventType, trans, pos, fackCallback, unforceTouchCallback, navData);
	}
	template <typename T = void> static T SignClose() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B037CC))(0);
	}
	template <typename T = void> static T MaskPicOpen() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B045C4))(0);
	}
	template <typename T = void> static T MaskPicClose() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B03984))(0);
	}
	template <typename T = bool> static T IsLevel2() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B0477C))(0);
	}
	template <typename T = bool> static T IsLeft(uintptr_t referWidget, uintptr_t showWidget) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B048D4))(0, referWidget, showWidget);
	}

};

}
