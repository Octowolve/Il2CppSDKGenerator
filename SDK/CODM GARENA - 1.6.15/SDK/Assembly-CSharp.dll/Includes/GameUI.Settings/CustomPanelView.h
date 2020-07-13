#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class CustomPanelView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "CustomPanelView"));
	}

	template <typename T = uintptr_t> T& BGMaskSprite() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Panel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& VLine() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& HLine() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& CloseBtn() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ResetBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& EditOverBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& Mask() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ScaleSlider() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& AlphaBtnMask() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartEditing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndEditing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_DragStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_Drag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_PinchOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_PinchEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EasyTouch_On_PinchIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Init() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x44898EC))(this);
	}
	template <typename T = void> T StartEditing() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x4489C10))(this);
	}
	template <typename T = void> T EndEditing() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x4489B68))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x4489CB8))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x4489D6C))(this);
	}
	template <typename T = void> T EasyTouch_On_DragStart(uintptr_t gesture) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x4489E20))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_Drag(uintptr_t gesture) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x4489F98))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_PinchOut(uintptr_t gesture) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A178))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_PinchEnd(uintptr_t gesture) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A38C))(this, gesture);
	}
	template <typename T = void> T EasyTouch_On_PinchIn(uintptr_t gesture) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A598))(this, gesture);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x448A7AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x448A7B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(CustomPanelView*))(Il2CppBase() + 0x448A7BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_DragStart(uintptr_t P0) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A7C4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_Drag(uintptr_t P0) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A7CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_PinchOut(uintptr_t P0) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A7D4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_PinchEnd(uintptr_t P0) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A7DC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_EasyTouch_On_PinchIn(uintptr_t P0) {
		return ((T (*)(CustomPanelView*, uintptr_t))(Il2CppBase() + 0x448A7E4))(this, P0);
	}

};

}
