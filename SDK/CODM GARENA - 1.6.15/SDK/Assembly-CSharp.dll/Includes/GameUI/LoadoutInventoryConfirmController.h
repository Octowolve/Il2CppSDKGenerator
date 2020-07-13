#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutInventoryConfirmController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutInventoryConfirmController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mCacheItem() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& mOkCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mOkParam() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> static T& f__am$cache0() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNumberMultiBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNumberSelectView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_Box() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_Gift() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_Other() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData_NumberItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4BBAC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4BC50))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4BD5C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4BFA4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4C180))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4C230))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4C310))(this);
	}
	template <typename T = void> T OnNumberMultiBtnClick() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4C3C4))(this);
	}
	template <typename T = void> T ShowNumberSelectView(bool show, int32_t defaultV, int32_t maxV) {
		return ((T (*)(LoadoutInventoryConfirmController*, bool, int32_t, int32_t))(Il2CppBase() + 0x1A4C564))(this, show, defaultV, maxV);
	}
	template <typename T = void> T RefreshItem() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4C7A4))(this);
	}
	template <typename T = void> T RefreshBtn(Il2CppString* text, Il2CppString* descText, void* callback) {
		return ((T (*)(LoadoutInventoryConfirmController*, Il2CppString*, Il2CppString*, void*))(Il2CppBase() + 0x1A4CA68))(this, text, descText, callback);
	}
	template <typename T = void> T SetData_Box(uintptr_t itemData, Il2CppString* btnText, void* btnCallback) {
		return ((T (*)(LoadoutInventoryConfirmController*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x1A4CD9C))(this, itemData, btnText, btnCallback);
	}
	template <typename T = void> T SetData_Gift(uintptr_t itemData, Il2CppString* btnText, void* btnCallback) {
		return ((T (*)(LoadoutInventoryConfirmController*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x1A4D12C))(this, itemData, btnText, btnCallback);
	}
	template <typename T = void> T SetData_Other(uintptr_t itemData, Il2CppString* btnText, void* btnCallback) {
		return ((T (*)(LoadoutInventoryConfirmController*, uintptr_t, Il2CppString*, void*))(Il2CppBase() + 0x1A4D4BC))(this, itemData, btnText, btnCallback);
	}
	template <typename T = void> T SetData_NumberItem(uintptr_t itemData) {
		return ((T (*)(LoadoutInventoryConfirmController*, uintptr_t))(Il2CppBase() + 0x1A4D84C))(this, itemData);
	}
	template <typename T = void> static T SetData_NumberItemm__0(uintptr_t p) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x1A4DE58))(0, p);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4DF90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4DF98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4DFA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4DFA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutInventoryConfirmController*))(Il2CppBase() + 0x1A4DFB0))(this);
	}

};

}
