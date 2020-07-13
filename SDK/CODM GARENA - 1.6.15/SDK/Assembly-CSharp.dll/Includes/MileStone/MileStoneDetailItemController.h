#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneDetailItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneDetailItemController"));
	}

	template <typename T = uintptr_t> T& detailItemView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD29C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD3A8))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD44C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD4F4))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(MileStoneDetailItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x41DD59C))(this, list, index, data);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD8D0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD8D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD8E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(MileStoneDetailItemController*))(Il2CppBase() + 0x41DD8E8))(this);
	}

};

}
