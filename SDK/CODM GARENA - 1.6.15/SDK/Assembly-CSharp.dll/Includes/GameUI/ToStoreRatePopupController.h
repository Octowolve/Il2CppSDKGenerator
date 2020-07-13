#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class ToStoreRatePopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "ToStoreRatePopupController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& isClickRate() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& StoreRateReportTlog() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToStoreRateBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndPause() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnToFeedbackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_DataStore() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BC5B4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BC664))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BC978))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BCA1C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BCC88))(this);
	}
	template <typename T = void> T OnToStoreRateBtnClick() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BCE78))(this);
	}
	template <typename T = void> T EndPause(uintptr_t obj) {
		return ((T (*)(ToStoreRatePopupController*, uintptr_t))(Il2CppBase() + 0x29BD010))(this, obj);
	}
	template <typename T = void> T OnToFeedbackBtnClick() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BD194))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BD2E4))(this);
	}
	template <typename T = void> T TLogProcess(uintptr_t countType) {
		return ((T (*)(ToStoreRatePopupController*, uintptr_t))(Il2CppBase() + 0x29BC7C0))(this, countType);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BD3A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BD3AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BD3B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ToStoreRatePopupController*))(Il2CppBase() + 0x29BD3BC))(this);
	}

};

}
