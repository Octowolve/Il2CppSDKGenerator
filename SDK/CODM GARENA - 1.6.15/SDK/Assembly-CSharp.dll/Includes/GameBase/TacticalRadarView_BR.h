#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalRadarViewBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalRadarView_BR"));
	}

	template <typename T = bool> T& bWaitTilMatLoaded() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& NotifyInitResourceFinished() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& NotifyTickEvent() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& NewGuidePanel() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SoundTipsSprite() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PlayerMarks() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& VehicleSpriteList() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> T& ChipMachineTemplate() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& ChipMachineRoot() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = uintptr_t> T& MarkLine() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& MapMarkTemplate() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = uintptr_t> T& ZombieCarTemplate() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = uintptr_t> T& MapMarkRoot() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = uintptr_t> T& Airline() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& AirlineBG() {
		return *(T*)((uintptr_t)this + 0x15C);
	}
	template <typename T = uintptr_t> T& AirlineBGLeft() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = uintptr_t> T& AirlineArrow() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = uintptr_t> T& AirCraft() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& AirlineStartPoint() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = uintptr_t> T& PawnToSafePointLineSprite() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& AirBorneSprite() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& AirDropPlaneItemList() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OffPlaneAirDropSprites() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ReviveCardSpriteList() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& MineSprites() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = uintptr_t> T& DroneInterfereTex() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = uintptr_t> T& RunEscapeHud() {
		return *(T*)((uintptr_t)this + 0x18C);
	}
	template <typename T = uintptr_t> T& RunEscapeHudOB() {
		return *(T*)((uintptr_t)this + 0x190);
	}
	template <typename T = Il2CppVector2> T& UVTextureCenter() {
		return *(T*)((uintptr_t)this + 0x194);
	}
	template <typename T = float> T& CurrentRadarScale() {
		return *(T*)((uintptr_t)this + 0x19C);
	}
	template <typename T = float> T& TargetRadarScale() {
		return *(T*)((uintptr_t)this + 0x1A0);
	}
	template <typename T = float> T& LerpRate() {
		return *(T*)((uintptr_t)this + 0x1A4);
	}
	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& SimplePlayerSpriteDict() {
		return *(T*)((uintptr_t)this + 0x1A8);
	}
	template <typename T = Il2CppDictionary<uint32_t, bool>*> T& SimplePlayerDirtyDict() {
		return *(T*)((uintptr_t)this + 0x1AC);
	}
	template <typename T = float> T& m_NextShowErrorMsg() {
		return *(T*)((uintptr_t)this + 0x1B0);
	}
	template <typename T = bool> T& m_IsShowCounterUAV() {
		return *(T*)((uintptr_t)this + 0x1B4);
	}
	template <typename T = bool> T& m_IsCUAVTransparent() {
		return *(T*)((uintptr_t)this + 0x1B5);
	}
	template <typename T = bool> T& m_HasLoadCounterUAVEffect() {
		return *(T*)((uintptr_t)this + 0x1B6);
	}
	template <typename T = uintptr_t> T& m_CounterUAVEffectObj() {
		return *(T*)((uintptr_t)this + 0x1B8);
	}
	template <typename T = int32_t> T& CounterUAVEffectAssetId_T() {
		return *(T*)((uintptr_t)this + 0x1BC);
	}
	template <typename T = int32_t> T& CounterUAVEffectAssetId_O() {
		return *(T*)((uintptr_t)this + 0x1C0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Startup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseCachedRadarViewCenter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRadarBRGameHudStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreDeterminedShouldShowEnemyPawnList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRadarClippingBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateObjectBasedOnTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScaleTopRadarViewTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateObPlayers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateNormalMarkInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEnemyShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickSwitch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTacticalChipMachineListChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2MapUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MapTexture2MapUIRelativePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldPosition2TextureUIPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDroneInterfereEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRadarScaleChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRadarScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowCounterUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCounterUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCounterUAVAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCounterUAVActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRadarUITip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x279FB14))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x279FB1C))(this);
	}
	template <typename T = uintptr_t> T get_CurrentRunEscapeHud() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x279A758))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x279FB2C))(this);
	}
	template <typename T = bool> T Startup(uintptr_t inGPS) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t))(Il2CppBase() + 0x27A002C))(this, inGPS);
	}
	template <typename T = void> T InitBR() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A00F0))(this);
	}
	template <typename T = bool> T InitResources() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A0264))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A03D4))(this);
	}
	template <typename T = void> T SetAlpha(float alpha) {
		return ((T (*)(TacticalRadarViewBR*, float))(Il2CppBase() + 0x27A0960))(this, alpha);
	}
	template <typename T = void> T UseCachedRadarViewCenter(bool bDynamicMaterialLoaded) {
		return ((T (*)(TacticalRadarViewBR*, bool))(Il2CppBase() + 0x27A0588))(this, bDynamicMaterialLoaded);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A0A28))(this);
	}
	template <typename T = void> T OnRadarBRGameHudStateChange() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x2799AB4))(this);
	}
	template <typename T = bool> T PreDeterminedShouldShowEnemyPawnList() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A0AD0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A0C60))(this);
	}
	template <typename T = void> T TickInfo() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A0C68))(this);
	}
	template <typename T = void> T UpdateRadarClippingBorder() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A13A4))(this);
	}
	template <typename T = bool> T UpdateSpriteInfo(uintptr_t inSprite, Il2CppVector3 position, Il2CppQuaternion rotation, bool ignorePosition, bool ignoreRotation, bool ignoreEdge) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool, bool, bool))(Il2CppBase() + 0x1B9B480))(this, inSprite, position, rotation, ignorePosition, ignoreRotation, ignoreEdge);
	}
	template <typename T = bool> T UpdateObjectBasedOnTexture(uintptr_t inSprite, Il2CppVector3 position, Il2CppQuaternion rotation, bool ignorePosition, bool ignoreRotation, bool ignoreEdge) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, Il2CppVector3, Il2CppQuaternion, bool, bool, bool))(Il2CppBase() + 0x1B9B17C))(this, inSprite, position, rotation, ignorePosition, ignoreRotation, ignoreEdge);
	}
	template <typename T = void> T ScaleTopRadarViewTexture() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A1AAC))(this);
	}
	template <typename T = void> T UpdateMarkInfo() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A0E44))(this);
	}
	template <typename T = void> T UpdateObPlayers() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A2734))(this);
	}
	template <typename T = void> T UpdateNormalMarkInfo() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A1D6C))(this);
	}
	template <typename T = bool> T UpdateEnemyShowOnMap(uintptr_t inSprite, uintptr_t inPawn, bool onEdge) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27A3634))(this, inSprite, inPawn, onEdge);
	}
	template <typename T = void> T OnClickSwitch(uintptr_t gameObject, bool isPressed) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, bool))(Il2CppBase() + 0x27A3A14))(this, gameObject, isPressed);
	}
	template <typename T = void> T OnTacticalChipMachineListChanged() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x2799798))(this);
	}
	template <typename T = bool> T IsSameTeam(uintptr_t mySelf, uintptr_t inPawn) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27A4004))(this, mySelf, inPawn);
	}
	template <typename T = Il2CppVector2> T WorldPosition2MapUIPosition(Il2CppVector3 inSpeicifyLoc) {
		return ((T (*)(TacticalRadarViewBR*, Il2CppVector3))(Il2CppBase() + 0x27A4138))(this, inSpeicifyLoc);
	}
	template <typename T = Il2CppVector2> T MapTexture2MapUIRelativePosition() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A42C4))(this);
	}
	template <typename T = Il2CppVector2> T WorldPosition2TextureUIPosition(Il2CppVector3 inSpeicifyLoc) {
		return ((T (*)(TacticalRadarViewBR*, Il2CppVector3))(Il2CppBase() + 0x27A4478))(this, inSpeicifyLoc);
	}
	template <typename T = void> T UpdateDroneInterfereEffect() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A0F50))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(TacticalRadarViewBR*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x27A4670))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t))(Il2CppBase() + 0x27A4980))(this, itemType);
	}
	template <typename T = void> T OnRadarScaleChanged(float TargetScale) {
		return ((T (*)(TacticalRadarViewBR*, float))(Il2CppBase() + 0x27A4B88))(this, TargetScale);
	}
	template <typename T = void> T UpdateRadarScale() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A116C))(this);
	}
	template <typename T = bool> T get_IsShowCounterUAV() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A3FFC))(this);
	}
	template <typename T = void> T ShowCounterUAV(bool isTransparent) {
		return ((T (*)(TacticalRadarViewBR*, bool))(Il2CppBase() + 0x279A1CC))(this, isTransparent);
	}
	template <typename T = void> T HideCounterUAV() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x279A470))(this);
	}
	template <typename T = void> T OnCounterUAVAssetReady(int32_t assetId, uintptr_t arg) {
		return ((T (*)(TacticalRadarViewBR*, int32_t, uintptr_t))(Il2CppBase() + 0x27A4D94))(this, assetId, arg);
	}
	template <typename T = void> T SetCounterUAVActive(bool isActive) {
		return ((T (*)(TacticalRadarViewBR*, bool))(Il2CppBase() + 0x27A4C34))(this, isActive);
	}
	template <typename T = void> T ShowRadarUITip() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x2799294))(this);
	}
	template <typename T = void> T ShowRadarUITipm__0() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A51CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A5290))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Startup(uintptr_t P0) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t))(Il2CppBase() + 0x27A5298))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_InitResources() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A529C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A52A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetAlpha(float P0) {
		return ((T (*)(TacticalRadarViewBR*, float))(Il2CppBase() + 0x27A52A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A52AC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_PreDeterminedShouldShowEnemyPawnList() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A52B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_TickInfo() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A52B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateRadarClippingBorder() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A52BC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_UpdateEnemyShowOnMap(uintptr_t P0, uintptr_t P1, bool P2) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x27A52C0))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnClickSwitch(uintptr_t P0, bool P1) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, bool))(Il2CppBase() + 0x27A52D8))(this, P0, P1);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameTeam(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalRadarViewBR*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27A52DC))(this, P0, P1);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_WorldPosition2MapUIPosition(Il2CppVector3 P0) {
		return ((T (*)(TacticalRadarViewBR*, Il2CppVector3))(Il2CppBase() + 0x27A5408))(this, P0);
	}
	template <typename T = Il2CppVector2> T xLuaBaseProxy_MapTexture2MapUIRelativePosition() {
		return ((T (*)(TacticalRadarViewBR*))(Il2CppBase() + 0x27A5428))(this);
	}

};

}
