#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrossHairGrappleGun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrossHair_GrappleGun"));
	}

	template <typename T = uintptr_t> T& SpriteUp() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& SpriteCenter() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& SpriteLeftDown() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& SpriteRightDown() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& ChangeTime() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& IsCrosshairChange() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = float> T& Rate() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppVector3> T& mUpSourcePos() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppVector3> T& mCenterSourcePos() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& mLeftDownSourcePos() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppVector3> T& mRightDownSourcePos() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector3> T& m_UpLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = Il2CppVector3> T& m_CenterLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = Il2CppVector3> T& m_LeftDownLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppVector3> T& m_RightDownLocalPositionCache() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = Il2CppVector2> T& m_CenterToUpDir() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = Il2CppVector2> T& m_CenterToLeftDownDir() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = Il2CppVector2> T& m_CenterToRightDownDir() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& CrossSprite() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppVector2> T& ScreenEdgeOffset() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppRect> T& m_ClampRect() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppVector3> T& CrossHairScreenPos() {
		return *(T*)((uintptr_t)this + 0x140);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrossSpriteVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickUpdateRejustTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAcuteAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PositionChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RejustTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReInitTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrossHairGrappleGun*))(Il2CppBase() + 0x40CC994))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CrossHairGrappleGun*))(Il2CppBase() + 0x40CC99C))(this);
	}
	template <typename T = void> T SetCrosshairDisplay(bool isShow) {
		return ((T (*)(CrossHairGrappleGun*, bool))(Il2CppBase() + 0x40CCD90))(this, isShow);
	}
	template <typename T = void> T SetCrossSpriteVisible(bool visible) {
		return ((T (*)(CrossHairGrappleGun*, bool))(Il2CppBase() + 0x40CCE80))(this, visible);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CrossHairGrappleGun*, float))(Il2CppBase() + 0x40CD430))(this, dt);
	}
	template <typename T = void> T TickUpdateRejustTransform() {
		return ((T (*)(CrossHairGrappleGun*))(Il2CppBase() + 0x40CE3AC))(this);
	}
	template <typename T = bool> T IsAcuteAngle(Il2CppVector3 worldPos) {
		return ((T (*)(CrossHairGrappleGun*, Il2CppVector3))(Il2CppBase() + 0x40CE860))(this, worldPos);
	}
	template <typename T = void> T UpdatePos(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(CrossHairGrappleGun*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x40CDEC0))(this, worldPos, clampRect);
	}
	template <typename T = void> T PositionChange(uintptr_t go, Il2CppVector3 source, Il2CppVector3 target) {
		return ((T (*)(CrossHairGrappleGun*, uintptr_t, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x40CEA44))(this, go, source, target);
	}
	template <typename T = void> T RejustTransform() {
		return ((T (*)(CrossHairGrappleGun*))(Il2CppBase() + 0x40CE4A8))(this);
	}
	template <typename T = void> T ReInitTransform() {
		return ((T (*)(CrossHairGrappleGun*))(Il2CppBase() + 0x40CD11C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CrossHairGrappleGun*))(Il2CppBase() + 0x40CEB7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetCrosshairDisplay(bool P0) {
		return ((T (*)(CrossHairGrappleGun*, bool))(Il2CppBase() + 0x40CEB84))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CrossHairGrappleGun*, float))(Il2CppBase() + 0x40CEB8C))(this, P0);
	}

};

}
