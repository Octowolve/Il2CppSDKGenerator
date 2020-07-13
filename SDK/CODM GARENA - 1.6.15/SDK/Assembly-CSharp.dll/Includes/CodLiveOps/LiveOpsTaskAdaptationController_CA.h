#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CodLiveOps {

class LiveOpsTaskAdaptationControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CodLiveOps", "LiveOpsTaskAdaptationController_CA"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationItemView_EasyListItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationItemView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetScrollViewWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationRightWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLeftWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationTopWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidgetButtomPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidgetTopPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidgetLeftPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidgetRightPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationButtomWidget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationRightScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationTopScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationLeftScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationMainContentWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = bool> static T AdaptationItemView_EasyListItem(uintptr_t inView, uintptr_t inBG, uintptr_t* outWidth, int32_t inMinWidth) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*, int32_t))(Il2CppBase() + 0x3A2A28C))(0, inView, inBG, outWidth, inMinWidth);
	}
	template <typename T = bool> static T AdaptationItemView(uintptr_t inView, uintptr_t inBG, int32_t inWidth) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3A2A890))(0, inView, inBG, inWidth);
	}
	template <typename T = int32_t> static T GetScrollViewWidth(uintptr_t inView) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A2A5BC))(0, inView);
	}
	template <typename T = void> static T AdaptationRightWidget(uintptr_t inView, uintptr_t inCom, float inLeaveBlankPixel, float inMaxRightPosX, bool inbForce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, bool))(Il2CppBase() + 0x3A2AE50))(0, inView, inCom, inLeaveBlankPixel, inMaxRightPosX, inbForce);
	}
	template <typename T = void> static T AdaptationLeftWidget(uintptr_t inView, uintptr_t inCom, float inLeaveBlankPixel, float inMaxLeftPosX, bool inbForce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, bool))(Il2CppBase() + 0x3A2AB88))(0, inView, inCom, inLeaveBlankPixel, inMaxLeftPosX, inbForce);
	}
	template <typename T = void> static T AdaptationTopWidget(uintptr_t inView, uintptr_t inCom, float inLeaveBlankPixel, float inMaxTopPosY, bool inbForce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, bool))(Il2CppBase() + 0x3A2B690))(0, inView, inCom, inLeaveBlankPixel, inMaxTopPosY, inbForce);
	}
	template <typename T = float> static T GetWidgetButtomPos(uintptr_t inWidget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A2BC10))(0, inWidget);
	}
	template <typename T = float> static T GetWidgetTopPos(uintptr_t inWidget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A2B958))(0, inWidget);
	}
	template <typename T = float> static T GetWidgetLeftPos(uintptr_t inWidget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A2B3D4))(0, inWidget);
	}
	template <typename T = float> static T GetWidgetRightPos(uintptr_t inWidget) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3A2B118))(0, inWidget);
	}
	template <typename T = void> static T AdaptationButtomWidget(uintptr_t inView, uintptr_t inCom, float inLeaveBlankPixel, float inMaxButtomPosY, bool inbForce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, bool))(Il2CppBase() + 0x3A2BECC))(0, inView, inCom, inLeaveBlankPixel, inMaxButtomPosY, inbForce);
	}
	template <typename T = void> static T AdaptationRightScrollView(uintptr_t inView, uintptr_t inScrollView, float inLeaveBlankPixel, float inMaxRightPosX, bool inbForce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, bool))(Il2CppBase() + 0x3A2C194))(0, inView, inScrollView, inLeaveBlankPixel, inMaxRightPosX, inbForce);
	}
	template <typename T = void> static T AdaptationTopScrollView(uintptr_t inView, uintptr_t inScrollView, float inLeaveBlankPixel, float inMaxRightPosY, bool inbForce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, bool))(Il2CppBase() + 0x3A2C4CC))(0, inView, inScrollView, inLeaveBlankPixel, inMaxRightPosY, inbForce);
	}
	template <typename T = void> static T AdaptationLeftScrollView(uintptr_t inView, uintptr_t inScrollView, float inLeaveBlankPixel, float inMaxLeftPosX, bool inbForce) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, bool))(Il2CppBase() + 0x3A2C804))(0, inView, inScrollView, inLeaveBlankPixel, inMaxLeftPosX, inbForce);
	}
	template <typename T = void> static T AdaptationMainContentWindow(uintptr_t inView, bool bCenterWhenOverflow) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x3A2CB3C))(0, inView, bCenterWhenOverflow);
	}

};

}
