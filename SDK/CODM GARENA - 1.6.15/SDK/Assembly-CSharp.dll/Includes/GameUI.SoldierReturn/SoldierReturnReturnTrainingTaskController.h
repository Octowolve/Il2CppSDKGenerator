#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnTrainingTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnTrainingTaskController"));
	}

	template <typename T = int32_t> T& _titleSelectIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& taskData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _progressListController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _titleListController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _contentListController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _lockContentListController() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RePlayEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPanelSizeWitchRect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitProgressListController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetProgressBarLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgressData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProgressValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitTitleListController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleItemClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTitleContentChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTitleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSelectTitleData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTitleDataSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitContentListController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLockedContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetUnLockedContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLockedContentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUnLockedContentData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSelectGroupLocked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB8120))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB81C4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB8394))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB8460))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB8510))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB8648))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3CB8714))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, uintptr_t, int32_t))(Il2CppBase() + 0x3CB88B4))(this, list, userContext);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3CB8968))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnNotifyCommonReceiveItemClose(uintptr_t obj) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, uintptr_t))(Il2CppBase() + 0x3CB8A34))(this, obj);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB4638))(this);
	}
	template <typename T = void> T RePlayEffect() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB3DA0))(this);
	}
	template <typename T = void> T OnInitialize() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB82D8))(this);
	}
	template <typename T = void> T InitLayout() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB90D4))(this);
	}
	template <typename T = void> T ResetPanelSizeWitchRect(uintptr_t rect, uintptr_t panel) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CB9B84))(this, rect, panel);
	}
	template <typename T = void> T ResetData() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB8BCC))(this);
	}
	template <typename T = void> T InitProgressListController() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB92F8))(this);
	}
	template <typename T = void> T ResetProgress() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB8C7C))(this);
	}
	template <typename T = int32_t> T ResetProgressBarLayout(int32_t count) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, int32_t))(Il2CppBase() + 0x3CBA078))(this, count);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetProgressData() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB9D94))(this);
	}
	template <typename T = float> T GetProgressValue(int32_t progressWidth, uintptr_t doneValue) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, int32_t, uintptr_t))(Il2CppBase() + 0x3CBA428))(this, progressWidth, doneValue);
	}
	template <typename T = void> T InitTitleListController() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB94F0))(this);
	}
	template <typename T = void> T ResetTitle() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBA78C))(this);
	}
	template <typename T = void> T OnTitleItemClicked(int32_t index) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, int32_t))(Il2CppBase() + 0x3CB87F8))(this, index);
	}
	template <typename T = void> T OnTitleContentChanged(int32_t index) {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*, int32_t))(Il2CppBase() + 0x3CB901C))(this, index);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetTitleData() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBAAE8))(this);
	}
	template <typename T = uintptr_t> T GetSelectTitleData() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBAD7C))(this);
	}
	template <typename T = void> T ResetTitleDataSelected() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBA8E8))(this);
	}
	template <typename T = void> T InitContentListController() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CB96F0))(this);
	}
	template <typename T = void> T ResetContent() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBABD8))(this);
	}
	template <typename T = void> T ResetLockedContent() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBAF44))(this);
	}
	template <typename T = void> T ResetUnLockedContent() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB194))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetLockedContentData() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB2E8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUnLockedContentData() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB74C))(this);
	}
	template <typename T = bool> T IsSelectGroupLocked() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBAE90))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB840))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB848))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB850))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB858))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB860))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingTaskController*))(Il2CppBase() + 0x3CBB868))(this);
	}

};

}
