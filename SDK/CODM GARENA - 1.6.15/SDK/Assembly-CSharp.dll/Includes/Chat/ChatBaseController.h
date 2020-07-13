#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Chat {

class ChatBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Chat", "ChatBaseController"));
	}

	template <typename T = uintptr_t> T& mBaseView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mChatDataStore() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& emoticonSelectCtrl() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& V2WCtrl() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& m_ChatCellQTCloseOffset() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_ChatCellQTOpenOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& mTimeQTOpenOffset() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& mTimeQTClosedOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& mTipOpenOffset() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& mTipCloseOffset() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_qtFilter() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppString*> static T& REDDOT_STRING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQTFilterViewFold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickJoinBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEmojiBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowVoiceBtnGray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetWorldTextAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChatViewHtml() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnReadMsgNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRedDot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MoveWidgetOnQTFilterOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T get_QTFilter() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1F3A4))(this);
	}
	template <typename T = float> T get_TipOffset() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1F498))(this);
	}
	template <typename T = float> T get_TimeOffset() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1F5D8))(this);
	}
	template <typename T = float> T get_TextOffset() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1F62C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1F67C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1F7CC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1FAC4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1FC54))(this);
	}
	template <typename T = void> T OnQTFilterViewFold(uintptr_t msg) {
		return ((T (*)(ChatBaseController*, uintptr_t))(Il2CppBase() + 0x1D1FD84))(this, msg);
	}
	template <typename T = void> T OnQuickJoinBtnClick() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1FE48))(this);
	}
	template <typename T = void> T OnEmojiBtnClick() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1FF94))(this);
	}
	template <typename T = void> T ShowVoiceBtnGray(bool showGray) {
		return ((T (*)(ChatBaseController*, bool))(Il2CppBase() + 0x1D2011C))(this, showGray);
	}
	template <typename T = uintptr_t> T GetTextAssetID(uintptr_t info) {
		return ((T (*)(ChatBaseController*, uintptr_t))(Il2CppBase() + 0x1D202C8))(this, info);
	}
	template <typename T = uintptr_t> T GetWorldTextAssetID(uintptr_t info) {
		return ((T (*)(ChatBaseController*, uintptr_t))(Il2CppBase() + 0x1D203BC))(this, info);
	}
	template <typename T = Il2CppString*> T GetChatViewHtml(uintptr_t info) {
		return ((T (*)(ChatBaseController*, uintptr_t))(Il2CppBase() + 0x1D204B0))(this, info);
	}
	template <typename T = int32_t> T GetUnReadMsgNumber(Il2CppList<uintptr_t>* messageInfoList) {
		return ((T (*)(ChatBaseController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1D2069C))(this, messageInfoList);
	}
	template <typename T = void> T CheckRedDot() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D1F87C))(this);
	}
	template <typename T = void> T MoveWidgetOnQTFilterOpen(uintptr_t w, float xInit, float xOffset) {
		return ((T (*)(ChatBaseController*, uintptr_t, float, float))(Il2CppBase() + 0x1D20800))(this, w, xInit, xOffset);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D209E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D209F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D209F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ChatBaseController*))(Il2CppBase() + 0x1D20A00))(this);
	}

};

}
