#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatBroadcastController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatBroadcastController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& broadCastTimer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& floatSpeed() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isLobbyAdapter() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& htmlTextDefaultPos() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& quickTeamDefaultPos() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsInLobby() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppString*> T& cacheShowText() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uint64_t> T& cacheBigHornPlayerID() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uint32_t> T& cacheBigHornTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_QuickTeamInfo() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_LastInfo() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& m_CurrentOffset() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_Vec() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> static T& HasWorldChatClickTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdapterContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLobbyAdapterView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShowInviteBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShowChatMainView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFriendMsgBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBroadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScrollQuickTeam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearBroadcastCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendInviteMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WorldChatClickTLog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = uintptr_t> T get_mChatDS() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D20C28))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D20CC4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D20D98))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D21224))(this);
	}
	template <typename T = void> T AdapterContent(int32_t contentWidth, int32_t widgetOffset) {
		return ((T (*)(ChatBroadcastController*, int32_t, int32_t))(Il2CppBase() + 0x1D212FC))(this, contentWidth, widgetOffset);
	}
	template <typename T = void> T SetLobbyAdapterView(uintptr_t lobbyAnchor) {
		return ((T (*)(ChatBroadcastController*, uintptr_t))(Il2CppBase() + 0x1D21868))(this, lobbyAnchor);
	}
	template <typename T = void> T SetSource(bool isInLobby) {
		return ((T (*)(ChatBroadcastController*, bool))(Il2CppBase() + 0x1D21948))(this, isInLobby);
	}
	template <typename T = void> T SetShowInviteBtn(bool flag) {
		return ((T (*)(ChatBroadcastController*, bool))(Il2CppBase() + 0x1D21BE4))(this, flag);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D21D20))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D2206C))(this);
	}
	template <typename T = void> T PlayAnim() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D222F8))(this);
	}
	template <typename T = void> T OnShowChatMainView() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D22510))(this);
	}
	template <typename T = void> T OnFriendMsgBtnClick() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D22ED0))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D2308C))(this);
	}
	template <typename T = void> T RefreshBroadcast() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D23664))(this);
	}
	template <typename T = void> T ScrollQuickTeam() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D24868))(this);
	}
	template <typename T = void> T ClearBroadcastCache() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D24678))(this);
	}
	template <typename T = void> T SendInviteMsg(uintptr_t Msg) {
		return ((T (*)(ChatBroadcastController*, uintptr_t))(Il2CppBase() + 0x1D24C8C))(this, Msg);
	}
	template <typename T = void> T WorldChatClickTLog() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D22CB4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D262C0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D262C8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D262D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D262D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatBroadcastController*))(Il2CppBase() + 0x1D262E0))(this);
	}

};

}
