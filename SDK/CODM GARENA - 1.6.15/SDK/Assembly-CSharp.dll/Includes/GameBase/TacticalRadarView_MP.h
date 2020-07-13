#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalRadarViewMP
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalRadarView_MP"));
	}

	template <typename T = Il2CppString*> T& SameSideUAVSound() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = Il2CppString*> T& SameSideCounterUAVSound() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = Il2CppString*> T& SameSideMissleSound() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = Il2CppString*> T& OppositeSideUAVSound() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = Il2CppString*> T& OppositeSideUAVSoundWarnning() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = Il2CppString*> T& OppositeSideCounterUAVSound() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppString*> T& OppositeSideCounterUAVSoundWarnning() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppString*> T& OppositeSideMissleSound() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& m_Frame() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& m_HighLightEffect() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& UAVFirstUseEffect() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = float> T& m_UAVEdgeSize() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& m_RadarScanlineTex() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& m_RadarUAVTex() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& m_RadarCounterUAVTex() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = float> T& m_ScanPeriod() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = float> T& m_ScanInterval() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = float> T& m_ScanStartTime() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = int32_t> T& m_ScanTimes() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = int32_t> T& m_CurScanTimes() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = bool> T& m_IsPlayingUVAScanSound() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& m_UILPlaceName() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& m_RegionName() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EnemyDirSign() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& m_IsEnemyDirScanEnable() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = float> T& m_EnemyDirScanRange() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = float> T& m_EnemyDirScanDelayTime() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnemyNearbyInfoList() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MissileSpriteList() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& AirDropSprite() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ExtraAirDropSprites() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnemyBodyScanInfoList() {
		return *(T*)((uintptr_t)this + 0x198);
	}
	template <typename T = float> T& m_EnemyBodyScanRange() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = bool> T& m_ClassicalMode() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MissileListCache() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppString*> T& mCacheRegionName() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = float> static T& UpdateUAVIntv() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mCurUAVInv() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = bool> T& m_PendingPreZ() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnemyDirScanEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddEnemyBodyScan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEnemyNearByIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldRotationToUIRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2MapUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcRelativePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSatelliteMapByViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyBodyScanInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BaseUpdateUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MlkUpdateUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMissileSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRadarClippingBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyDirScan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveStreakFromDirScan() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMissiles() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSelfUAVStateChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUAVFirstUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInEnemyBodyScanRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUavScanArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUAVActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadarSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetRadarSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadarSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPreZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = bool> T get_ClassicalMode() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A57AC))(this);
	}
	template <typename T = void> T set_ClassicalMode(bool value) {
		return ((T (*)(TacticalRadarViewMP*, bool))(Il2CppBase() + 0x27A57B4))(this, value);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A5A28))(this);
	}
	template <typename T = void> T OnClickSwitch(uintptr_t gameObject, bool isPressed) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, bool))(Il2CppBase() + 0x27A5A38))(this, gameObject, isPressed);
	}
	template <typename T = void> T SetEnemyDirScanEnable(bool enable, float range, float delayTime) {
		return ((T (*)(TacticalRadarViewMP*, bool, float, float))(Il2CppBase() + 0x279B244))(this, enable, range, delayTime);
	}
	template <typename T = void> T AddEnemyBodyScan(Il2CppVector3 pos, float time, float range) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppVector3, float, float))(Il2CppBase() + 0x279AD9C))(this, pos, time, range);
	}
	template <typename T = int32_t> T GetEnemyNearByIndex(uint32_t playerID) {
		return ((T (*)(TacticalRadarViewMP*, uint32_t))(Il2CppBase() + 0x27A5EF0))(this, playerID);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A6074))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A614C))(this);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A6248))(this);
	}
	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t))(Il2CppBase() + 0x27A63D8))(this, inGPS);
	}
	template <typename T = Il2CppQuaternion> T WorldRotationToUIRotation(Il2CppQuaternion inWorldRot) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppQuaternion))(Il2CppBase() + 0x27A65D0))(this, inWorldRot);
	}
	template <typename T = Il2CppVector2> T WorldPosition2MapUIPosition(Il2CppVector3 inSpeicifyLoc) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppVector3))(Il2CppBase() + 0x27A6818))(this, inSpeicifyLoc);
	}
	template <typename T = Il2CppVector3> T CalcRelativePosition(Il2CppVector2 inStdPos, Il2CppVector3 inTestPos) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppVector2, Il2CppVector3))(Il2CppBase() + 0x27A6A34))(this, inStdPos, inTestPos);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A6D64))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TacticalRadarViewMP*, float))(Il2CppBase() + 0x27A6E4C))(this, dt);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A720C))(this);
	}
	template <typename T = void> T UpdateSatelliteMapByViewTarget(uintptr_t inViewTarget) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t))(Il2CppBase() + 0x27A89B8))(this, inViewTarget);
	}
	template <typename T = void> T UpdateEnemyBodyScanInfo() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27A7438))(this);
	}
	template <typename T = bool> T UpdateEnemyShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool onEdge) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27A9348))(this, inSprite, inPawn, onEdge);
	}
	template <typename T = void> T Update() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AA690))(this);
	}
	template <typename T = void> T UpdateUAV() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AA844))(this);
	}
	template <typename T = void> T BaseUpdateUAV() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AAE80))(this);
	}
	template <typename T = void> T MlkUpdateUAV() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AAB28))(this);
	}
	template <typename T = void> T UpdateMissileSpriteInfo(uintptr_t inSprite, uintptr_t inMissile) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27AB1C0))(this, inSprite, inMissile);
	}
	template <typename T = void> T UpdateRadarClippingBorder() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AB3C8))(this);
	}
	template <typename T = void> T UpdateEnemyDirScan(Il2CppList<uintptr_t>* pawnList) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27A7DD0))(this, pawnList);
	}
	template <typename T = void> T RemoveStreakFromDirScan(uint32_t actorID) {
		return ((T (*)(TacticalRadarViewMP*, uint32_t))(Il2CppBase() + 0x279BC18))(this, actorID);
	}
	template <typename T = void> T UpdateMissiles(Il2CppList<uintptr_t>* inMissileList) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27A7604))(this, inMissileList);
	}
	template <typename T = void> T OnSelfUAVStateChanged(int32_t times) {
		return ((T (*)(TacticalRadarViewMP*, int32_t))(Il2CppBase() + 0x279BE60))(this, times);
	}
	template <typename T = void> T OnUAVFirstUsed(bool bUse) {
		return ((T (*)(TacticalRadarViewMP*, bool))(Il2CppBase() + 0x279B69C))(this, bUse);
	}
	template <typename T = bool> T IsInEnemyBodyScanRange(uintptr_t inPawn) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t))(Il2CppBase() + 0x27AA244))(this, inPawn);
	}
	template <typename T = void> T SetUavScanArgs(float period, float interval) {
		return ((T (*)(TacticalRadarViewMP*, float, float))(Il2CppBase() + 0x279D268))(this, period, interval);
	}
	template <typename T = bool> T IsUAVActive() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AC0E0))(this);
	}
	template <typename T = void> T SetRadarSpriteDepth(uintptr_t sprite, uintptr_t comp) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27AC2C4))(this, sprite, comp);
	}
	template <typename T = void> T SetRadarSpriteDepth_1(uintptr_t sprite, uintptr_t spriteType, uintptr_t pawn) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27AC454))(this, sprite, spriteType, pawn);
	}
	template <typename T = bool> T SetRadarSprite(uintptr_t sprite, Il2CppString* spriteName, uintptr_t spriteType, uintptr_t vehicle) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27AC638))(this, sprite, spriteName, spriteType, vehicle);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AC8E0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AC9BC))(this);
	}
	template <typename T = void> T ShowPreZ(bool show) {
		return ((T (*)(TacticalRadarViewMP*, bool))(Il2CppBase() + 0x27A6F4C))(this, show);
	}
	template <typename T = void> T xLuaBaseProxy_OnClickSwitch(uintptr_t P0, bool P1) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, bool))(Il2CppBase() + 0x27ACB30))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27ACB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27ACB3C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_InitResources() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27ACB44))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Startup(uintptr_t P0) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t))(Il2CppBase() + 0x27ACB48))(this, P0);
	}
	template <typename T = Il2CppQuaternion> T xLuaBaseProxy_WorldRotationToUIRotation(Il2CppQuaternion P0) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppQuaternion))(Il2CppBase() + 0x27ACB4C))(this, P0);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_WorldPosition2MapUIPosition(Il2CppVector3 P0) {
		return ((T (*)(TacticalRadarViewMP*, Il2CppVector3))(Il2CppBase() + 0x27ACC88))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalRadarViewMP*, float))(Il2CppBase() + 0x27ACCA8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27ACCAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateSatelliteMapByViewTarget(uintptr_t P0) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t))(Il2CppBase() + 0x27ACCB0))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_UpdateEnemyShowOnMap(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27ACCB4))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRadarClippingBorder() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27ACCCC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsUAVActive() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27ACCD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetRadarSpriteDepth(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27ACD74))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_SetRadarSpriteDepth_1(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27ACE2C))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_SetRadarSprite(uintptr_t P0, Il2CppString* P1, uintptr_t P2, uintptr_t P3) {
		return ((T (*)(TacticalRadarViewMP*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27ACF00))(this, P0, P1, P2, P3);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AD000))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(TacticalRadarViewMP*))(Il2CppBase() + 0x27AD004))(this);
	}

};

}
