#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PawnIndividuationComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PawnIndividuationComponent"));
	}

	template <typename T = unsigned char> T& IndividuationCanclIndex() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = uintptr_t> T& m_AnimationComponent() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& SoundStopEvent_FirstPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SoundStopEvent_ThirdPerson() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& AnimatorCacheAssest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& m_IsLocalPlayer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsPlaying() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& m_CheckStop() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = uintptr_t> T& m_PawnViewType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& m_IndividuationItemId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& m_IndividuationIndex() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& m_IndividuationAnimName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_IndividuationAnimNameID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_IndividuationAnimTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_IndividuationEffectID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_IndividuationWaitCloseAimStartTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& m_IndividuationLastPosIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_IndividuationEffectWaitTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_EffectBone() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CurrentIndividuationPlayTask() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> static T& DefaultItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimationTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitIndividuationPlayData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Destroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStartPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStopPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFirstCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRoleID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIndividuationController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnIndidviduationTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStandWall() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInitPlayIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPlayIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForcePlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseAimOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDieStopPlayIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ServerStopPlayIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LocalStopPlayIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopPlayIndividuationAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterPostPlayCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterPostPlayCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulatePlayIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateStopIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}

	template <typename T = void> static T LoadAsset() {
		return ((T (*)(void *))(Il2CppBase() + 0x16AE2C0))(0);
	}
	template <typename T = void> static T OnAssetLoad(int32_t assetId, uintptr_t param) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x16AE5A8))(0, assetId, param);
	}
	template <typename T = float> static T GetAnimationTime(Il2CppString* name, int32_t roleId) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x16AE7AC))(0, name, roleId);
	}
	template <typename T = uintptr_t> static T GetAnimatorController(int32_t roleId) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16AE9D4))(0, roleId);
	}
	template <typename T = bool> T get_IsPlayingIndividuation() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x162F0C4))(this);
	}
	template <typename T = uint32_t> T get_CurrentIndividuationId() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AECF8))(this);
	}
	template <typename T = uint32_t> T get_CurrentIndividuationIndex() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AED00))(this);
	}
	template <typename T = Il2CppString*> T get_CurrentIndividuationAnimName() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AED08))(this);
	}
	template <typename T = int32_t> T get_CurrentIndividuationAnimNameID() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AED10))(this);
	}
	template <typename T = float> T get_CurrentIndividuationAnimTime() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AED18))(this);
	}
	template <typename T = int32_t> T get_IndividuationEffectID() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AED20))(this);
	}
	template <typename T = void> T InitIndividuationPlayData(uint32_t itemId, uint32_t index) {
		return ((T (*)(PawnIndividuationComponent*, uint32_t, uint32_t))(Il2CppBase() + 0x16AED28))(this, itemId, index);
	}
	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(PawnIndividuationComponent*, uintptr_t))(Il2CppBase() + 0x16AF124))(this, pawn);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AF268))(this);
	}
	template <typename T = void> T OnStartPlay() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AF3FC))(this);
	}
	template <typename T = void> T OnStopPlay() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AF4D0))(this);
	}
	template <typename T = void> T SetFirstCamera(bool isEnabled) {
		return ((T (*)(PawnIndividuationComponent*, bool))(Il2CppBase() + 0x16AF5F4))(this, isEnabled);
	}
	template <typename T = int32_t> T GetRoleID() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AEFC8))(this);
	}
	template <typename T = uintptr_t> T GetIndividuationController() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AF714))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PawnIndividuationComponent*, float))(Il2CppBase() + 0x16AF824))(this, deltaTime);
	}
	template <typename T = void> T OnReSpawn() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AF9AC))(this);
	}
	template <typename T = void> T UnIndidviduationTips() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AFA98))(this);
	}
	template <typename T = bool> T CheckStandWall() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16AFD3C))(this);
	}
	template <typename T = bool> T CheckInitPlayIndividuationAnim(uint32_t itemid, uint32_t posIndex) {
		return ((T (*)(PawnIndividuationComponent*, uint32_t, uint32_t))(Il2CppBase() + 0x16AFFF0))(this, itemid, posIndex);
	}
	template <typename T = void> T StartPlayIndividuationAnim(uint32_t posIndex) {
		return ((T (*)(PawnIndividuationComponent*, uint32_t))(Il2CppBase() + 0x16B0530))(this, posIndex);
	}
	template <typename T = bool> T ForcePlay(uint32_t itemID, uint32_t posIndex) {
		return ((T (*)(PawnIndividuationComponent*, uint32_t, uint32_t))(Il2CppBase() + 0x16521E8))(this, itemID, posIndex);
	}
	template <typename T = void> T OnCloseAimOver() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B07D4))(this);
	}
	template <typename T = void> T OnDieStopPlayIndividuationAnim() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x165D228))(this);
	}
	template <typename T = void> T ServerStopPlayIndividuationAnim() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16708FC))(this);
	}
	template <typename T = void> T LocalStopPlayIndividuationAnim() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B08D4))(this);
	}
	template <typename T = void> T StopPlayIndividuationAnim() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16528C8))(this);
	}
	template <typename T = void> T RegisterPostPlayCallback(uintptr_t callback) {
		return ((T (*)(PawnIndividuationComponent*, uintptr_t))(Il2CppBase() + 0x1652598))(this, callback);
	}
	template <typename T = void> T UnRegisterPostPlayCallback(uintptr_t callback) {
		return ((T (*)(PawnIndividuationComponent*, uintptr_t))(Il2CppBase() + 0x16B0D50))(this, callback);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B0F5C))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B10D8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B1254))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B1340))(this);
	}
	template <typename T = void> T SimulateUseItem(uint32_t itemId) {
		return ((T (*)(PawnIndividuationComponent*, uint32_t))(Il2CppBase() + 0x16707E4))(this, itemId);
	}
	template <typename T = void> T SimulatePlayIndividuation() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B14A4))(this);
	}
	template <typename T = void> T SimulateStopIndividuation() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x1670BEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(PawnIndividuationComponent*, uintptr_t))(Il2CppBase() + 0x16B16AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Destroy() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B16B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PawnIndividuationComponent*, float))(Il2CppBase() + 0x16B16BC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawn() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B16C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B16CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B16D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B16DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(PawnIndividuationComponent*))(Il2CppBase() + 0x16B16E4))(this);
	}

};

}
