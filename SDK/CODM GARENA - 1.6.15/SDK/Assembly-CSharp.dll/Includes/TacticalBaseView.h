#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalBaseView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalBaseView"));
	}

	template <typename T = Il2CppVector3> T& WorldSpaceCenterPositionUnshifted() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& bUseNewCenter() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppVector3> T& WorldOriginCenterPosition() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppVector3> T& MapUISpaceCenter() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = float> T& currentScale() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpriteRootList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppList<Il2CppList<uintptr_t>*>*> T& tacticalActorInfoList() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tacticalManagerList() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<Il2CppList<uintptr_t>*>*> T& SpriteList() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& m_TopViewMapUITex() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& tacticalGPS() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& m_TopViewMapTexRes() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = int32_t> T& TopViewMapUITexResWidth() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = int32_t> T& TopViewMapUITexResHeight() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppVector2> T& m_TexCenterOffset() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTatcicalObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2MapUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldRotationToUIRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScreenPosToMapUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapToWorldPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapUIToScreenPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppVector2> T get_TexCenterOffset() {
		return ((T (*)(TacticalBaseView*))(Il2CppBase() + 0x3F40680))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TacticalBaseView*))(Il2CppBase() + 0x3F40694))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalBaseView*))(Il2CppBase() + 0x3F408C0))(this);
	}
	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalBaseView*, uintptr_t))(Il2CppBase() + 0x3F408C8))(this, inGPS);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TacticalBaseView*, float))(Il2CppBase() + 0x3F40BC8))(this, dt);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalBaseView*))(Il2CppBase() + 0x3F40CAC))(this);
	}
	template <typename T = void> T UpdateTatcicalObjects() {
		return ((T (*)(TacticalBaseView*))(Il2CppBase() + 0x3F40D5C))(this);
	}
	template <typename T = Il2CppVector2> T WorldPosition2MapUIPosition(Il2CppVector3 inDroppedLoc) {
		return ((T (*)(TacticalBaseView*, Il2CppVector3))(Il2CppBase() + 0x3F40FD4))(this, inDroppedLoc);
	}
	template <typename T = Il2CppQuaternion> T WorldRotationToUIRotation(Il2CppQuaternion inWorldRot) {
		return ((T (*)(TacticalBaseView*, Il2CppQuaternion))(Il2CppBase() + 0x3F41198))(this, inWorldRot);
	}
	template <typename T = Il2CppVector2> T ScreenPosToMapUIPos(Il2CppVector2 inScreenPos) {
		return ((T (*)(TacticalBaseView*, Il2CppVector2))(Il2CppBase() + 0x3F412B0))(this, inScreenPos);
	}
	template <typename T = Il2CppVector3> T MapToWorldPos(Il2CppVector3 mapUIPos) {
		return ((T (*)(TacticalBaseView*, Il2CppVector3))(Il2CppBase() + 0x3F41488))(this, mapUIPos);
	}
	template <typename T = Il2CppVector2> T MapUIToScreenPos(Il2CppVector2 inMapUIPos) {
		return ((T (*)(TacticalBaseView*, Il2CppVector2))(Il2CppBase() + 0x3F41634))(this, inMapUIPos);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TacticalBaseView*))(Il2CppBase() + 0x3F41878))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalBaseView*, float))(Il2CppBase() + 0x3F41880))(this, P0);
	}

};

}
