#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildIconEditController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildIconEditController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_EasyListController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& iconItemList() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& lastItem() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& IconName() {
		return *(T*)((uintptr_t)this + 0x64);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SelectIcon() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnIconSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppString*> T get_IconName() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BBF974))(this);
	}
	template <typename T = void> T set_IconName(Il2CppString* value) {
		return ((T (*)(GuildIconEditController*, Il2CppString*))(Il2CppBase() + 0x3BBF97C))(this, value);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BBF984))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BBFA28))(this);
	}
	template <typename T = void> T SelectIcon(Il2CppString* iconName) {
		return ((T (*)(GuildIconEditController*, Il2CppString*))(Il2CppBase() + 0x3BC010C))(this, iconName);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0428))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0578))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC06C8))(this);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0798))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(GuildIconEditController*, uintptr_t, int32_t))(Il2CppBase() + 0x3BC0964))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(GuildIconEditController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3BC0A18))(this, list, controller, index);
	}
	template <typename T = void> T OnIconSelected(uintptr_t item) {
		return ((T (*)(GuildIconEditController*, uintptr_t))(Il2CppBase() + 0x3BC0350))(this, item);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0DC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0DC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0DD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0DD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(GuildIconEditController*))(Il2CppBase() + 0x3BC0DE0))(this);
	}

};

}
