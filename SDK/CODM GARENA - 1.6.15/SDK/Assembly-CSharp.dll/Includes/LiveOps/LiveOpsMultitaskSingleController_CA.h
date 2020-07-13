#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMultitaskSingleControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMultitaskSingleController_CA"));
	}

	template <typename T = uintptr_t> T& m_View_CA() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ListController_CA() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& m_bListInit() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> static T& LeftDistanceToButtom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTaskList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x3509C6C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x3509D10))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x350ACF4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x350B15C))(this);
	}
	template <typename T = void> T UpdateTaskList(Il2CppList<uintptr_t>* inTasks) {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x350B498))(this, inTasks);
	}
	template <typename T = void> T UpdateView(uintptr_t activity, bool bInit) {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x350B68C))(this, activity, bInit);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x350A170))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x350B9CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x350BAA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x350BAA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*))(Il2CppBase() + 0x350BAAC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0, bool P1) {
		return ((T (*)(LiveOpsMultitaskSingleControllerCA*, uintptr_t, bool))(Il2CppBase() + 0x350BAB0))(this, P0, P1);
	}

};

}
