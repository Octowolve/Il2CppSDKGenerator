#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsEditWidgetMovementJoyStick
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsEditWidget_MovementJoyStick"));
	}

	template <typename T = Il2CppVector3> T& SprintingHUDCenter() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& SprintingHUDSize() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSprintingHUDColliderBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWidgetDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOtherEditWidgetChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ResetSprintingHUDColliderBox(Il2CppVector3 worldCenter, Il2CppVector3 worldSize) {
		return ((T (*)(SettingsEditWidgetMovementJoyStick*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x257CDB4))(this, worldCenter, worldSize);
	}
	template <typename T = void> T OnWidgetDrag(uintptr_t go, Il2CppVector2 delta) {
		return ((T (*)(SettingsEditWidgetMovementJoyStick*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2581C78))(this, go, delta);
	}
	template <typename T = void> T OnOtherEditWidgetChange(uintptr_t srcWidget, Il2CppVector3 targetPos, Il2CppVector3 boxCenter, Il2CppVector3 boxSize) {
		return ((T (*)(SettingsEditWidgetMovementJoyStick*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x25821D8))(this, srcWidget, targetPos, boxCenter, boxSize);
	}
	template <typename T = void> T xLuaBaseProxy_OnWidgetDrag(uintptr_t P0, Il2CppVector2 P1) {
		return ((T (*)(SettingsEditWidgetMovementJoyStick*, uintptr_t, Il2CppVector2))(Il2CppBase() + 0x2582374))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnOtherEditWidgetChange(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, Il2CppVector3 P3) {
		return ((T (*)(SettingsEditWidgetMovementJoyStick*, uintptr_t, Il2CppVector3, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x258238C))(this, P0, P1, P2, P3);
	}

};

}
