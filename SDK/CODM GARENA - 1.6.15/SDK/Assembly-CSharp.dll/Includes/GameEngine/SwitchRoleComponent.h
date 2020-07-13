#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SwitchRoleComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SwitchRoleComponent"));
	}

	template <typename T = uintptr_t> T& m_CurStep() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_ViewType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_PendingViewType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_1PAvatarGO() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_3PAvatarGO() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_avatar() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_AvatarID_1P() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_PendingAvatarID_1P() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& m_AvatarID_3P() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& m_PendingAvatarID_3P() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_DefaultAssetID_3P() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint64_t> T& m_ModelID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_ModelMats() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& m_ResetAvatar() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_WaitForComplete() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = float> T& TestTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& reviveFinishTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_SwitchFrame() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& FrameCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mResetTick() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mPawnSoundEventHandler_1P() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_TPAssetLoader() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& m_NeedToPullOutWeaponAttachment() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& m_SwitchTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& timeoutCount() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& FucTimeoutClock() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_LastAimState() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> static T& EnableHotFixUseGPUSkinForTPAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& EnableGPUSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5);
	}
	template <typename T = bool> static T& FixPullOutWeaponActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6);
	}
	template <typename T = bool> static T& FixPullOutWeaponCheckLastItemActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_Pending3PAssetIDs() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_RoleAssets() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BagAssets() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint64_t> static T& kDefaultModelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uint64_t> static T& wDefaultModelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = bool> static T& UseDefaultMeshIdWithCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& DefaultMeshIdWithCloth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = bool> static T& FixCheckWeaponIsActivate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& kLocalPlayerKeepLOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = void*> static T& ms_LocalPlayerWhiteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD3Params() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD2Params() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD3Params_FakePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& LOD2Params_FakePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTimeClockStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTimeClockEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_nullTimeTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchTimeTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VestBagOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuitId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSuitData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClotherData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchSuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefModelID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeadModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveLastUsedNormalWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldPlayReviveAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsViewTypeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is1PAvatarChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Is3PAvatarChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldRestartPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldNotRestartPlayerByCurrentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldAddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitOneFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecycleModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyRecordWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndStep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoEndStepCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedLoad1PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedUse1PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load1PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitFor1PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordSkinInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCanUseCombineAndGpu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseGPUSkinForTPAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRealTPAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAvatarOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldFixPullOutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldCheckLastUsedWeaponItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FixPullOutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedLoad3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedUse3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedPullOutWeaponFP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedPullOutWeaponTP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedPullOutWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPoolIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEquipIDs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load3PAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBagAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHeadAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DefaultAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReSpawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnequipVestOnResetAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3pAvatarCreate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGet3pAvatarNoPool() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitFor3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Instance3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAvatarChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x150);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load3PAvatarOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x154);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullOutWeaponAttachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x158);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WeaponAttachmentLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x15C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAvatarShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x160);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GatherTPAvatarRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x164);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnimatonInCache3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x168);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check1PAnimationSoundCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x16C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldClearTPAvatarRuntimeController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x170);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideCache3PAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x174);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLocalPlayerWhiteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x178);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsInMeshWhiteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x17C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAttachedMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x180);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAddLocalPlayerWhiteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x184);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLODs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x188);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLODs_LocalPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillLODParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x190);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillLODParams_Pawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x194);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillLODParams_KillStreakLiked_FakePawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x198);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLODs_OtherPlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x19C);
	}

	template <typename T = bool> T get_IsSwitching() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34082F0))(this);
	}
	template <typename T = void> T set_CurStep(uintptr_t value) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x3408308))(this, value);
	}
	template <typename T = uintptr_t> T get_CurStep() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3408300))(this);
	}
	template <typename T = uintptr_t> T get_ViewType() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3408318))(this);
	}
	template <typename T = void> T set_ViewType(uintptr_t value) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x3408320))(this, value);
	}
	template <typename T = uintptr_t> T get_Avatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3408330))(this);
	}
	template <typename T = int32_t> T get_AvatarID_3P() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3408338))(this);
	}
	template <typename T = bool> T get_NeedToPullOutWeaponAttachment() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3408340))(this);
	}
	template <typename T = void> T set_NeedToPullOutWeaponAttachment(bool value) {
		return ((T (*)(SwitchRoleComponent*, bool))(Il2CppBase() + 0x3408348))(this, value);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3408350))(this);
	}
	template <typename T = void> T SwitchTimeClockStart() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34088FC))(this);
	}
	template <typename T = void> T SwitchTimeClockEnd() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3408A28))(this);
	}
	template <typename T = void> static T nullTimeTick() {
		return ((T (*)(void *))(Il2CppBase() + 0x3409638))(0);
	}
	template <typename T = void> T SwitchTimeTick() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34096F8))(this);
	}
	template <typename T = Il2CppVector3> T VestBagOffset(int32_t lvl) {
		return ((T (*)(SwitchRoleComponent*, int32_t))(Il2CppBase() + 0x340A080))(this, lvl);
	}
	template <typename T = uint32_t> T GetSuitId() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340A45C))(this);
	}
	template <typename T = void> T GetSuitData(uint32_t inID, uintptr_t outModelID, uintptr_t outMatIDs) {
		return ((T (*)(SwitchRoleComponent*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x340A730))(this, inID, outModelID, outMatIDs);
	}
	template <typename T = void> T GetClotherData(uint32_t inID, uintptr_t outModelID, uintptr_t outMatIDs) {
		return ((T (*)(SwitchRoleComponent*, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x340A928))(this, inID, outModelID, outMatIDs);
	}
	template <typename T = void> T SwitchSuit() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340AB20))(this);
	}
	template <typename T = uint64_t> T GetDefModelID() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340A2C4))(this);
	}
	template <typename T = void> T SwitchRole() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340AD80))(this);
	}
	template <typename T = int32_t> T GetHeadModel() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340B6B8))(this);
	}
	template <typename T = void> T SaveLastUsedNormalWeapon() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340AF80))(this);
	}
	template <typename T = bool> T ShouldPlayReviveAnim() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340B90C))(this);
	}
	template <typename T = bool> T IsViewTypeChanged() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340BB18))(this);
	}
	template <typename T = bool> T Is1PAvatarChanged() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340BBF8))(this);
	}
	template <typename T = bool> T Is3PAvatarChanged() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340BCD8))(this);
	}
	template <typename T = bool> T ShouldRestartPlayer() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340BDB8))(this);
	}
	template <typename T = bool> T ShouldNotRestartPlayerByCurrentWeapon() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340BF90))(this);
	}
	template <typename T = bool> T ShouldAddAllInventory() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340C1CC))(this);
	}
	template <typename T = bool> T WaitOneFrame() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340C344))(this);
	}
	template <typename T = void> T RecycleModel() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340C48C))(this);
	}
	template <typename T = void> T Despawn3PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340C638))(this);
	}
	template <typename T = void> T OnBeginDestroy() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340C9F4))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(SwitchRoleComponent*, float))(Il2CppBase() + 0x340CADC))(this, deltaTime);
	}
	template <typename T = bool> T ApplyRecordWeaponInfo(uintptr_t weaponInfo) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x340D454))(this, weaponInfo);
	}
	template <typename T = void> T EndStep() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340D990))(this);
	}
	template <typename T = void> T DoEndStepCallBack(uintptr_t lastType) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x340DD8C))(this, lastType);
	}
	template <typename T = void> T OnWeaponChanged() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340DF5C))(this);
	}
	template <typename T = void> T CancelLoading() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340B390))(this);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID, uintptr_t CallBackData) {
		return ((T (*)(SwitchRoleComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x340E2B0))(this, assetID, CallBackData);
	}
	template <typename T = bool> T NeedLoad1PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340E3A4))(this);
	}
	template <typename T = bool> T NeedUse1PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340E56C))(this);
	}
	template <typename T = void> T Load1PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340E83C))(this);
	}
	template <typename T = bool> T WaitFor1PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340EA60))(this);
	}
	template <typename T = void> T RecordSkinInfo(uintptr_t mesh) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x340F414))(this, mesh);
	}
	template <typename T = bool> T CheckCanUseCombineAndGpu(int32_t assetID) {
		return ((T (*)(SwitchRoleComponent*, int32_t))(Il2CppBase() + 0x340F5A8))(this, assetID);
	}
	template <typename T = uintptr_t> T UseGPUSkinForTPAvatar(uintptr_t avatarGo) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x340F680))(this, avatarGo);
	}
	template <typename T = int32_t> T GetRealTPAssetID() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x340FC30))(this);
	}
	template <typename T = void> T LoadAvatarOver(uintptr_t mesh) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x340FD00))(this, mesh);
	}
	template <typename T = bool> T ShouldFixPullOutWeapon() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3410250))(this);
	}
	template <typename T = bool> T ShouldCheckLastUsedWeaponItem() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3410360))(this);
	}
	template <typename T = void> T FixPullOutWeapon() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3410470))(this);
	}
	template <typename T = void> T PullOutWeapon() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34106C4))(this);
	}
	template <typename T = bool> T NeedLoad3PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34107C0))(this);
	}
	template <typename T = bool> T NeedUse3PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x341094C))(this);
	}
	template <typename T = bool> T NeedPullOutWeaponFP() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3410A5C))(this);
	}
	template <typename T = bool> T NeedPullOutWeaponTP() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3410B5C))(this);
	}
	template <typename T = bool> T NeedPullOutWeapon() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3410C68))(this);
	}
	template <typename T = void> T Load3PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3410E18))(this);
	}
	template <typename T = void> T GetPoolIDs(Il2CppArray<uintptr_t>* assetIDs) {
		return ((T (*)(SwitchRoleComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x341159C))(this, assetIDs);
	}
	template <typename T = void> T GetEquipIDs(uint64_t inModelID, uintptr_t outBagID, uintptr_t outHeadID) {
		return ((T (*)(SwitchRoleComponent*, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x34119B0))(this, inModelID, outBagID, outHeadID);
	}
	template <typename T = void> T Load3PAsset(Il2CppArray<uintptr_t>* assetIDs) {
		return ((T (*)(SwitchRoleComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3412080))(this, assetIDs);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBagAssetID(int32_t defID) {
		return ((T (*)(SwitchRoleComponent*, int32_t))(Il2CppBase() + 0x3411DFC))(this, defID);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetHeadAssetID(int32_t defID) {
		return ((T (*)(SwitchRoleComponent*, int32_t))(Il2CppBase() + 0x3411B40))(this, defID);
	}
	template <typename T = int32_t> static T DefaultAssetID(bool inFemale) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x3412514))(0, inFemale);
	}
	template <typename T = void> T OnReSpawn() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34126F8))(this);
	}
	template <typename T = void> T ResetAvatar(uintptr_t model) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x340864C))(this, model);
	}
	template <typename T = void> T UnequipVestOnResetAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3412850))(this);
	}
	template <typename T = void> T On3pAvatarCreate(uintptr_t model) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x3412960))(this, model);
	}
	template <typename T = uintptr_t> T TryGet3pAvatarNoPool(int32_t assetID) {
		return ((T (*)(SwitchRoleComponent*, int32_t))(Il2CppBase() + 0x3412A30))(this, assetID);
	}
	template <typename T = bool> T WaitFor3PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3412C90))(this);
	}
	template <typename T = uintptr_t> T Instance3PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34131A8))(this);
	}
	template <typename T = void> T OnAvatarChange() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3413A2C))(this);
	}
	template <typename T = void> T OnEquipReady(int32_t id, uintptr_t obj) {
		return ((T (*)(SwitchRoleComponent*, int32_t, uintptr_t))(Il2CppBase() + 0x3413BCC))(this, id, obj);
	}
	template <typename T = void> T RemoveAnimatorController(uintptr_t go) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x340C834))(this, go);
	}
	template <typename T = void> T Load3PAvatarOver() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x341423C))(this);
	}
	template <typename T = void> T PullOutWeaponAttachment() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3414344))(this);
	}
	template <typename T = bool> T WeaponAttachmentLoadOver() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x341444C))(this);
	}
	template <typename T = void> T SwitchAvatarShow(uintptr_t viewType) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x34145B0))(this, viewType);
	}
	template <typename T = void> T GatherTPAvatarRenderer(uintptr_t list) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x3414BA4))(this, list);
	}
	template <typename T = void> T PlayAnimatonInCache3PAvatar(uintptr_t animatorController, Il2CppString* animationName) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x341510C))(this, animatorController, animationName);
	}
	template <typename T = void> T Check1PAnimationSoundCallBack() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3415A4C))(this);
	}
	template <typename T = bool> T ShouldClearTPAvatarRuntimeController() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3415C9C))(this);
	}
	template <typename T = void> T HideCache3PAvatar() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x3415D6C))(this);
	}
	template <typename T = void> static T ResetLocalPlayerWhiteList() {
		return ((T (*)(void *))(Il2CppBase() + 0x3415F4C))(0);
	}
	template <typename T = bool> static T IsInMeshWhiteList(uintptr_t mesh) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3416080))(0, mesh);
	}
	template <typename T = uintptr_t> static T GetAttachedMesh(uintptr_t rd) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34161C0))(0, rd);
	}
	template <typename T = void> T CheckAddLocalPlayerWhiteList(uintptr_t model) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x34164C4))(this, model);
	}
	template <typename T = void> T UpdateLODs(uintptr_t model) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x3413908))(this, model);
	}
	template <typename T = void> T UpdateLODs_LocalPlayer(uintptr_t model) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x3416900))(this, model);
	}
	template <typename T = bool> T FillLODParams(Il2CppArray<uintptr_t>* lods, bool isFakePawn) {
		return ((T (*)(SwitchRoleComponent*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x34178B8))(this, lods, isFakePawn);
	}
	template <typename T = bool> T FillLODParams_Pawn(Il2CppArray<uintptr_t>* lods) {
		return ((T (*)(SwitchRoleComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x34179BC))(this, lods);
	}
	template <typename T = bool> T FillLODParams_KillStreakLiked_FakePawn(Il2CppArray<uintptr_t>* lods) {
		return ((T (*)(SwitchRoleComponent*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3417BC0))(this, lods);
	}
	template <typename T = void> T UpdateLODs_OtherPlayer(uintptr_t model) {
		return ((T (*)(SwitchRoleComponent*, uintptr_t))(Il2CppBase() + 0x3417100))(this, model);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34180C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBeginDestroy() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34180D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(SwitchRoleComponent*, float))(Il2CppBase() + 0x34180D8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnWeaponChanged() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34180E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnReSpawn() {
		return ((T (*)(SwitchRoleComponent*))(Il2CppBase() + 0x34180E8))(this);
	}

};

}
