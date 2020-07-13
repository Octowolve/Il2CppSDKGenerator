#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBagWeaponAvatarComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBagWeaponAvatarComponent"));
	}

	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& Weapon_Socket_Root() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& Weapon_L_B_Socket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& Weapon_R_B_Socket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& Weapon_Chest_B_Socket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppVector3> static T& Weapon_Chest_B_Socket_Pos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppVector3> static T& Weapon_Chest_B_Socket_Euler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BagWeaponInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PendingAddWeaponInfoList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& FrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = bool> T& m_IsHidden() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& CurrentWeaponAvatarMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& CurrentWeaponActive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_TransitionTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_TargetWeaponActorId() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_TargetWeaponItemId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& m_CurrentTransitionTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> static T& EquipPercent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = float> static T& UnEquipPrcent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EquipAttachmentBagWeaponInfoList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_EquipAttachmentEmptyBagWeaponInfoList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_ShouldRunningBagAvatar() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetServerRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalAddWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayActiveBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndWeaponAvatarTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PendingActiveBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExchangedBagWeaponPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateWeaponAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindParent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPawnInitMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSwitchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveWeaponAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCheckSocket() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchWeaponToChest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AttachWeaponToBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwithWeaponAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActiveMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowMeshRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckBagWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentWeaponHidden() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCurrentWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndTickWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndCurrentWeaponProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipAttachmentBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnEquipAttachmentBagWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveSameCategoryHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponPartLoadReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckForceLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRunningBagAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = void> T Init(uintptr_t pawn) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24D5534))(this, pawn);
	}
	template <typename T = void> T SetServerRelevant(bool isRelevant) {
		return ((T (*)(BRBagWeaponAvatarComponent*, bool))(Il2CppBase() + 0x24D5818))(this, isRelevant);
	}
	template <typename T = void> T InternalAddWeapon(int32_t weaponActorID, int32_t weaponItemID, unsigned char weaponSlot, int32_t weaponItemlv, uint32_t skinID, bool is1P) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t, unsigned char, int32_t, uint32_t, bool))(Il2CppBase() + 0x24D5990))(this, weaponActorID, weaponItemID, weaponSlot, weaponItemlv, skinID, is1P);
	}
	template <typename T = void> T RecycleBagWeapon() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D7334))(this);
	}
	template <typename T = void> T AddWeapon(int32_t weaponActorID, int32_t weaponItemID, unsigned char weaponSlot, int32_t weaponItemlv, uint32_t skinID, bool is1P) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t, unsigned char, int32_t, uint32_t, bool))(Il2CppBase() + 0x24D7494))(this, weaponActorID, weaponItemID, weaponSlot, weaponItemlv, skinID, is1P);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(BRBagWeaponAvatarComponent*, float))(Il2CppBase() + 0x24D7670))(this, deltaTime);
	}
	template <typename T = void> T DelayActiveBagWeapon(float delayTime, int32_t weaponActorID, int32_t weaponItemID) {
		return ((T (*)(BRBagWeaponAvatarComponent*, float, int32_t, int32_t))(Il2CppBase() + 0x24D7ABC))(this, delayTime, weaponActorID, weaponItemID);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D7F98))(this);
	}
	template <typename T = void> T ResetWeaponAvatar() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D83EC))(this);
	}
	template <typename T = void> T EndWeaponAvatarTick() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D84CC))(this);
	}
	template <typename T = void> T PendingActiveBagWeapon(int32_t actorID, int32_t itemID) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t))(Il2CppBase() + 0x24D85B8))(this, actorID, itemID);
	}
	template <typename T = void> T ExchangedBagWeaponPos() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D8A28))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t))(Il2CppBase() + 0x24D978C))(this, assetID);
	}
	template <typename T = uintptr_t> T CreateWeaponAvatar(int32_t weaponActorID, int32_t weaponItemID, int32_t weaponMeshID, int32_t weaponItemLevel) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x24DAB68))(this, weaponActorID, weaponItemID, weaponMeshID, weaponItemLevel);
	}
	template <typename T = void> T BindParent(uintptr_t bagWeaponInfo) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24DB7EC))(this, bagWeaponInfo);
	}
	template <typename T = void> T OnPawnInitMesh() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DC190))(this);
	}
	template <typename T = void> T OnSwitchRole() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DC270))(this);
	}
	template <typename T = void> T OnSwitchView() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DC48C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DC5A0))(this);
	}
	template <typename T = void> T OnBeginDestroy() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DC678))(this);
	}
	template <typename T = void> T RemoveWeaponAvatar(int32_t weaponActorID, int32_t weaponItemID) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t))(Il2CppBase() + 0x24D6538))(this, weaponActorID, weaponItemID);
	}
	template <typename T = uintptr_t> T GetCheckSocket() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DC760))(this);
	}
	template <typename T = void> T SwitchWeaponToChest(uintptr_t weapon) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24DCB50))(this, weapon);
	}
	template <typename T = void> T AttachWeaponToBack(uintptr_t weapon) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24DCDFC))(this, weapon);
	}
	template <typename T = void> T SwithWeaponAvatar(int32_t weaponActorID, uintptr_t transform) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x24DD570))(this, weaponActorID, transform);
	}
	template <typename T = void> T SetHidden(bool isHidden) {
		return ((T (*)(BRBagWeaponAvatarComponent*, bool))(Il2CppBase() + 0x24DBF9C))(this, isHidden);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBagWeapon() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DDFE0))(this);
	}
	template <typename T = void> T ActiveMesh(uintptr_t mesh, int32_t itemID, bool isActive) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t, int32_t, bool))(Il2CppBase() + 0x24D87B0))(this, mesh, itemID, isActive);
	}
	template <typename T = void> T ShowMeshRenderer(uintptr_t trans) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24DDE30))(this, trans);
	}
	template <typename T = bool> T get_InTickWeaponMode() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D7868))(this);
	}
	template <typename T = void> T TickWeaponActive(float deltaTime) {
		return ((T (*)(BRBagWeaponAvatarComponent*, float))(Il2CppBase() + 0x24D7878))(this, deltaTime);
	}
	template <typename T = void> T CheckBagWeaponActive(uintptr_t weaponInfo) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24D7C8C))(this, weaponInfo);
	}
	template <typename T = bool> T IsCurrentWeaponHidden() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DE6FC))(this);
	}
	template <typename T = void> T SetCurrentWeaponActive(bool isActive) {
		return ((T (*)(BRBagWeaponAvatarComponent*, bool))(Il2CppBase() + 0x24DE4B0))(this, isActive);
	}
	template <typename T = void> T EndTickWeaponActive() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DE20C))(this);
	}
	template <typename T = void> T UnEquipWeapon(int32_t weaponActorId, int32_t weaponItemId, float unquipTime) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t, float))(Il2CppBase() + 0x24DE7D8))(this, weaponActorId, weaponItemId, unquipTime);
	}
	template <typename T = void> T EquipWeapon(int32_t weaponActorId, int32_t weaponItemId, float equipTime) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t, float))(Il2CppBase() + 0x24DEA70))(this, weaponActorId, weaponItemId, equipTime);
	}
	template <typename T = void> T EndCurrentWeaponProcessing() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DC384))(this);
	}
	template <typename T = void> T EquipAttachmentBagWeapon(int32_t attachmentActorID, int32_t attachmentId, int32_t weaponActorID, int32_t weaponItemID) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x24D6C40))(this, attachmentActorID, attachmentId, weaponActorID, weaponItemID);
	}
	template <typename T = void> T UnEquipAttachmentBagWeapon(int32_t attachmentActorID, int32_t weaponActorID) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, int32_t))(Il2CppBase() + 0x24DF47C))(this, attachmentActorID, weaponActorID);
	}
	template <typename T = void> T RemoveSameCategoryHud(int32_t srcAttachmentId, uintptr_t weaponInfo) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x24DED18))(this, srcAttachmentId, weaponInfo);
	}
	template <typename T = void> T OnWeaponPartLoadReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(BRBagWeaponAvatarComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x24DF94C))(this, assetID, obj);
	}
	template <typename T = void> T CheckForceLOD(uintptr_t asset) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24DDBB0))(this, asset);
	}
	template <typename T = void> T InitRunningBagAvatar() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D56E4))(this);
	}
	template <typename T = bool> T get_ShouldRunningBagAvatar() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24D7668))(this);
	}
	template <typename T = bool> T get_IsServerRelevant() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24DE914))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRBagWeaponAvatarComponent*, uintptr_t))(Il2CppBase() + 0x24E109C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_SetServerRelevant(bool P0) {
		return ((T (*)(BRBagWeaponAvatarComponent*, bool))(Il2CppBase() + 0x24E10A4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BRBagWeaponAvatarComponent*, float))(Il2CppBase() + 0x24E10AC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24E10B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchRole() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24E10BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnSwitchView() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24E10C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24E10CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginDestroy() {
		return ((T (*)(BRBagWeaponAvatarComponent*))(Il2CppBase() + 0x24E10D4))(this);
	}

};

}
