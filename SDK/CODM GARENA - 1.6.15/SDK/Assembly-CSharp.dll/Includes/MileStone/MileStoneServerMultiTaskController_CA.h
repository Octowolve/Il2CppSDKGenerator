#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneServerMultiTaskControllerCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneServerMultiTaskController_CA"));
	}

	template <typename T = uintptr_t> T& m_ServerTaskView_CA() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& m_ParentWidget() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_AdaptationView() {
		return *(T*)((uintptr_t)this + 0x78);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptationView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_ParentWidget() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E5698))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E5878))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E591C))(this);
	}
	template <typename T = void> T RefreshView() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E6520))(this);
	}
	template <typename T = void> T AdaptationView() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E5A48))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E6780))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E6784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshView() {
		return ((T (*)(MileStoneServerMultiTaskControllerCA*))(Il2CppBase() + 0x41E6788))(this);
	}

};

}
