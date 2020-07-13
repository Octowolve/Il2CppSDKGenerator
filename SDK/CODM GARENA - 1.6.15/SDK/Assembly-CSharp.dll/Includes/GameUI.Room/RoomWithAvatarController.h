#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomWithAvatarController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomWithAvatarController"));
	}

	template <typename T = bool> T& bNeedDisplayAvatar() {
		return *(T*)((uintptr_t)this + 0x8D);
	}
	template <typename T = uintptr_t> T& m_SquadAvatarCtrl() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& m_NameCtrl() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& mInventoryDS() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& ServerSeatId_PosDic() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& Pos_PlayerInfoDic() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& m_LoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = int32_t> static T& AVATAR_NUM_IN_ROOM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LastRoomUIType() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& m_LastAvatarViewType() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = bool> T& m_LastMultiPlayerNum() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEAvatarViewType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchAvatarType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitRoomUIToDefault() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomMemberChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleRoomSettingChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__HandleFriendDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEncourageFriendContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshRoomCameraByPlayerNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerDownloadMapChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeRoomLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerModelWithLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerModelWithPveLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPlayerModelWithBrLoadoutInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMemberChangeLoadoutNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowRoomMemberMenuNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestShowName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRRoleIdByPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRChipIdByPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPVPRoleIdByPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckEncourageSpecialCase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x211ABF8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2108090))(this);
	}
	template <typename T = uintptr_t> T GetEAvatarViewType() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x211ACF4))(this);
	}
	template <typename T = void> T SwitchAvatarType() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x213352C))(this);
	}
	template <typename T = void> T InitRoomUIToDefault(bool bPreCreate) {
		return ((T (*)(RoomWithAvatarController*, bool))(Il2CppBase() + 0x2108B40))(this, bPreCreate);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x210E3E8))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2133604))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2108520))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2108884))(this);
	}
	template <typename T = void> T HandleRoomMemberChange() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21184BC))(this);
	}
	template <typename T = void> T HandleRoomSettingChange() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2110AC0))(this);
	}
	template <typename T = void> T _HandleFriendDataStore() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2134EF4))(this);
	}
	template <typename T = void> T SetEncourageFriendContent() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2134DFC))(this);
	}
	template <typename T = void> T RefreshRoomCameraByPlayerNum() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21338D0))(this);
	}
	template <typename T = void> T OnPlayerDownloadMapChanged(uintptr_t obj) {
		return ((T (*)(RoomWithAvatarController*, uintptr_t))(Il2CppBase() + 0x2134FA4))(this, obj);
	}
	template <typename T = void> T ChangeRoomLoadout(uintptr_t info) {
		return ((T (*)(RoomWithAvatarController*, uintptr_t))(Il2CppBase() + 0x21350C0))(this, info);
	}
	template <typename T = void> T ShowPlayerModelWithLoadoutInfo(int32_t pos, uintptr_t loadoutInfo, bool display) {
		return ((T (*)(RoomWithAvatarController*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2133B08))(this, pos, loadoutInfo, display);
	}
	template <typename T = void> T ShowPlayerModelWithPveLoadoutInfo(int32_t pos, uintptr_t loadoutInfo, bool display) {
		return ((T (*)(RoomWithAvatarController*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x21341B8))(this, pos, loadoutInfo, display);
	}
	template <typename T = void> T ShowPlayerModelWithBrLoadoutInfo(int32_t pos, uintptr_t loadoutInfo, bool display) {
		return ((T (*)(RoomWithAvatarController*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2134830))(this, pos, loadoutInfo, display);
	}
	template <typename T = void> T OnRoomMemberChangeLoadoutNotify(uintptr_t Msg) {
		return ((T (*)(RoomWithAvatarController*, uintptr_t))(Il2CppBase() + 0x2135318))(this, Msg);
	}
	template <typename T = void> T OnShowRoomMemberMenuNotify(uintptr_t Msg) {
		return ((T (*)(RoomWithAvatarController*, uintptr_t))(Il2CppBase() + 0x2135474))(this, Msg);
	}
	template <typename T = void> T TestShowName() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x213562C))(this);
	}
	template <typename T = int32_t> T GetBRRoleIdByPos(int32_t pos) {
		return ((T (*)(RoomWithAvatarController*, int32_t))(Il2CppBase() + 0x2135720))(this, pos);
	}
	template <typename T = uint32_t> T GetBRChipIdByPos(int32_t pos) {
		return ((T (*)(RoomWithAvatarController*, int32_t))(Il2CppBase() + 0x21357F4))(this, pos);
	}
	template <typename T = int32_t> T GetPVPRoleIdByPos(int32_t pos) {
		return ((T (*)(RoomWithAvatarController*, int32_t))(Il2CppBase() + 0x21358AC))(this, pos);
	}
	template <typename T = bool> T CheckEncourageSpecialCase() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21336CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2135980))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitRoomUIToDefault(bool P0) {
		return ((T (*)(RoomWithAvatarController*, bool))(Il2CppBase() + 0x2135988))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2135990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x2135998))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21359A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21359A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomMemberChange() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21359B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_HandleRoomSettingChange() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21359B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy__HandleFriendDataStore() {
		return ((T (*)(RoomWithAvatarController*))(Il2CppBase() + 0x21359C0))(this);
	}

};

}
