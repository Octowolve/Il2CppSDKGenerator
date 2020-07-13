#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStonePersonMultiTaskControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStonePersonMultiTaskController_CA"));
	}

	template <typename T = uintptr_t> T& m_MultiTaskView_CA() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BtnGoClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CliamBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqActivityPoints() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameBatchTask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedRefreshCollectCandyUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_ParentWidget() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E049C))(this);
	}
	template <typename T = void> T set_Activity(uintptr_t value) {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*, uintptr_t))(Il2CppBase() + 0x41E067C))(this, value);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E0BFC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E0E54))(this);
	}
	template <typename T = void> T BtnGoClick() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E1034))(this);
	}
	template <typename T = void> T _CliamBtnClick(uintptr_t Msg) {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*, uintptr_t))(Il2CppBase() + 0x41E1250))(this, Msg);
	}
	template <typename T = void> T ReqActivityPoints() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E1430))(this);
	}
	template <typename T = bool> T IsSameBatchTask(uintptr_t task) {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*, uintptr_t))(Il2CppBase() + 0x41E1660))(this, task);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E17AC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E1850))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E197C))(this);
	}
	template <typename T = void> T NeedRefreshCollectCandyUI() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E06F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E2338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E233C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReqActivityPoints() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E2340))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsSameBatchTask(uintptr_t P0) {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*, uintptr_t))(Il2CppBase() + 0x41E2344))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E2348))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStonePersonMultiTaskControllerCA*))(Il2CppBase() + 0x41E234C))(this);
	}

};

}
