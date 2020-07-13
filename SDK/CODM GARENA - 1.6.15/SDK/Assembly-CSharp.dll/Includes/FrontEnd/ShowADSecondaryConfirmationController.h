#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ShowADSecondaryConfirmationController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ShowADSecondaryConfirmationController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__WatchBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAdCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385B748))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385B7EC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385B8F8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BA2C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BB48))(this);
	}
	template <typename T = void> T _WatchBtnClick() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BCA4))(this);
	}
	template <typename T = void> T ShowAdCallBack(bool success, Il2CppString* placeName) {
		return ((T (*)(ShowADSecondaryConfirmationController*, bool, Il2CppString*))(Il2CppBase() + 0x385BD3C))(this, success, placeName);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BDF0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BDF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BE00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BE08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ShowADSecondaryConfirmationController*))(Il2CppBase() + 0x385BE10))(this);
	}

};

}
