#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalTopView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalTopView"));
	}

	template <typename T = bool> T& m_Initialized() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_IsQuitGame() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = uintptr_t> T& m_TacticalGPS() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_SwitchButton() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_TopViewMapUITex() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_TopViewMapUITex_Shader() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& m_TopViewMapTexRes() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& TextureResourceWidth() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = int32_t> T& TextureResourceHeight() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& BoxCollider() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& m_UISViewTarget() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnemyPawnSpriteList() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TeamPawnSpriteList() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_ViewTarget() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EnemyPawn() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TeamPawn() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& RemoteControlledVehicleSpriteList() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_VehicleList() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_TacticalTeamMateStateList() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& MarkSet() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector2> T& m_CachedViewTargetScreenPos() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = Il2CppQuaternion> T& m_CachedViewTargetRot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& m_EffectSmoke() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = float> static T& m_EffectSmokeFadeSpeed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsFadeIn() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& ClipPanel() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& tacticalManagerList() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_RadarCompList() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = float> T& m_WorldDis2UVDisConvertor() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector2> T& m_ScreenPos2UVPosConvertor() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettlement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterTacticalManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_RegisterTacticalManager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllComponents() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncOfflineTeamMate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadSwitchClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllTeamAndEnemyPawns() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVehicleList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreDeterminedShouldShowEnemyPawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUAVActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInSparrowStickScanRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReceiveEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDatum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsObstaclePresence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsObstaclePresence() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTacticalCompList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateViewTargetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCacheDatum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePawnSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTatcicalObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTacticalRelativeObjects() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffectSmokeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSatelliteMapByViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteRootRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UpdateSpriteRootRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateObjectBasedOnTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2MapUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldRotationToUIRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapTexture2MapUIRelativePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPos2MapTexUVPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldLength2MapTexUVLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTacticalMapTextureVectorParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTextureDrawCallDMExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlayerIconStartDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetObserverPlayerIconDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadarSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadarSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetRadarSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_SetRadarSpriteDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}

	template <typename T = uintptr_t> T get_TacticalGPS() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x2797A40))(this);
	}
	template <typename T = void> T set_TacticalGPS(uintptr_t value) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x27B3E2C))(this, value);
	}
	template <typename T = uintptr_t> T get_ViewTarget() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27969E4))(this);
	}
	template <typename T = void> T set_ViewTarget(uintptr_t value) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x27B3E34))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_EnemyPawn() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B3E3C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TeamPawn() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x2794D28))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_VehicleList() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B3E44))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TacticalTeamMateStateList() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27AFE74))(this);
	}
	template <typename T = Il2CppQuaternion> T get_CachedViewTargetRot() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B3E4C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27881E4))(this);
	}
	template <typename T = void> T OnSettlement() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B3F3C))(this);
	}
	template <typename T = bool> T RegisterTacticalManager() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x1B9BB74))(this);
	}
	template <typename T = void> T RegisterTacticalManager_1(uintptr_t manager) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x27B3E5C))(this, manager);
	}
	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x277F658))(this, inGPS);
	}
	template <typename T = bool> T CheckResource() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x2783C48))(this);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x2780970))(this);
	}
	template <typename T = void> T RefreshAllComponents() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x277E41C))(this);
	}
	template <typename T = void> T OnSyncOfflineTeamMate(Il2CppList<uintptr_t>* tacticalTeamMateStateList) {
		return ((T (*)(TacticalTopView*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27B3FE0))(this, tacticalTeamMateStateList);
	}
	template <typename T = void> T GamepadSwitchClick() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B4080))(this);
	}
	template <typename T = void> T OnClickSwitch(uintptr_t gameObject, bool isPressed) {
		return ((T (*)(TacticalTopView*, uintptr_t, bool))(Il2CppBase() + 0x2783D00))(this, gameObject, isPressed);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x2783F80))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x2783808))(this);
	}
	template <typename T = void> T GetAllTeamAndEnemyPawns() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B4314))(this);
	}
	template <typename T = void> T GetVehicleList() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B46E0))(this);
	}
	template <typename T = bool> T PreDeterminedShouldShowEnemyPawnList() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x279417C))(this);
	}
	template <typename T = bool> T IsSameTeam(uintptr_t mySelf, uintptr_t inPawn) {
		return ((T (*)(TacticalTopView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27A52E0))(this, mySelf, inPawn);
	}
	template <typename T = bool> T IsUAVActive() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27ACCD4))(this);
	}
	template <typename T = bool> T IsInSparrowStickScanRange(uintptr_t inPawn) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x27B4A84))(this, inPawn);
	}
	template <typename T = void> T ReceiveEvent(uintptr_t inMsg) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x27B4DDC))(this, inMsg);
	}
	template <typename T = void> T ResetDatum() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B4F04))(this);
	}
	template <typename T = bool> T IsObstaclePresence(uintptr_t inPawn) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x27A9E1C))(this, inPawn);
	}
	template <typename T = bool> T IsObstaclePresence_1(uintptr_t inProjectile) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x27ABD50))(this, inProjectile);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B5020))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(TacticalTopView*, float))(Il2CppBase() + 0x2789638))(this, dt);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x278855C))(this);
	}
	template <typename T = void> T UpdateTacticalCompList() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B5510))(this);
	}
	template <typename T = void> T UpdateViewTargetInfo() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B5028))(this);
	}
	template <typename T = void> T UpdateCacheDatum() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B52C8))(this);
	}
	template <typename T = void> T UpdatePawnSprite() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B56C8))(this);
	}
	template <typename T = void> T UpdateVehicleSprite() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B5778))(this);
	}
	template <typename T = void> T UpdateTatcicalObjects() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B581C))(this);
	}
	template <typename T = void> T UpdateTacticalRelativeObjects() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B5954))(this);
	}
	template <typename T = void> T UpdateEffectSmokeState() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x278A7E8))(this);
	}
	template <typename T = void> T UpdateSatelliteMapByViewTarget(uintptr_t inFocusPawn) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x2785C94))(this, inFocusPawn);
	}
	template <typename T = bool> T UpdateSpriteInfo(uintptr_t inSprite, Il2CppVector3 position, Il2CppQuaternion rotation, bool ignorePosition, bool ignoreRotation, bool ignoreEdge) {
		return ((T (*)(TacticalTopView*, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool, bool, bool))(Il2CppBase() + 0x1B9BF80))(this, inSprite, position, rotation, ignorePosition, ignoreRotation, ignoreEdge);
	}
	template <typename T = void> T UpdateSpriteRootRotation(uintptr_t inSpriteRoot, Il2CppQuaternion rotation, bool shouldHide) {
		return ((T (*)(TacticalTopView*, uintptr_t, Il2CppQuaternion, bool))(Il2CppBase() + 0x27B36CC))(this, inSpriteRoot, rotation, shouldHide);
	}
	template <typename T = void> T UpdateSpriteRootRotation_1(uintptr_t inSpriteRoot, Il2CppQuaternion rotation, bool shouldHide) {
		return ((T (*)(TacticalTopView*, uintptr_t, Il2CppQuaternion, bool))(Il2CppBase() + 0x27B5A8C))(this, inSpriteRoot, rotation, shouldHide);
	}
	template <typename T = bool> T UpdateObjectBasedOnTexture(uintptr_t inSprite, Il2CppVector3 position, Il2CppQuaternion rotation, bool ignorePosition, bool ignoreRotation, bool ignoreEdge) {
		return ((T (*)(TacticalTopView*, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool, bool, bool))(Il2CppBase() + 0x1B9BDD4))(this, inSprite, position, rotation, ignorePosition, ignoreRotation, ignoreEdge);
	}
	template <typename T = bool> T UpdateEnemyShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool onEdge) {
		return ((T (*)(TacticalTopView*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2793FC4))(this, inSprite, inPawn, onEdge);
	}
	template <typename T = bool> T UpdateVehicleShowOnMap(uintptr_t inSprite, uintptr_t inVehicle) {
		return ((T (*)(TacticalTopView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x279ED60))(this, inSprite, inVehicle);
	}
	template <typename T = Il2CppVector2> T WorldPosition2MapUIPosition(Il2CppVector3 inDroppedLoc) {
		return ((T (*)(TacticalTopView*, Il2CppVector3))(Il2CppBase() + 0x27840BC))(this, inDroppedLoc);
	}
	template <typename T = Il2CppQuaternion> T WorldRotationToUIRotation(Il2CppQuaternion inWorldRot) {
		return ((T (*)(TacticalTopView*, Il2CppQuaternion))(Il2CppBase() + 0x27ACB70))(this, inWorldRot);
	}
	template <typename T = Il2CppVector2> T MapTexture2MapUIRelativePosition() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27A5438))(this);
	}
	template <typename T = Il2CppVector2> T WorldPos2MapTexUVPos(Il2CppVector3 worldPos) {
		return ((T (*)(TacticalTopView*, Il2CppVector3))(Il2CppBase() + 0x27B5CBC))(this, worldPos);
	}
	template <typename T = float> T WorldLength2MapTexUVLength(float worldLength) {
		return ((T (*)(TacticalTopView*, float))(Il2CppBase() + 0x27B5E9C))(this, worldLength);
	}
	template <typename T = void> T SetTacticalMapTextureVectorParam(int32_t paraID, uintptr_t paraValue) {
		return ((T (*)(TacticalTopView*, int32_t, uintptr_t))(Il2CppBase() + 0x27B5F50))(this, paraID, paraValue);
	}
	template <typename T = bool> T IsTextureDrawCallDMExit(uintptr_t inUITexture) {
		return ((T (*)(TacticalTopView*, uintptr_t))(Il2CppBase() + 0x2784FF0))(this, inUITexture);
	}
	template <typename T = int32_t> T GetPlayerIconStartDepth() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B0660))(this);
	}
	template <typename T = int32_t> T GetObserverPlayerIconDepth(uint32_t TeamId, uint32_t TeamSeatID, int32_t MaxPlayerNumPerTeam, bool bIsViewTarget) {
		return ((T (*)(TacticalTopView*, uint32_t, uint32_t, int32_t, bool))(Il2CppBase() + 0x27B614C))(this, TeamId, TeamSeatID, MaxPlayerNumPerTeam, bIsViewTarget);
	}
	template <typename T = bool> T SetRadarSpriteDepth(uintptr_t sprite, Il2CppString* spriteName) {
		return ((T (*)(TacticalTopView*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x27B6220))(this, sprite, spriteName);
	}
	template <typename T = bool> T SetRadarSprite(uintptr_t sprite, Il2CppString* spriteName, uintptr_t spriteType, uintptr_t vehicle) {
		return ((T (*)(TacticalTopView*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27ACF20))(this, sprite, spriteName, spriteType, vehicle);
	}
	template <typename T = void> T SetRadarSpriteDepth_1(uintptr_t sprite, uintptr_t spriteType, uintptr_t pawn) {
		return ((T (*)(TacticalTopView*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x27ACE44))(this, sprite, spriteType, pawn);
	}
	template <typename T = void> T SetRadarSpriteDepth_2(uintptr_t sprite, uintptr_t comp) {
		return ((T (*)(TacticalTopView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27ACD78))(this, sprite, comp);
	}
	template <typename T = int32_t> T GetWidth() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B6400))(this);
	}
	template <typename T = int32_t> T GetHeight() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B6520))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B663C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(TacticalTopView*))(Il2CppBase() + 0x27B6644))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(TacticalTopView*, float))(Il2CppBase() + 0x27B664C))(this, P0);
	}

};

}
