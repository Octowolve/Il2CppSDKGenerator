#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class SettlementShareBtnNodeBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "SettlementShareBtnNodeBaseController"));
	}

	template <typename T = uintptr_t> T& _shareData() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _originReportType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _baseUIView() {
		return *(T*)((uintptr_t)this + 0x4C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareReportType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448F344))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448F3E4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448F4EC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448F610))(this);
	}
	template <typename T = bool> T get_EnableInactiveEvent() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448F6C8))(this);
	}
	template <typename T = void> T OnScreenCapture(uintptr_t msg) {
		return ((T (*)(SettlementShareBtnNodeBaseController*, uintptr_t))(Il2CppBase() + 0x448F6D0))(this, msg);
	}
	template <typename T = void> T OnShareBtnClicked() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448F808))(this);
	}
	template <typename T = void> T Show(uintptr_t shareData) {
		return ((T (*)(SettlementShareBtnNodeBaseController*, uintptr_t))(Il2CppBase() + 0x448FA20))(this, shareData);
	}
	template <typename T = void> T ResetShareReportType(uintptr_t type) {
		return ((T (*)(SettlementShareBtnNodeBaseController*, uintptr_t))(Il2CppBase() + 0x448F958))(this, type);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448FB38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448FB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448FB40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448FB44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnShareBtnClicked() {
		return ((T (*)(SettlementShareBtnNodeBaseController*))(Il2CppBase() + 0x448FB48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Show(uintptr_t P0) {
		return ((T (*)(SettlementShareBtnNodeBaseController*, uintptr_t))(Il2CppBase() + 0x448FB4C))(this, P0);
	}

};

}
