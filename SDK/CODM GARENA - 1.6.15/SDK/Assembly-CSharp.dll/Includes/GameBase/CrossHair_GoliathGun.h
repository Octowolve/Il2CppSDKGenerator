#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrossHairGoliathGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrossHair_GoliathGun"));
	}

	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector2> T& ScreenEdgeOffset() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppRect> T& m_ClampRect() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppVector3> T& CrossHairScreenPos() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& m_color() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrosshairDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCrosshairColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAcuteAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrossHairGoliathGun*))(Il2CppBase() + 0x40CB67C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CrossHairGoliathGun*))(Il2CppBase() + 0x40CB684))(this);
	}
	template <typename T = void> T SetCrosshairDisplay(bool isShow) {
		return ((T (*)(CrossHairGoliathGun*, bool))(Il2CppBase() + 0x40CB908))(this, isShow);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CrossHairGoliathGun*, float))(Il2CppBase() + 0x40CB9C8))(this, dt);
	}
	template <typename T = void> T UpdateCrosshairColor(uintptr_t color) {
		return ((T (*)(CrossHairGoliathGun*, uintptr_t))(Il2CppBase() + 0x40CBED4))(this, color);
	}
	template <typename T = bool> T IsAcuteAngle(Il2CppVector3 worldPos) {
		return ((T (*)(CrossHairGoliathGun*, Il2CppVector3))(Il2CppBase() + 0x40CBFF4))(this, worldPos);
	}
	template <typename T = void> T UpdatePos(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(CrossHairGoliathGun*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x40CC1D8))(this, worldPos, clampRect);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CrossHairGoliathGun*))(Il2CppBase() + 0x40CC6C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetCrosshairDisplay(bool P0) {
		return ((T (*)(CrossHairGoliathGun*, bool))(Il2CppBase() + 0x40CC6CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CrossHairGoliathGun*, float))(Il2CppBase() + 0x40CC6D4))(this, P0);
	}

};

}
