#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class MailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "MailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& SystemMailController() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_CurrentMailType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CurrentMailList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& CurrentShowingMail() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> static T& curIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& willShowTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = void*> static T& f__am$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = void*> static T& f__am$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNewMailTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPendingMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshMailList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeletTypeSystemNotice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSeletTypeFriendSend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTopRankTitleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickReadAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickDeleteAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDeleteAllCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DueToFullDelMailTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnZoneReconnectSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B6F7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B7020))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B75BC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B79EC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B7D64))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B7FF0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B8D4C))(this);
	}
	template <typename T = void> T SetData() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B7938))(this);
	}
	template <typename T = void> T CheckNewMailTag() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B8DF4))(this);
	}
	template <typename T = void> T InitPendingMail(uintptr_t mailType, bool bNeedResetScorll) {
		return ((T (*)(MailController*, uintptr_t, bool))(Il2CppBase() + 0x36B8188))(this, mailType, bNeedResetScorll);
	}
	template <typename T = void> T OnNotifyRefreshView(uintptr_t Msg) {
		return ((T (*)(MailController*, uintptr_t))(Il2CppBase() + 0x36B8FF8))(this, Msg);
	}
	template <typename T = void> T OnNotifyRefreshMailList(uintptr_t Msg) {
		return ((T (*)(MailController*, uintptr_t))(Il2CppBase() + 0x36B90AC))(this, Msg);
	}
	template <typename T = void> T OnCloseClick() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B91D8))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(MailController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x36B9270))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(MailController*, uintptr_t, int32_t))(Il2CppBase() + 0x36B96EC))(this, list, userContext);
	}
	template <typename T = void> T OnSeletTypeSystemNotice() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B97A0))(this);
	}
	template <typename T = void> T OnSeletTypeFriendSend() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B98DC))(this);
	}
	template <typename T = void> T OnTopRankTitleChange(uintptr_t mailType) {
		return ((T (*)(MailController*, uintptr_t))(Il2CppBase() + 0x36B72B0))(this, mailType);
	}
	template <typename T = void> T OnClickReadAll() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B9A24))(this);
	}
	template <typename T = void> T OnClickDeleteAll() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B9D60))(this);
	}
	template <typename T = void> T OnDeleteAllCallBack(uintptr_t result, int32_t userContext) {
		return ((T (*)(MailController*, uintptr_t, int32_t))(Il2CppBase() + 0x36BA01C))(this, result, userContext);
	}
	template <typename T = void> T DueToFullDelMailTips() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36B8AD8))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(MailController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x36BA38C))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnZoneReconnectSuccess() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA504))(this);
	}
	template <typename T = void> T WillShowm__0() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA5BC))(this);
	}
	template <typename T = bool> static T InitPendingMailm__1(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BA5C4))(0, it);
	}
	template <typename T = bool> static T InitPendingMailm__2(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x36BA5F4))(0, it);
	}
	template <typename T = int32_t> static T InitPendingMailm__3(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36BA620))(0, a, b);
	}
	template <typename T = int32_t> static T InitPendingMailm__4(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36BA664))(0, a, b);
	}
	template <typename T = int32_t> static T InitPendingMailm__5(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x36BA6A8))(0, a, b);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA6EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA6F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA6FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA704))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA70C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA714))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnZoneReconnectSuccess() {
		return ((T (*)(MailController*))(Il2CppBase() + 0x36BA71C))(this);
	}

};

}
