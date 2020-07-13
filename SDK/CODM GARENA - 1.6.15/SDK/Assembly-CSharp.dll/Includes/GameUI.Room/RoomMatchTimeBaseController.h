#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomMatchTimeBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomMatchTimeBaseController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& RoomDS() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& LoadoutDS() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& GameInfoDS() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& SettlementDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_bCancelBtnShowState() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetVNGIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnHideMatchTimeView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatchBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MatchJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConfigureMapInfoMatchJoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MessageClickCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLobbyMatchError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitAllocResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitAllocNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMatchQuitAllocRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMatchQuitNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomMatchTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRoomMatchTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TimerEventOnRoomMatchTimeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCancleButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelMatch_PlayAgain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetQuitAllocFaileTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20ED414))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20ED840))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EDB10))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EDE8C))(this);
	}
	template <typename T = void> T SetVNGIcon() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20ED5F8))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE048))(this);
	}
	template <typename T = void> T OnHideMatchTimeView(uintptr_t msg) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t))(Il2CppBase() + 0x20EE0E8))(this, msg);
	}
	template <typename T = void> T MatchBefore() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20ED9B0))(this);
	}
	template <typename T = void> T MatchJoin() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE1A4))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchBefore() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE2D0))(this);
	}
	template <typename T = void> T ConfigureMapInfoMatchJoin() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE368))(this);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE400))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE7A0))(this);
	}
	template <typename T = bool> T _OnCancelButtonClick() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE4A4))(this);
	}
	template <typename T = void> T MessageClickCallBack(uintptr_t result, int32_t userContext) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t, int32_t))(Il2CppBase() + 0x20EE984))(this, result, userContext);
	}
	template <typename T = void> T OnLobbyMatchError(uintptr_t Msg) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t))(Il2CppBase() + 0x20EECB8))(this, Msg);
	}
	template <typename T = void> T OnQuitAllocResponse(uintptr_t Msg) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t))(Il2CppBase() + 0x20EEF58))(this, Msg);
	}
	template <typename T = void> T OnQuitAllocNotify(uintptr_t Msg) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t))(Il2CppBase() + 0x20EF2E0))(this, Msg);
	}
	template <typename T = void> T OnRoomMatchQuitAllocRes(uintptr_t Msg) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t))(Il2CppBase() + 0x20EF578))(this, Msg);
	}
	template <typename T = void> T OnRoomMatchQuitNtf(uintptr_t Msg) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t))(Il2CppBase() + 0x20EF634))(this, Msg);
	}
	template <typename T = void> T OnRoomMatchTimeOut(uintptr_t Msg) {
		return ((T (*)(RoomMatchTimeBaseController*, uintptr_t))(Il2CppBase() + 0x20EF85C))(this, Msg);
	}
	template <typename T = void> T SetRoomMatchTimeOut() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFA28))(this);
	}
	template <typename T = void> T TimerEventOnRoomMatchTimeOut() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFBB8))(this);
	}
	template <typename T = void> T RefreshCancleButtonState() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFC60))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFDC4))(this);
	}
	template <typename T = void> T OnCancelMatch_PlayAgain() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EEAC0))(this);
	}
	template <typename T = Il2CppString*> T GetQuitAllocFaileTips() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EE844))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFEDC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFEE4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFEEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFEF4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFEFC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPressed() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFF04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(RoomMatchTimeBaseController*))(Il2CppBase() + 0x20EFF0C))(this);
	}

};

}
