#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SyncCustomLayoutPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SyncCustomLayoutPopupController"));
	}

	template <typename T = uintptr_t> T& view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& bIsTriggeredByFirstTimeOpenCustomSetting() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& ctrl() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCancelClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogSyncCustomSettingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A657C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A6620))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A672C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A6948))(this);
	}
	template <typename T = void> T OnConfirmClicked() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A6B34))(this);
	}
	template <typename T = void> T OnCancelClicked() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A6E30))(this);
	}
	template <typename T = void> T SetDepth(int32_t depth) {
		return ((T (*)(SyncCustomLayoutPopupController*, int32_t))(Il2CppBase() + 0x29A6EF0))(this, depth);
	}
	template <typename T = void> T SetContent(Il2CppString* content) {
		return ((T (*)(SyncCustomLayoutPopupController*, Il2CppString*))(Il2CppBase() + 0x29A7084))(this, content);
	}
	template <typename T = void> T TLogSyncCustomSettingData(bool bIsSynchronized) {
		return ((T (*)(SyncCustomLayoutPopupController*, bool))(Il2CppBase() + 0x29A6C4C))(this, bIsSynchronized);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A720C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A7214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A721C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SyncCustomLayoutPopupController*))(Il2CppBase() + 0x29A7224))(this);
	}

};

}
