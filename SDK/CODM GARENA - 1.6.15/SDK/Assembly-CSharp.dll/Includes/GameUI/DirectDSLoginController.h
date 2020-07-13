#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class DirectDSLoginController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "DirectDSLoginController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ServerReuseList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_MapReuseList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_PlayerReuseList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RoomReuseList() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_AIServerReuseList() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_ShowingScrollGo() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_ServerDS() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_MapDS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_PlayerDS() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_RoomDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_AIServerDS() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_ServerNames() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_MapNames() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_PlayerNames() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_RoomNames() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& m_AIServerNames() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_ServerToContent() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_MapToContent() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_PlayerToContent() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_RoomToContent() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_AIServerToContent() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> static T& IsSupportDSMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ServerReuseContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MapReuseContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& PlayerReuseContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& RoomReuseContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& AIServerReuseContext() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOKButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseIpStrAndPort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveHistory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConnectCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnServerDropDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMapDropDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPlayerDropDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoomDropDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAIServerDropDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickShadowCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseCurrentScrollGo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupShadowCollider() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitOptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadConfigs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupUIValues() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetColumnCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemsCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemWidth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowControllerType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListItemAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E766C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E7740))(this);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(DirectDSLoginController*, float))(Il2CppBase() + 0x46E7ADC))(this, deltaTime);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E7BAC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E865C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E8734))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E8BAC))(this);
	}
	template <typename T = void> T OnCancelButtonClick() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E8C84))(this);
	}
	template <typename T = void> T OnOKButtonClick() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E8D80))(this);
	}
	template <typename T = bool> T ParseIpStrAndPort(Il2CppString* url, uintptr_t* ip, uintptr_t* port) {
		return ((T (*)(DirectDSLoginController*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x46E9258))(this, url, ip, port);
	}
	template <typename T = void> T SaveHistory() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E96C0))(this);
	}
	template <typename T = void> T ConnectCallback(uintptr_t result) {
		return ((T (*)(DirectDSLoginController*, uintptr_t))(Il2CppBase() + 0x46E9788))(this, result);
	}
	template <typename T = void> T OnServerDropDown() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E9BD8))(this);
	}
	template <typename T = void> T OnMapDropDown() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E9EDC))(this);
	}
	template <typename T = void> T OnPlayerDropDown() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EA0B0))(this);
	}
	template <typename T = void> T OnRoomDropDown() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EA26C))(this);
	}
	template <typename T = void> T OnAIServerDropDown() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EA428))(this);
	}
	template <typename T = void> T OnClickShadowCollider() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EA5E4))(this);
	}
	template <typename T = void> T CloseCurrentScrollGo() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46E9DAC))(this);
	}
	template <typename T = void> T SetupShadowCollider(bool isOn) {
		return ((T (*)(DirectDSLoginController*, bool))(Il2CppBase() + 0x46E79A0))(this, isOn);
	}
	template <typename T = void> T InitItemList() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EA6B8))(this);
	}
	template <typename T = void> T InitOptions() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EACC4))(this);
	}
	template <typename T = void> T ReadConfigs() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EB590))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetMatchList(uintptr_t list) {
		return ((T (*)(DirectDSLoginController*, uintptr_t))(Il2CppBase() + 0x46EB8F8))(this, list);
	}
	template <typename T = void> T SetupUIValues(uintptr_t list, Il2CppList<Il2CppString*>* nameList, int32_t index, bool unselect) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, Il2CppList<Il2CppString*>*, int32_t, bool))(Il2CppBase() + 0x46E7ED8))(this, list, nameList, index, unselect);
	}
	template <typename T = int32_t> T GetColumnCount(uintptr_t list) {
		return ((T (*)(DirectDSLoginController*, uintptr_t))(Il2CppBase() + 0x46EBA2C))(this, list);
	}
	template <typename T = int32_t> T GetItemsCount(uintptr_t list) {
		return ((T (*)(DirectDSLoginController*, uintptr_t))(Il2CppBase() + 0x46EBB04))(this, list);
	}
	template <typename T = uintptr_t> T GetItemData(uintptr_t list, int32_t index) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x46EBC14))(this, list, index);
	}
	template <typename T = int32_t> T GetItemWidth(uintptr_t list, int32_t index) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x46EBD78))(this, list, index);
	}
	template <typename T = int32_t> T GetItemHeight(uintptr_t list, int32_t index) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x46EBE68))(this, list, index);
	}
	template <typename T = uintptr_t> T GetShowControllerType(uintptr_t list, int32_t index) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x46EBF58))(this, list, index);
	}
	template <typename T = bool> T OnReuseListItemClick(uintptr_t list, int32_t index) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x46EC0A4))(this, list, index);
	}
	template <typename T = void> T OnReuseListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, int32_t))(Il2CppBase() + 0x46EC1F8))(this, list, userContext);
	}
	template <typename T = bool> T OnReuseListItemAction(uintptr_t list, uintptr_t data) {
		return ((T (*)(DirectDSLoginController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x46EC2DC))(this, list, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EC450))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EC458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EC460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EC468))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EC470))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DirectDSLoginController*))(Il2CppBase() + 0x46EC478))(this);
	}

};

}
