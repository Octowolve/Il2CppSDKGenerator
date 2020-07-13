#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ShortCodeWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ShortCodeWindowController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = double> T& TimeStart() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = double> T& TimeEnd() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewRoomCancel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewRoomConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewRoomClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnErrorResend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnErrorConfirm() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnErrorClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuitRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewShortCodeRoom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShortCodeReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetLocationResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShortCodeRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn0Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn1Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn2Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn3Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn4Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn5Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn6Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn7Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn8Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtn9Click() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3856A74))(this);
	}
	template <typename T = uintptr_t> T get_RoomDS() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3856B18))(this);
	}
	template <typename T = uintptr_t> T get_rids() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3856BB4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3856C50))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3856FAC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x38578F8))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x38580B0))(this);
	}
	template <typename T = void> T OnNewRoomCancel() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x38582EC))(this);
	}
	template <typename T = void> T OnNewRoomConfirm() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3858408))(this);
	}
	template <typename T = void> T OnNewRoomClose() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3858574))(this);
	}
	template <typename T = void> T OnErrorResend() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3858678))(this);
	}
	template <typename T = void> T OnErrorConfirm() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3858A70))(this);
	}
	template <typename T = void> T OnErrorClose() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3858B8C))(this);
	}
	template <typename T = void> T OnQuitRoom(uintptr_t msg) {
		return ((T (*)(ShortCodeWindowController*, uintptr_t))(Il2CppBase() + 0x3858C90))(this, msg);
	}
	template <typename T = void> T OnNewShortCodeRoom(uintptr_t msg) {
		return ((T (*)(ShortCodeWindowController*, uintptr_t))(Il2CppBase() + 0x3859094))(this, msg);
	}
	template <typename T = void> T OnShortCodeReq(int32_t ShortCode) {
		return ((T (*)(ShortCodeWindowController*, int32_t))(Il2CppBase() + 0x3858800))(this, ShortCode);
	}
	template <typename T = void> T OnGetLocationResponse(bool bSuccess, double longitude, double latitude) {
		return ((T (*)(ShortCodeWindowController*, bool, double, double))(Il2CppBase() + 0x3859134))(this, bSuccess, longitude, latitude);
	}
	template <typename T = void> T OnShortCodeRes(uintptr_t message) {
		return ((T (*)(ShortCodeWindowController*, uintptr_t))(Il2CppBase() + 0x385965C))(this, message);
	}
	template <typename T = void> T InitInfo() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3856D64))(this);
	}
	template <typename T = void> T OnBtn0Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x3859F54))(this);
	}
	template <typename T = void> T OnBtn1Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385A5CC))(this);
	}
	template <typename T = void> T OnBtn2Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385A674))(this);
	}
	template <typename T = void> T OnBtn3Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385A71C))(this);
	}
	template <typename T = void> T OnBtn4Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385A7C4))(this);
	}
	template <typename T = void> T OnBtn5Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385A86C))(this);
	}
	template <typename T = void> T OnBtn6Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385A914))(this);
	}
	template <typename T = void> T OnBtn7Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385A9BC))(this);
	}
	template <typename T = void> T OnBtn8Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385AA64))(this);
	}
	template <typename T = void> T OnBtn9Click() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385AB0C))(this);
	}
	template <typename T = void> T OnBackBtnClick() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385ABB4))(this);
	}
	template <typename T = void> T AddNum(int32_t Num) {
		return ((T (*)(ShortCodeWindowController*, int32_t))(Il2CppBase() + 0x3859FFC))(this, Num);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385AECC))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385AF80))(this);
	}
	template <typename T = void> static T OnQuitRoomm__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x385B048))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385B194))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385B19C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385B1A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385B1AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ShortCodeWindowController*))(Il2CppBase() + 0x385B1B4))(this);
	}

};

}
