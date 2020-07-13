#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStonePersonMultiTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStonePersonMultiTaskController"));
	}

	template <typename T = uintptr_t> T& m_MultiTaskView() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mileStoneDetailController() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameBatchTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = void> T set_Activity(uintptr_t value) {
		return ((T (*)(MileStonePersonMultiTaskController*, uintptr_t))(Il2CppBase() + 0x41DF9B4))(this, value);
	}
	template <typename T = void> T ReqActivityPoints() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41DFA14))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41DFB68))(this);
	}
	template <typename T = bool> T IsSameBatchTask(uintptr_t task) {
		return ((T (*)(MileStonePersonMultiTaskController*, uintptr_t))(Il2CppBase() + 0x41DFC0C))(this, task);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41DFCE4))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41DFE90))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41DFF54))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E0088))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E01A4))(this);
	}
	template <typename T = void> T OnDetailButtonClick() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E024C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReqActivityPoints() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E03BC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E03C4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameBatchTask(uintptr_t P0) {
		return ((T (*)(MileStonePersonMultiTaskController*, uintptr_t))(Il2CppBase() + 0x41E03CC))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E03D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E03DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E03E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E03EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(MileStonePersonMultiTaskController*))(Il2CppBase() + 0x41E03F4))(this);
	}

};

}
