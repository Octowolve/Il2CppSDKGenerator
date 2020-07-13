#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MissionSystem {

class GrowthMissionLevelMissionScrollController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MissionSystem", "GrowthMissionLevelMissionScrollController"));
	}

	template <typename T = uintptr_t> T& m_GrowthMissionLevelMissionScrollView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_ListController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Timer() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_DisplayData() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& m_DisplaySelectedIndex() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_IsInit() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLevelMissionListView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitScrollList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9124))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F939C))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F960C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9A6C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9B10))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9BA8))(this);
	}
	template <typename T = void> T UpdateLevelMissionListView() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9C40))(this);
	}
	template <typename T = void> T InitScrollList() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9788))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t displayData, int32_t displayIndex) {
		return ((T (*)(GrowthMissionLevelMissionScrollController*, uintptr_t, int32_t))(Il2CppBase() + 0x41F9460))(this, displayData, displayIndex);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(GrowthMissionLevelMissionScrollController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x41F9CD8))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(GrowthMissionLevelMissionScrollController*, uintptr_t, int32_t))(Il2CppBase() + 0x41F9DA0))(this, list, userContext);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9E54))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9E5C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9E64))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9E6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GrowthMissionLevelMissionScrollController*))(Il2CppBase() + 0x41F9E74))(this);
	}

};

}
