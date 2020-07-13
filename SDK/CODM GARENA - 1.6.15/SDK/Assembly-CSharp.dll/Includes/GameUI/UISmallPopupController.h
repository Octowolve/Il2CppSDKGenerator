#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UISmallPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UISmallPopupController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mSureCallback() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mOkCallback() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mCancellCallback() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSureBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancellBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B11724))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B117C8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B118D4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B11BA8))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B11DE4))(this);
	}
	template <typename T = void> T SetData(Il2CppString* title, Il2CppString* content, uintptr_t sureCallback) {
		return ((T (*)(UISmallPopupController*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3B11E9C))(this, title, content, sureCallback);
	}
	template <typename T = void> T SetData_1(Il2CppString* title, Il2CppString* content, uintptr_t okCallback, uintptr_t cancellCallback) {
		return ((T (*)(UISmallPopupController*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B11FEC))(this, title, content, okCallback, cancellCallback);
	}
	template <typename T = void> T OnSureBtnClick() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B12148))(this);
	}
	template <typename T = void> T OnOkBtnClick() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B1220C))(this);
	}
	template <typename T = void> T OnCancellBtnClick() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B122D0))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B12394))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B12448))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B12450))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B12458))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B12460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UISmallPopupController*))(Il2CppBase() + 0x3B12468))(this);
	}

};

}
