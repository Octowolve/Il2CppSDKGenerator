#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class AvatarControllerSquad
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "AvatarController_Squad"));
	}

	template <typename T = uintptr_t> T& m_AvatarView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_GuideAssetID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mGlobalDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mRandomActionTimer1() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mRandomActionTimer2() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mRandomActionTimer3() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mRandomActionTimer4() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mRandomActionTimer5() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> static T& mMinRandomSecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& mMaxRandomSecond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDataStore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_Type() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& cacheSwitchTransform() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> static T& IsNeedWeaponResetRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseCustomTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRandomPlayActionTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomTimer1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomTimer2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomTimer3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomTimer4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCustomTimer5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RandomPlayActionByTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNamesTransformList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEncourageTeamTrasnformList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAvatarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAvatarType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAvatarView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsFemale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelfModelInSquadLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelfModelInPveSquadLobby() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSingleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBRSingleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChangeSquadAvatarAtPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyChangeSquadAvatarAtPosition_BRSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAvatarAtPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomHideAvatarsExcept() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllMembers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAllMembersExcpt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyHideAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRestoreAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyStopAvatarAudio() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvatarAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeaponPart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOwnerAvatarItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RoomChangeAvatarAtPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceUpdateRole() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeaponForSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EquipWeaponWithData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLauncherSocketById() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWeaponView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowWeaponController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeaponShowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleCameraMoveToWeaponRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMoveToWeaponRootFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetWeaponRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleCameraResetFromWeaponRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetFromWeaponRootFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D876C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D883C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D8B44))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D8CA8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D8DF4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D93C4))(this);
	}
	template <typename T = uintptr_t> T CloseCustomTimer(uintptr_t timer) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32D94EC))(this, timer);
	}
	template <typename T = void> T SetRandomPlayActionTimer(int32_t pos) {
		return ((T (*)(AvatarControllerSquad*, int32_t))(Il2CppBase() + 0x32D8F08))(this, pos);
	}
	template <typename T = void> T OnCustomTimer1() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D95D8))(this);
	}
	template <typename T = void> T OnCustomTimer2() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D9900))(this);
	}
	template <typename T = void> T OnCustomTimer3() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D99D8))(this);
	}
	template <typename T = void> T OnCustomTimer4() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D9AB0))(this);
	}
	template <typename T = void> T OnCustomTimer5() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D9B88))(this);
	}
	template <typename T = void> T RandomPlayActionByTimer(int32_t pos) {
		return ((T (*)(AvatarControllerSquad*, int32_t))(Il2CppBase() + 0x32D96B0))(this, pos);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetNamesTransformList() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D9C60))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetEncourageTeamTrasnformList() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32D9DAC))(this);
	}
	template <typename T = void> T ShowAvatarView(bool show) {
		return ((T (*)(AvatarControllerSquad*, bool))(Il2CppBase() + 0x32D9EF8))(this, show);
	}
	template <typename T = void> T SwitchAvatarType(uintptr_t type) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32DA184))(this, type);
	}
	template <typename T = void> T InitAvatarView() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32DA4CC))(this);
	}
	template <typename T = bool> T IsFemale(uint64_t modelId) {
		return ((T (*)(AvatarControllerSquad*, uint64_t))(Il2CppBase() + 0x32DA97C))(this, modelId);
	}
	template <typename T = void> T ShowSelfModelInSquadLobby(uintptr_t squadType, uintptr_t member) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32DAAE8))(this, squadType, member);
	}
	template <typename T = void> T ShowSelfModelInPveSquadLobby(uintptr_t squadType, uintptr_t member) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32DB5F0))(this, squadType, member);
	}
	template <typename T = void> T ShowSingleAvatar(uintptr_t squadType, uintptr_t role, int32_t loadoutIdx, uintptr_t animatorController, uintptr_t animatorController_FM, Il2CppString* defaultAnimationName, Il2CppQuaternion defaultLocalRotation) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, Il2CppString*, Il2CppQuaternion))(Il2CppBase() + 0x32DBBDC))(this, squadType, role, loadoutIdx, animatorController, animatorController_FM, defaultAnimationName, defaultLocalRotation);
	}
	template <typename T = void> T ShowBRSingleAvatar(uintptr_t brLoadout, uintptr_t animatorController, uintptr_t animatorController_FM, Il2CppString* defaultAnimationName) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x32DC250))(this, brLoadout, animatorController, animatorController_FM, defaultAnimationName);
	}
	template <typename T = void> T OnNotifyChangeSquadAvatarAtPosition(uintptr_t Msg) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32DC72C))(this, Msg);
	}
	template <typename T = void> T OnNotifyChangeSquadAvatarAtPosition_BRSelf(uintptr_t Msg) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32DD178))(this, Msg);
	}
	template <typename T = void> T ChangeAvatarAtPos(uintptr_t weapon, uintptr_t role, uintptr_t squadType, Il2CppDictionary<uintptr_t, uintptr_t>* roleSkinMap, int32_t loadoutIdx, bool bPlayEntranAni, bool bResetRotation, bool forceRefresh) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t, uintptr_t, uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*, int32_t, bool, bool, bool))(Il2CppBase() + 0x32DCC64))(this, weapon, role, squadType, roleSkinMap, loadoutIdx, bPlayEntranAni, bResetRotation, forceRefresh);
	}
	template <typename T = void> T RoomHideAvatarsExcept(Il2CppList<int32_t>* exceptList) {
		return ((T (*)(AvatarControllerSquad*, Il2CppList<int32_t>*))(Il2CppBase() + 0x32DDB54))(this, exceptList);
	}
	template <typename T = void> T HideAllMembers() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32DC10C))(this);
	}
	template <typename T = void> T HideAllMembersExcpt(int32_t pos) {
		return ((T (*)(AvatarControllerSquad*, int32_t))(Il2CppBase() + 0x32DB0D4))(this, pos);
	}
	template <typename T = void> T SetVisible(bool visible) {
		return ((T (*)(AvatarControllerSquad*, bool))(Il2CppBase() + 0x32DDCA4))(this, visible);
	}
	template <typename T = void> T OnNotifyHideAvatar(uintptr_t Msg) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32DDE54))(this, Msg);
	}
	template <typename T = void> T OnNotifyRestoreAvatar(uintptr_t Msg) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32DE020))(this, Msg);
	}
	template <typename T = void> T OnNotifyStopAvatarAudio(uintptr_t Msg) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32DE16C))(this, Msg);
	}
	template <typename T = uintptr_t> T GetAvatarAssetID(uint64_t roleID, bool bBR) {
		return ((T (*)(AvatarControllerSquad*, uint64_t, bool))(Il2CppBase() + 0x32DB224))(this, roleID, bBR);
	}
	template <typename T = uintptr_t> T GetWeaponAssetID(uint32_t weaponID) {
		return ((T (*)(AvatarControllerSquad*, uint32_t))(Il2CppBase() + 0x32DE2B8))(this, weaponID);
	}
	template <typename T = void> T EquipWeaponPart(uintptr_t avatarItem, uintptr_t weapAssetID, uint32_t weaponID) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t, uintptr_t, uint32_t))(Il2CppBase() + 0x32DE404))(this, avatarItem, weapAssetID, weaponID);
	}
	template <typename T = uintptr_t> T GetOwnerAvatarItem() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32DED58))(this);
	}
	template <typename T = void> T RoomChangeAvatarAtPos(int32_t pos, int32_t roleID, Il2CppDictionary<uintptr_t, uintptr_t>* roleSkinMap, uint32_t weaponId, uint32_t skinId, Il2CppList<uintptr_t>* attachList, uintptr_t ornamentItem, uint32_t professionChip, uint32_t professionChipSkinID, bool bBRModel, bool bDisplay, bool bPlayEntranAni, bool bResetPosition) {
		return ((T (*)(AvatarControllerSquad*, int32_t, int32_t, Il2CppDictionary<uintptr_t, uintptr_t>*, uint32_t, uint32_t, Il2CppList<uintptr_t>*, uintptr_t, uint32_t, uint32_t, bool, bool, bool, bool))(Il2CppBase() + 0x32DD5F4))(this, pos, roleID, roleSkinMap, weaponId, skinId, attachList, ornamentItem, professionChip, professionChipSkinID, bBRModel, bDisplay, bPlayEntranAni, bResetPosition);
	}
	template <typename T = bool> T ForceUpdateRole() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32DEEA8))(this);
	}
	template <typename T = void> T EquipWeaponForSelf(int32_t pos, int32_t roleId, uint32_t weaponId, uintptr_t mainWeapon, uintptr_t squadType, int32_t loadoutIndex, bool bPlayEntranAni) {
		return ((T (*)(AvatarControllerSquad*, int32_t, int32_t, uint32_t, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x32DB3D8))(this, pos, roleId, weaponId, mainWeapon, squadType, loadoutIndex, bPlayEntranAni);
	}
	template <typename T = void> T EquipWeaponWithData(int32_t pos, int32_t m_RoleId, uint32_t weaponId, uint32_t skinId, Il2CppList<uintptr_t>* attachList, uintptr_t ornamentItem, uint32_t professionChip, uint32_t professionChipSkinID, bool bPlayEntranAni) {
		return ((T (*)(AvatarControllerSquad*, int32_t, int32_t, uint32_t, uint32_t, Il2CppList<uintptr_t>*, uintptr_t, uint32_t, uint32_t, bool))(Il2CppBase() + 0x32DEFD4))(this, pos, m_RoleId, weaponId, skinId, attachList, ornamentItem, professionChip, professionChipSkinID, bPlayEntranAni);
	}
	template <typename T = Il2CppString*> T GetLauncherSocketById(uint64_t weaponId) {
		return ((T (*)(AvatarControllerSquad*, uint64_t))(Il2CppBase() + 0x32DFE58))(this, weaponId);
	}
	template <typename T = uintptr_t> T GetWeaponController() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E0024))(this);
	}
	template <typename T = uintptr_t> T GetWeaponView() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E0108))(this);
	}
	template <typename T = void> T ShowWeaponController(bool bShow) {
		return ((T (*)(AvatarControllerSquad*, bool))(Il2CppBase() + 0x32E0298))(this, bShow);
	}
	template <typename T = void> T InitWeaponShowController(uintptr_t squadView) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32DA674))(this, squadView);
	}
	template <typename T = void> T HandleCameraMoveToWeaponRoot(uintptr_t message) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32E0804))(this, message);
	}
	template <typename T = void> T OnMoveToWeaponRootFinish() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E0BE4))(this);
	}
	template <typename T = void> T OnResetWeaponRotation() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E0F7C))(this);
	}
	template <typename T = void> T HandleCameraResetFromWeaponRoot(uintptr_t MSG) {
		return ((T (*)(AvatarControllerSquad*, uintptr_t))(Il2CppBase() + 0x32E1294))(this, MSG);
	}
	template <typename T = uintptr_t> T GetViewCamera(bool bForceMatch) {
		return ((T (*)(AvatarControllerSquad*, bool))(Il2CppBase() + 0x32E16CC))(this, bForceMatch);
	}
	template <typename T = void> T OnResetFromWeaponRootFinish() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E181C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E1968))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E1970))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E1978))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E1980))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E1988))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(AvatarControllerSquad*))(Il2CppBase() + 0x32E1990))(this);
	}

};

}
