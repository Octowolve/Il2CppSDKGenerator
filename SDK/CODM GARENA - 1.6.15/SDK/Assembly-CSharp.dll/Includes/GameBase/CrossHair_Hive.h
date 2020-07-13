#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class CrossHairHive
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "CrossHair_Hive"));
	}

	template <typename T = uintptr_t> T& NormalSprite() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& IsCrosshairChange() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& m_SourceScale() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppVector3> T& m_TargetScale() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppVector2> T& ScreenEdgeOffset() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppRect> T& m_ClampRect() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& CrossHairScreenPos() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = bool> T& m_bShow() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& m_DesiredReachTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& m_RealDesiredReachTime() {
		return *(T*)((uintptr_t)this + 0xD4);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsAcuteAngle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReInitTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(CrossHairHive*))(Il2CppBase() + 0x40CED84))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CrossHairHive*))(Il2CppBase() + 0x40CED8C))(this);
	}
	template <typename T = void> T SetCrosshairDisplay(bool isShow) {
		return ((T (*)(CrossHairHive*, bool))(Il2CppBase() + 0x40CF010))(this, isShow);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(CrossHairHive*, float))(Il2CppBase() + 0x40CF43C))(this, dt);
	}
	template <typename T = bool> T IsAcuteAngle(Il2CppVector3 worldPos) {
		return ((T (*)(CrossHairHive*, Il2CppVector3))(Il2CppBase() + 0x40CF700))(this, worldPos);
	}
	template <typename T = void> T UpdatePos(Il2CppVector3 worldPos, Il2CppRect clampRect) {
		return ((T (*)(CrossHairHive*, Il2CppVector3, Il2CppRect))(Il2CppBase() + 0x40CF8E4))(this, worldPos, clampRect);
	}
	template <typename T = void> T ReInitTransform() {
		return ((T (*)(CrossHairHive*))(Il2CppBase() + 0x40CF100))(this);
	}
	template <typename T = void> T StartAnimation() {
		return ((T (*)(CrossHairHive*))(Il2CppBase() + 0x40CF2D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CrossHairHive*))(Il2CppBase() + 0x40CFDD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetCrosshairDisplay(bool P0) {
		return ((T (*)(CrossHairHive*, bool))(Il2CppBase() + 0x40CFDD8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(CrossHairHive*, float))(Il2CppBase() + 0x40CFDE0))(this, P0);
	}

};

}
