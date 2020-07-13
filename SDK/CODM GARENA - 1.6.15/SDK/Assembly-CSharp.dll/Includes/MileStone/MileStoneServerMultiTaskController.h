#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneServerMultiTaskController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneServerMultiTaskController"));
	}

	template <typename T = uintptr_t> T& m_MultiTaskView() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& mileStoneDetailController() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E4DA8))(this);
	}
	template <typename T = void> T set_Activity(uintptr_t value) {
		return ((T (*)(MileStoneServerMultiTaskController*, uintptr_t))(Il2CppBase() + 0x41E4F40))(this, value);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E4FA0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E5064))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E523C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E52E0))(this);
	}
	template <typename T = void> T OnDetailButtonClick() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E5460))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E55D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E55D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E55E0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E55E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MileStoneServerMultiTaskController*))(Il2CppBase() + 0x41E55F0))(this);
	}

};

}
