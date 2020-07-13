#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomMemberNameController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomMemberNameController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCallingCardUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDownloadMapState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestSetNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRoomMemberMenu() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMenu_BlockVoice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMenu_AddFriend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMenu_KickOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMenu_ViewInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMenu_LeftRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickMenu_RankLeader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEncourageTeams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEncourageTeamsContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F044C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F04F0))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F05FC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F0724))(this);
	}
	template <typename T = void> T OnCallingCardUpdate(uintptr_t obj) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F07E0))(this, obj);
	}
	template <typename T = void> T SetNames(Il2CppList<uintptr_t>* list, Il2CppArray<uintptr_t>* NameSockets, Il2CppDictionary<int32_t, int32_t>* ServerSeatId_ClienSeatIdDic, uintptr_t LadderTypeShow, uintptr_t squadTeamCamera) {
		return ((T (*)(RoomMemberNameController*, Il2CppList<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppDictionary<int32_t, int32_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x20F0AC0))(this, list, NameSockets, ServerSeatId_ClienSeatIdDic, LadderTypeShow, squadTeamCamera);
	}
	template <typename T = void> T SetDownloadMapState(Il2CppList<uintptr_t>* list, Il2CppArray<uintptr_t>* NameSockets, Il2CppDictionary<int32_t, int32_t>* ServerSeatId_ClienSeatIdDic) {
		return ((T (*)(RoomMemberNameController*, Il2CppList<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppDictionary<int32_t, int32_t>*))(Il2CppBase() + 0x20F1198))(this, list, NameSockets, ServerSeatId_ClienSeatIdDic);
	}
	template <typename T = void> T TestSetNames(Il2CppArray<uintptr_t>* NameSockets, uintptr_t squadTeamCamera) {
		return ((T (*)(RoomMemberNameController*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x20F1564))(this, NameSockets, squadTeamCamera);
	}
	template <typename T = void> T ShowRoomMemberMenu(bool bShow, int32_t pos) {
		return ((T (*)(RoomMemberNameController*, bool, int32_t))(Il2CppBase() + 0x20F189C))(this, bShow, pos);
	}
	template <typename T = void> T OnClickMenu_BlockVoice(uintptr_t info) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F1B44))(this, info);
	}
	template <typename T = void> T OnClickMenu_AddFriend(uintptr_t info) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F209C))(this, info);
	}
	template <typename T = void> T OnClickMenu_KickOut(uintptr_t info) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F23B4))(this, info);
	}
	template <typename T = void> T OnClickMenu_ViewInfo(uintptr_t info) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F24F8))(this, info);
	}
	template <typename T = void> T OnClickMenu_LeftRoom(uintptr_t info) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F26AC))(this, info);
	}
	template <typename T = void> T OnClickMenu_RankLeader(uintptr_t info) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F27EC))(this, info);
	}
	template <typename T = void> T SetEncourageTeams(Il2CppArray<uintptr_t>* NameSockets, uintptr_t squadTeamCamera, bool Show, bool bSpecialCase) {
		return ((T (*)(RoomMemberNameController*, Il2CppArray<uintptr_t>*, uintptr_t, bool, bool))(Il2CppBase() + 0x20F2930))(this, NameSockets, squadTeamCamera, Show, bSpecialCase);
	}
	template <typename T = void> T SetEncourageTeamsContent(uintptr_t data) {
		return ((T (*)(RoomMemberNameController*, uintptr_t))(Il2CppBase() + 0x20F2E28))(this, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F3098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F30A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F30A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomMemberNameController*))(Il2CppBase() + 0x20F30B0))(this);
	}

};

}
