#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TacticalMapViewMP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TacticalMapView_MP"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_NameList() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = Il2CppVector3> T& m_NameOffset() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MissileSpriteList() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MissileListCache() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& AirDropSprite() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExtraAirDropSprites() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& ClickCollider() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& OBCloseCollider() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2MapUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapUIToWorldPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapUIPosToScreenUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMissiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMissileSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSatelliteMapByViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllTeamAndEnemyPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadarSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetRadarSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadarSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F42A08))(this);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F42D24))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F42E74))(this);
	}
	template <typename T = void> T OnCloseClick(uintptr_t Obj) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t))(Il2CppBase() + 0x3F42FBC))(this, Obj);
	}
	template <typename T = Il2CppVector2> T WorldPosition2MapUIPosition(Il2CppVector3 inSpeicifyLoc) {
		return ((T (*)(TacticalMapViewMP*, Il2CppVector3))(Il2CppBase() + 0x3F4307C))(this, inSpeicifyLoc);
	}
	template <typename T = void> T OnMapClick(uintptr_t Obj) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t))(Il2CppBase() + 0x3F43198))(this, Obj);
	}
	template <typename T = Il2CppVector3> T MapUIToWorldPos(Il2CppVector3 localPos) {
		return ((T (*)(TacticalMapViewMP*, Il2CppVector3))(Il2CppBase() + 0x3F43738))(this, localPos);
	}
	template <typename T = Il2CppVector2> T MapUIPosToScreenUIPos(Il2CppVector2 inMapUIPos) {
		return ((T (*)(TacticalMapViewMP*, Il2CppVector2))(Il2CppBase() + 0x3F4386C))(this, inMapUIPos);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F43AC4))(this);
	}
	template <typename T = bool> T UpdateSpriteInfo(uintptr_t inSprite, Il2CppVector3 position, Il2CppQuaternion rotation, bool ignorePosition, bool ignoreRotation, bool ignoreEdge) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool, bool, bool))(Il2CppBase() + 0x45EF264))(this, inSprite, position, rotation, ignorePosition, ignoreRotation, ignoreEdge);
	}
	template <typename T = bool> T UpdateEnemyShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool onEdge) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3F443CC))(this, inSprite, inPawn, onEdge);
	}
	template <typename T = void> T UpdateMissiles(Il2CppList<uintptr_t>* inMissileList) {
		return ((T (*)(TacticalMapViewMP*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3F43C20))(this, inMissileList);
	}
	template <typename T = void> T UpdateMissileSpriteInfo(uintptr_t inSprite, uintptr_t inMissile) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F44B1C))(this, inSprite, inMissile);
	}
	template <typename T = void> T UpdateSatelliteMapByViewTarget(uintptr_t inViewTarget) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t))(Il2CppBase() + 0x3F44D04))(this, inViewTarget);
	}
	template <typename T = void> T GetAllTeamAndEnemyPawns() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F45068))(this);
	}
	template <typename T = void> T SetRadarSpriteDepth(uintptr_t sprite, uintptr_t comp) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F45434))(this, sprite, comp);
	}
	template <typename T = void> T SetRadarSpriteDepth_1(uintptr_t sprite, uintptr_t spriteType, uintptr_t pawn) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F45594))(this, sprite, spriteType, pawn);
	}
	template <typename T = bool> T SetRadarSprite(uintptr_t sprite, Il2CppString* spriteName, uintptr_t spriteType, uintptr_t vehicle) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F45748))(this, sprite, spriteName, spriteType, vehicle);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F459B8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_InitResources() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F459C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShow() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F459C8))(this);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_WorldPosition2MapUIPosition(Il2CppVector3 P0) {
		return ((T (*)(TacticalMapViewMP*, Il2CppVector3))(Il2CppBase() + 0x3F459D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F459F4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_UpdateEnemyShowOnMap(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3F459FC))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSatelliteMapByViewTarget(uintptr_t P0) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t))(Il2CppBase() + 0x3F45A1C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_GetAllTeamAndEnemyPawns() {
		return ((T (*)(TacticalMapViewMP*))(Il2CppBase() + 0x3F45A24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetRadarSpriteDepth(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F45A2C))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetRadarSpriteDepth_1(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F45A34))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_SetRadarSprite(uintptr_t P0, Il2CppString* P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(TacticalMapViewMP*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3F45A54))(this, P0, P1, P2, P3);
	}

};

}
