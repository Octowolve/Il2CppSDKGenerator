#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickUp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickUp"));
	}

	template <typename T = int32_t> T& AssetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& PickUpType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Param1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& SkinID() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ItemLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MeshRenderers() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_DroppedPickUpTransform() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_ServerPos() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector3> T& m_PosOffset() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector3> T& m_EulerOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& m_IsInBox() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_HasInRotation() {
		return *(T*)((uintptr_t)this + 0x5D);
	}
	template <typename T = bool> T& m_UseLowModel() {
		return *(T*)((uintptr_t)this + 0x5E);
	}
	template <typename T = int32_t> T& m_LightEffectAssetID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& ms_EffectAssetMap() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_CamoMainTexture() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_DroppedPickUpConfig() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> static T& EnableLowMemModeDropAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DropCommonAssetId_LowMemMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& DropGunAssetId_LowMemMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& gm_enable_BRTDM_LowQuality_Use_Box() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppVector3> T& LotteryRotate() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_AnimePaused() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& ShowINIPath() {
		return *(T*)((uintptr_t)this + 0x7D);
	}
	template <typename T = uintptr_t> T& m_InventoryLightEffect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_TickInventoryEffectDiff() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& DonotShowLightEffect() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReloadSelfRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnLightEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBoxObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnPickUpMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartOrPauseAnime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixLotteryTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPickUpMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DefaultScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalChangeModelAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanRegist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DistanceFromLocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickInventoryEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLightEffectPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssetAsyncCallBackFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDroppedPickUpTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowInventoryEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}

	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADBDC))(this);
	}
	template <typename T = void> T set_AssetID(int32_t value) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18ADBE4))(this, value);
	}
	template <typename T = uintptr_t> T get_PickUpType() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADBEC))(this);
	}
	template <typename T = void> T set_PickUpType(uintptr_t value) {
		return ((T (*)(BRDroppedPickUp*, uintptr_t))(Il2CppBase() + 0x18ADBF4))(this, value);
	}
	template <typename T = uintptr_t> T get_EBRPickUpInfoType() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADBFC))(this);
	}
	template <typename T = int32_t> T get_Param1() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADC04))(this);
	}
	template <typename T = void> T set_Param1(int32_t value) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18ADC0C))(this, value);
	}
	template <typename T = int32_t> T get_ActorID() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADC14))(this);
	}
	template <typename T = void> T set_ActorID(int32_t value) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18ADC1C))(this, value);
	}
	template <typename T = int32_t> T get_ItemID() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADC24))(this);
	}
	template <typename T = void> T set_ItemID(int32_t value) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18ADC2C))(this, value);
	}
	template <typename T = uint32_t> T get_SkinID() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADC34))(this);
	}
	template <typename T = void> T set_SkinID(uint32_t value) {
		return ((T (*)(BRDroppedPickUp*, uint32_t))(Il2CppBase() + 0x18ADC3C))(this, value);
	}
	template <typename T = int32_t> T get_ItemLevel() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADC44))(this);
	}
	template <typename T = void> T set_ItemLevel(int32_t value) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18ADC4C))(this, value);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADC54))(this);
	}
	template <typename T = void> T set_Count(int32_t value) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18ADC5C))(this, value);
	}
	template <typename T = int32_t> T get_LevelColor() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADC64))(this);
	}
	template <typename T = bool> T get_ForceTick() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18ADD54))(this);
	}
	template <typename T = void> T Initialize(Il2CppVector3 inPosition, Il2CppQuaternion inRotation, bool hasRot, int32_t actorID, int32_t itemID, int32_t count, uint32_t skinID, int32_t param1, uintptr_t type, bool isInBox) {
		return ((T (*)(BRDroppedPickUp*, Il2CppVector3, Il2CppQuaternion, bool, int32_t, int32_t, int32_t, uint32_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x18ADD64))(this, inPosition, inRotation, hasRot, actorID, itemID, count, skinID, param1, type, isInBox);
	}
	template <typename T = void> T ReloadSelfRotate(int32_t itemID) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18AF4E0))(this, itemID);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18AF938))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18AFA90))(this, assetID);
	}
	template <typename T = void> T DespawnLightEffect() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18AE4A0))(this);
	}
	template <typename T = void> T TickBoxObserver() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B0DD4))(this);
	}
	template <typename T = void> T SpawnPickUpMesh() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18AFC58))(this);
	}
	template <typename T = void> T StartOrPauseAnime(bool startOrPause) {
		return ((T (*)(BRDroppedPickUp*, bool))(Il2CppBase() + 0x18B1C0C))(this, startOrPause);
	}
	template <typename T = void> T FixTransform() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B1394))(this);
	}
	template <typename T = void> T FixLotteryTransform() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B1E7C))(this);
	}
	template <typename T = void> T LoadComplete() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B2148))(this);
	}
	template <typename T = void> T OnDespawn() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B23AC))(this);
	}
	template <typename T = void> T Despawn() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B2474))(this);
	}
	template <typename T = void> T ShowPickUpMesh() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18AE6A8))(this);
	}
	template <typename T = Il2CppVector3> T DefaultScale() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B2BC8))(this);
	}
	template <typename T = void> T InternalChangeModelAssetID(int32_t newItemID) {
		return ((T (*)(BRDroppedPickUp*, int32_t))(Il2CppBase() + 0x18B3088))(this, newItemID);
	}
	template <typename T = void> T ChangeScale() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B3300))(this);
	}
	template <typename T = bool> T CanRegist() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B34F8))(this);
	}
	template <typename T = bool> T TickLoader() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B35F4))(this);
	}
	template <typename T = void> T TickEffect() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B377C))(this);
	}
	template <typename T = void> T TickMovement() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B3C50))(this);
	}
	template <typename T = float> T DistanceFromLocalPlayer() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B3D18))(this);
	}
	template <typename T = bool> T get_DonotShowLightEffect() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B3FE0))(this);
	}
	template <typename T = void> T set_DonotShowLightEffect(bool value) {
		return ((T (*)(BRDroppedPickUp*, bool))(Il2CppBase() + 0x18AF4D8))(this, value);
	}
	template <typename T = void> T TickInventoryEffect() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B38F4))(this);
	}
	template <typename T = Il2CppVector3> T GetLightEffectPos() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B44B0))(this);
	}
	template <typename T = void> T OnAssetAsyncCallBackFunc(int32_t assetID, uintptr_t go) {
		return ((T (*)(BRDroppedPickUp*, int32_t, uintptr_t))(Il2CppBase() + 0x18B4750))(this, assetID, go);
	}
	template <typename T = bool> T CheckDroppedPickUpTransform() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B4FA4))(this);
	}
	template <typename T = bool> T ShouldShowInventoryEffect() {
		return ((T (*)(BRDroppedPickUp*))(Il2CppBase() + 0x18B3FE8))(this);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(BRDroppedPickUp*, uintptr_t))(Il2CppBase() + 0x18B521C))(this, other);
	}

};

}
