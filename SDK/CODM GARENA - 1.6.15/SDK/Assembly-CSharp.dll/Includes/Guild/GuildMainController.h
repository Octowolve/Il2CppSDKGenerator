#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildMainController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildMainController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MemberDataStore() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& cacheShowText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& orilen() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& oripos() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& len() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector3> T& temppos() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCallingCardInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCallingCardUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseAcceptImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResponseRefuseImpeachment() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnImpeachCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSettingBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLevelInfoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChatBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInviteBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGuildInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoardEditBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoardEditDeselect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBoardEditSubmit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBroadcast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC5DA8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC5E4C))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC5FCC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC635C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC69F4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC6E0C))(this);
	}
	template <typename T = void> T RequestCallingCardInfo() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC7584))(this);
	}
	template <typename T = void> T OnCallingCardUpdate(uintptr_t obj) {
		return ((T (*)(GuildMainController*, uintptr_t))(Il2CppBase() + 0x3BC77FC))(this, obj);
	}
	template <typename T = void> T OnResponseAcceptImpeachment(uintptr_t Msg) {
		return ((T (*)(GuildMainController*, uintptr_t))(Il2CppBase() + 0x3BC78BC))(this, Msg);
	}
	template <typename T = void> T OnResponseRefuseImpeachment(uintptr_t Msg) {
		return ((T (*)(GuildMainController*, uintptr_t))(Il2CppBase() + 0x3BC7A74))(this, Msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(GuildMainController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3BC7C2C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnImpeachCallback(uintptr_t result, int32_t userContext) {
		return ((T (*)(GuildMainController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BC7FFC))(this, result, userContext);
	}
	template <typename T = void> T OnSettingBtnClick() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC80FC))(this);
	}
	template <typename T = void> T OnLevelInfoBtnClick() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC82C0))(this);
	}
	template <typename T = void> T OnChatBtnClick() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC83B0))(this);
	}
	template <typename T = void> T OnInviteBtnClick() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC853C))(this);
	}
	template <typename T = void> T UpdateGuildInfo() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC7EEC))(this);
	}
	template <typename T = void> T OnBoardEditBtnClick() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC862C))(this);
	}
	template <typename T = void> T OnBoardEditDeselect() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC8858))(this);
	}
	template <typename T = void> T OnBoardEditSubmit() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC8914))(this);
	}
	template <typename T = void> T RefreshBroadcast() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC8F5C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC9650))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC9658))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC9660))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC9668))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC9670))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildMainController*))(Il2CppBase() + 0x3BC9678))(this);
	}

};

}
