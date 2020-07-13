#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BROffScreenTeammateInfoHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BROffScreenTeammateInfoHud"));
	}

	template <typename T = uintptr_t> T& widget() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& ObjPosInfo() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ObjDieInfo() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& ObjHurtInfo() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& ObjAirPlaneInfo() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& ObjVehivleInfo() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& ObjCarInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& ObjBoatingInfo() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& ObjHelicopterInfo() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ObjSkyDivingInfo() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& ObjReviveInfo() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& ObjOfflineInfo() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& TargetArrow() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& TxtNum() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = uintptr_t> T& TxtDistance() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& CdBg() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& SpritePos() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& SpriteDie() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = uintptr_t> T& SpriteHurt() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& SpriteAirPlane() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& SpriteCar() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& SpriteBoating() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& SpriteHelicopter() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& SpriteSkyDiving() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& SpriteRevive() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& SpriteOffline() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& TxtOffLineNum() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& m_Info() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = float> static T& YOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DieWaitTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& PosOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& FarestDis() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& TotalPropDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& minOverlapSize() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = float> T& m_DieTime() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& m_Distance() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = uintptr_t> T& m_UIScene() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& m_ETacticalPawnState() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = int32_t> T& mLastDist() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSeatIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeammetaInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeammetaPawnInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTeammateStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTeammetaPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHurt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkyDiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRevive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehivle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirplane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTargetArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCdBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoSetOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOverlapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsOverlapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uint32_t> T get_PlayerID() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAA04C))(this);
	}
	template <typename T = uintptr_t> T get_Info() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAA060))(this);
	}
	template <typename T = void> T Init(uint32_t playerID) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uint32_t))(Il2CppBase() + 0x2DAA068))(this, playerID);
	}
	template <typename T = void> T Init_1(uintptr_t info) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uintptr_t))(Il2CppBase() + 0x2DAA2FC))(this, info);
	}
	template <typename T = void> T Init_2() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAAD14))(this);
	}
	template <typename T = void> T OnApplicationPause(bool paused) {
		return ((T (*)(BROffScreenTeammateInfoHud*, bool))(Il2CppBase() + 0x2DAB054))(this, paused);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAB1A4))(this);
	}
	template <typename T = uint32_t> T GetSeatIndex(uint32_t playerId) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uint32_t))(Il2CppBase() + 0x2DAB258))(this, playerId);
	}
	template <typename T = void> T UpdateTeammetaInfo(uint32_t playerID) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uint32_t))(Il2CppBase() + 0x2DAA17C))(this, playerID);
	}
	template <typename T = void> T UpdateTeammetaPawnInfo(uint32_t playerID) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uint32_t))(Il2CppBase() + 0x2DAB404))(this, playerID);
	}
	template <typename T = void> T UpdateUI() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAB744))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAB800))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAB908))(this);
	}
	template <typename T = void> T OnTeammateStateChange(uintptr_t msg) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uintptr_t))(Il2CppBase() + 0x2DAB9B8))(this, msg);
	}
	template <typename T = void> T UpdateState(uintptr_t state) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uintptr_t))(Il2CppBase() + 0x2DAA5D4))(this, state);
	}
	template <typename T = void> T UpdateIcon(uint32_t teamNumID) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uint32_t))(Il2CppBase() + 0x2DAAA20))(this, teamNumID);
	}
	template <typename T = Il2CppString*> T GetIcon(uintptr_t state, uint32_t teamNumID, uintptr_t pawnState) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uintptr_t, uint32_t, uintptr_t))(Il2CppBase() + 0x2DABB68))(this, state, teamNumID, pawnState);
	}
	template <typename T = void> T HideAll() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAA4E8))(this);
	}
	template <typename T = void> T Show() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAC158))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAC244))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BROffScreenTeammateInfoHud*, float))(Il2CppBase() + 0x2DAC24C))(this, dt);
	}
	template <typename T = bool> T CheckInfo() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAC670))(this);
	}
	template <typename T = void> T UpdateTeammetaPos(float distance, Il2CppVector3 worldPos) {
		return ((T (*)(BROffScreenTeammateInfoHud*, float, Il2CppVector3))(Il2CppBase() + 0x2DACBA4))(this, distance, worldPos);
	}
	template <typename T = void> T UpdateHurt() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAD1AC))(this);
	}
	template <typename T = void> T UpdateDie() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DACFC0))(this);
	}
	template <typename T = void> T UpdateSkyDiving() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAD374))(this);
	}
	template <typename T = void> T UpdateRevive() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAD40C))(this);
	}
	template <typename T = void> T UpdateVehivle() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAD2DC))(this);
	}
	template <typename T = void> T UpdateAirplane() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAD244))(this);
	}
	template <typename T = void> T UpdateTargetArrow(Il2CppVector3 worldPos) {
		return ((T (*)(BROffScreenTeammateInfoHud*, Il2CppVector3))(Il2CppBase() + 0x2DAD7A8))(this, worldPos);
	}
	template <typename T = void> T UpdateCdBg(float remainTime, float totalTime) {
		return ((T (*)(BROffScreenTeammateInfoHud*, float, float))(Il2CppBase() + 0x2DAD99C))(this, remainTime, totalTime);
	}
	template <typename T = void> T AutoSetOffset() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAD66C))(this);
	}
	template <typename T = bool> T IsOverlapping(Il2CppList<uintptr_t>* huds) {
		return ((T (*)(BROffScreenTeammateInfoHud*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2DADB00))(this, huds);
	}
	template <typename T = bool> T IsOverlapping_1(uintptr_t hud) {
		return ((T (*)(BROffScreenTeammateInfoHud*, uintptr_t))(Il2CppBase() + 0x2DADED8))(this, hud);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAE100))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnApplicationPause(bool P0) {
		return ((T (*)(BROffScreenTeammateInfoHud*, bool))(Il2CppBase() + 0x2DAE108))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAE10C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BROffScreenTeammateInfoHud*))(Il2CppBase() + 0x2DAE110))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BROffScreenTeammateInfoHud*, float))(Il2CppBase() + 0x2DAE114))(this, P0);
	}

};

}
