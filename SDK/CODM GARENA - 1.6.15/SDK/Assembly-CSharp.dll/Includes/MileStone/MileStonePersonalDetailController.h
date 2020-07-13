#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStonePersonalDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStonePersonalDetailController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& easyListController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& singleTaskPoints() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& liveOpsDataStore() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_codLiveOpsActivity() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& protocolData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uint32_t> T& nTotalPoints() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& initTimer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSingleTaskPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUseContext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ViewInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T set_Activity(uintptr_t value) {
		return ((T (*)(MileStonePersonalDetailController*, uintptr_t))(Il2CppBase() + 0x41DE568))(this, value);
	}
	template <typename T = bool> T IsSingleTaskPoint(uintptr_t task) {
		return ((T (*)(MileStonePersonalDetailController*, uintptr_t))(Il2CppBase() + 0x41DE57C))(this, task);
	}
	template <typename T = int32_t> T GetUseContext() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DE66C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DE70C))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DE928))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(MileStonePersonalDetailController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x41DED0C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(MileStonePersonalDetailController*, uintptr_t, int32_t))(Il2CppBase() + 0x41DEDD4))(this, list, userContext);
	}
	template <typename T = void> T ViewInit(int32_t itemWidth) {
		return ((T (*)(MileStonePersonalDetailController*, int32_t))(Il2CppBase() + 0x41DEB34))(this, itemWidth);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DEE88))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DEF58))(this);
	}
	template <typename T = void> T RefreshDataStore() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DEFFC))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DF37C))(this);
	}
	template <typename T = bool> T RefreshDataStorem__0(uintptr_t task) {
		return ((T (*)(MileStonePersonalDetailController*, uintptr_t))(Il2CppBase() + 0x41DF690))(this, task);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DF694))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DF69C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStonePersonalDetailController*))(Il2CppBase() + 0x41DF6A4))(this);
	}

};

}
