#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class CommonShareBtnNodeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "CommonShareBtnNodeController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _shareCallback() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyFirstShareGetRewardSuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareRewardTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetContainerActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448E398))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448E43C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448E548))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448E6EC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448E814))(this);
	}
	template <typename T = void> T OnNotifyFirstShareGetRewardSuccess(uintptr_t msg) {
		return ((T (*)(CommonShareBtnNodeController*, uintptr_t))(Il2CppBase() + 0x448EA44))(this, msg);
	}
	template <typename T = void> T OnShareBtnClicked() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448EB00))(this);
	}
	template <typename T = void> T ResetShareCallback(uintptr_t callback) {
		return ((T (*)(CommonShareBtnNodeController*, uintptr_t))(Il2CppBase() + 0x448EBAC))(this, callback);
	}
	template <typename T = void> T Show(bool active, uintptr_t shareData) {
		return ((T (*)(CommonShareBtnNodeController*, bool, uintptr_t))(Il2CppBase() + 0x448EC54))(this, active, shareData);
	}
	template <typename T = void> T Show_1(uintptr_t shareData) {
		return ((T (*)(CommonShareBtnNodeController*, uintptr_t))(Il2CppBase() + 0x448ED44))(this, shareData);
	}
	template <typename T = void> T ResetShareRewardTip(bool active) {
		return ((T (*)(CommonShareBtnNodeController*, bool))(Il2CppBase() + 0x448EEEC))(this, active);
	}
	template <typename T = void> T SafeSetContainerActive(bool active) {
		return ((T (*)(CommonShareBtnNodeController*, bool))(Il2CppBase() + 0x448E8E0))(this, active);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448F1D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448F1E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448F1E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448F1F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(CommonShareBtnNodeController*))(Il2CppBase() + 0x448F1F8))(this);
	}

};

}
