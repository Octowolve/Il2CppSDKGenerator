#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditWidgetSwitchSprint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditWidget_SwitchSprint"));
	}

	template <typename T = uintptr_t> T& BindLineSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& BindEditLineSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& JoyStickLocalY() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> static T& minSpace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& centerOffSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& heightOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustBindLines() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetJoyStickLocalY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyInCorrectSettting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEdittingSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOtherEditWidgetChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_CanHorizentalMove() {
		return ((T (*)(SettingsEditWidgetSwitchSprint*))(Il2CppBase() + 0x258247C))(this);
	}
	template <typename T = void> T AdjustBindLines() {
		return ((T (*)(SettingsEditWidgetSwitchSprint*))(Il2CppBase() + 0x2582484))(this);
	}
	template <typename T = void> T ResetJoyStickLocalY(float localY) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, float))(Il2CppBase() + 0x257CA84))(this, localY);
	}
	template <typename T = void> T ModifyInCorrectSettting(float localX) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, float))(Il2CppBase() + 0x257CB38))(this, localX);
	}
	template <typename T = void> T OnWidgetDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2582708))(this, go, delta);
	}
	template <typename T = void> T SetEdittingSelected(bool selected) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, bool))(Il2CppBase() + 0x2582C48))(this, selected);
	}
	template <typename T = void> T OnOtherEditWidgetChange(uintptr_t srcWidget, Il2CppVector3 targetPos, Il2CppVector3 boxCenter, Il2CppVector3 boxSize) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2582D48))(this, srcWidget, targetPos, boxCenter, boxSize);
	}
	template <typename T = void> T xLuaBaseProxy_OnWidgetDrag(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2582F74))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetEdittingSelected(bool P0) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, bool))(Il2CppBase() + 0x2582F8C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnOtherEditWidgetChange(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3) {
		return ((T (*)(SettingsEditWidgetSwitchSprint*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2582F90))(this, P0, P1, P2, P3);
	}

};

}
