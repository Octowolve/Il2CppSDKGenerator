#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutBaseController"));
	}

	template <typename T = uintptr_t> T& mBaseView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mSquadInventoryDS() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mLoadoutDS() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& mLoadoutReddotDS() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _shareBtnWindow() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& itemData() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOnScreenCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShareNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCaptureShareClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSuiteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSuiteDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x22E01B4))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x22E0954))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x23416C4))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x22E0C50))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x22E1AC0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x22E21E4))(this);
	}
	template <typename T = void> T OnNotifyOnScreenCapture(uintptr_t msg) {
		return ((T (*)(LoadoutBaseController*, uintptr_t))(Il2CppBase() + 0x234178C))(this, msg);
	}
	template <typename T = void> T InitShareNode() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2341468))(this);
	}
	template <typename T = void> T ResetShareNode(bool isShow, uintptr_t item, bool forceShow) {
		return ((T (*)(LoadoutBaseController*, bool, uintptr_t, bool))(Il2CppBase() + 0x2341B2C))(this, isShow, item, forceShow);
	}
	template <typename T = void> T ShowShare(uintptr_t item, bool forceShow) {
		return ((T (*)(LoadoutBaseController*, uintptr_t, bool))(Il2CppBase() + 0x2341C14))(this, item, forceShow);
	}
	template <typename T = void> T HideShare() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2341994))(this);
	}
	template <typename T = void> T OnShareBtnClicked() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2341F10))(this);
	}
	template <typename T = void> T OnCaptureShareClicked() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2342058))(this);
	}
	template <typename T = void> T CheckSuiteInfo(uintptr_t loadoutData, uint32_t itemId) {
		return ((T (*)(LoadoutBaseController*, uintptr_t, uint32_t))(Il2CppBase() + 0x2342180))(this, loadoutData, itemId);
	}
	template <typename T = void> T OnSuiteDetailBtnClick() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2342930))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutBaseController*, uintptr_t))(Il2CppBase() + 0x23429C8))(this, msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LoadoutBaseController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2342ADC))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnNotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(LoadoutBaseController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2342BC4))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2342C80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2342C88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2342C90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2342C98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutBaseController*))(Il2CppBase() + 0x2342CA0))(this);
	}

};

}
