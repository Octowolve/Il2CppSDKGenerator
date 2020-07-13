#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnTrainingController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnTrainingController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _selectRewardController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _taskController() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveItemClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCommonReceiveItemOpened() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSelectReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCloseSelectReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB3758))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB37FC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB3908))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB39B0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB3B40))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SoldierReturnReturnTrainingController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3CB3C30))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnNotifyCommonReceiveItemClose(uintptr_t obj) {
		return ((T (*)(SoldierReturnReturnTrainingController*, uintptr_t))(Il2CppBase() + 0x3CB3CEC))(this, obj);
	}
	template <typename T = void> T OnNotifyCommonReceiveItemOpened(uintptr_t obj) {
		return ((T (*)(SoldierReturnReturnTrainingController*, uintptr_t))(Il2CppBase() + 0x3CB3EAC))(this, obj);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB3F64))(this);
	}
	template <typename T = void> T ShowSelectReward() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB4088))(this);
	}
	template <typename T = void> T CheckCloseSelectReward() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB4220))(this);
	}
	template <typename T = void> T ShowTask() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB438C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB46F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB46F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB4700))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB4708))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB4710))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SoldierReturnReturnTrainingController*))(Il2CppBase() + 0x3CB4718))(this);
	}

};

}
