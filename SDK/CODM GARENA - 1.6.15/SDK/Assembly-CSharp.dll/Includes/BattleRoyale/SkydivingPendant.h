#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SkydivingPendant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SkydivingPendant"));
	}

	template <typename T = bool> static T& AnimNeedLerp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_PendantType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_PendantAnimator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& m_SwitchAnimController() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& AnimForwardValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& AnimRightValue() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& AnimDownValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_WaitBindPlayer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_AssetLoading() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_CreateAsset() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = uintptr_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NETAssetID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& NETMatID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& NETCamoTextureID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_PendantComponent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_Calc() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_IsBinded() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_CanCreateAsset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = void*> T& m_BindCallBack() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppArray<uintptr_t>*>*> T& m_BackupMaterials() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppString*> static T& SHADER_Prop_DetailAlbedoMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSkydivingRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOwner() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetListReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetReadyInternal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameObjectCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshNetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetAssetIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBindPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnUnbind() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnbindByDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRenderers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetToFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePendent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPendent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenPendant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClosePendant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCalcProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnimRightAndForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnimDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyAnimValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnimValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerLand() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecoverMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}

	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(SkydivingPendant*, uintptr_t))(Il2CppBase() + 0x3575E24))(this, value);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575E2C))(this);
	}
	template <typename T = uintptr_t> T get_PendantType() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575E34))(this);
	}
	template <typename T = uintptr_t> T get_PendantAnimator() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575E3C))(this);
	}
	template <typename T = bool> T get_SwitchAnimController() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575E44))(this);
	}
	template <typename T = void> T set_SwitchAnimController(bool value) {
		return ((T (*)(SkydivingPendant*, bool))(Il2CppBase() + 0x3575E4C))(this, value);
	}
	template <typename T = uintptr_t> T get_RealAssetID() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575E54))(this);
	}
	template <typename T = uintptr_t> T get_PendantComponent() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575E68))(this);
	}
	template <typename T = void> T set_PawnRotateTargetValue(Il2CppVector2 value) {
		return ((T (*)(SkydivingPendant*, Il2CppVector2))(Il2CppBase() + 0x3575E70))(this, value);
	}
	template <typename T = Il2CppVector2> T get_PawnRotateTargetValue() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575E98))(this);
	}
	template <typename T = float> T get_CameraRotateTargetValue() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575EC8))(this);
	}
	template <typename T = bool> T get_AssetCreated() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3575FA8))(this);
	}
	template <typename T = bool> T get_IsBinded() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3576058))(this);
	}
	template <typename T = void> T set_IsBinded(bool value) {
		return ((T (*)(SkydivingPendant*, bool))(Il2CppBase() + 0x3576060))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSkydivingRenderers() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3576068))(this);
	}
	template <typename T = void> T SetOwner(uintptr_t owner) {
		return ((T (*)(SkydivingPendant*, uintptr_t))(Il2CppBase() + 0x3576484))(this, owner);
	}
	template <typename T = void> T OnAssetListReady(Il2CppArray<uintptr_t>* id, uintptr_t obj) {
		return ((T (*)(SkydivingPendant*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3576624))(this, id, obj);
	}
	template <typename T = void> T OnAssetReadyInternal(uintptr_t obj) {
		return ((T (*)(SkydivingPendant*, uintptr_t))(Il2CppBase() + 0x357671C))(this, obj);
	}
	template <typename T = void> T OnGameObjectCreate(uintptr_t go) {
		return ((T (*)(SkydivingPendant*, uintptr_t))(Il2CppBase() + 0x3577340))(this, go);
	}
	template <typename T = void> T RefreshNetAssetID() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3577B6C))(this);
	}
	template <typename T = bool> T IsAssetReady(int32_t assetID) {
		return ((T (*)(SkydivingPendant*, int32_t))(Il2CppBase() + 0x3577C34))(this, assetID);
	}
	template <typename T = Il2CppList<int32_t>*> T GetAssetIDs() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3577D78))(this);
	}
	template <typename T = void> T OnGetAssetIDs(uintptr_t assetIDs) {
		return ((T (*)(SkydivingPendant*, uintptr_t))(Il2CppBase() + 0x3577F9C))(this, assetIDs);
	}
	template <typename T = void> T PreloadRes() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x357806C))(this);
	}
	template <typename T = void> T BindPlayer() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3578638))(this);
	}
	template <typename T = void> T OnBindPlayer() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3578C98))(this);
	}
	template <typename T = void> T Unbind(bool forceDestory) {
		return ((T (*)(SkydivingPendant*, bool))(Il2CppBase() + 0x3578D60))(this, forceDestory);
	}
	template <typename T = void> T OnUnbind(bool forceDestory) {
		return ((T (*)(SkydivingPendant*, bool))(Il2CppBase() + 0x3579170))(this, forceDestory);
	}
	template <typename T = void> T UnbindByDestroy() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3579240))(this);
	}
	template <typename T = void> T ShowRenderers(bool bShow) {
		return ((T (*)(SkydivingPendant*, bool))(Il2CppBase() + 0x3579560))(this, bShow);
	}
	template <typename T = void> T ResetToFlyStatus() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3579944))(this);
	}
	template <typename T = void> T HidePendent() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x357A1D0))(this);
	}
	template <typename T = void> T ShowPendent() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3579D04))(this);
	}
	template <typename T = void> T OpenPendant() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x357A4B0))(this);
	}
	template <typename T = void> T ClosePendant() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x357A5A4))(this);
	}
	template <typename T = uintptr_t> T GetParent() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x357A688))(this);
	}
	template <typename T = void> T RefreshCalcProp() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x3578A34))(this);
	}
	template <typename T = void> T UpdateSkydivingAnim(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(SkydivingPendant*, Il2CppVector2, float))(Il2CppBase() + 0x357A758))(this, movementInput, deltaTime);
	}
	template <typename T = void> T UpdateSkydivingAnimRightAndForward(float right, float forward) {
		return ((T (*)(SkydivingPendant*, float, float))(Il2CppBase() + 0x357AA4C))(this, right, forward);
	}
	template <typename T = void> T UpdateSkydivingAnimDown(float animDownValue) {
		return ((T (*)(SkydivingPendant*, float))(Il2CppBase() + 0x357AD78))(this, animDownValue);
	}
	template <typename T = void> T CopyAnimValue(uintptr_t pendant) {
		return ((T (*)(SkydivingPendant*, uintptr_t))(Il2CppBase() + 0x357B004))(this, pendant);
	}
	template <typename T = void> T UpdateSkydivingAnimValue(float right, float forward, float down) {
		return ((T (*)(SkydivingPendant*, float, float, float))(Il2CppBase() + 0x357B10C))(this, right, forward, down);
	}
	template <typename T = void> T TriggerLand(bool isLandRun) {
		return ((T (*)(SkydivingPendant*, bool))(Il2CppBase() + 0x357B220))(this, isLandRun);
	}
	template <typename T = void> T RecoverMaterial() {
		return ((T (*)(SkydivingPendant*))(Il2CppBase() + 0x357B440))(this);
	}
	template <typename T = void> T ChangeMaterial(uintptr_t matID) {
		return ((T (*)(SkydivingPendant*, uintptr_t))(Il2CppBase() + 0x3577428))(this, matID);
	}
	template <typename T = void> T ChangeTexture(uintptr_t srcMaterial, uintptr_t textureID) {
		return ((T (*)(SkydivingPendant*, uintptr_t, uintptr_t))(Il2CppBase() + 0x357B6AC))(this, srcMaterial, textureID);
	}

};

}
