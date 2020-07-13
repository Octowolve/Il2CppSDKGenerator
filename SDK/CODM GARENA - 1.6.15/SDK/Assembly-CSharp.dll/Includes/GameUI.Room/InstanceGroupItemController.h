#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class InstanceGroupItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "InstanceGroupItemController"));
	}

	template <typename T = uintptr_t> T& m_View() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnSelectClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCEA28))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCEB34))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCEBD8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCED64))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(InstanceGroupItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2CCEED8))(this, list, index, dataObj);
	}
	template <typename T = void> T OnBtnSelectClick() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCF2D4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCF5A4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCF5AC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCF5B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InstanceGroupItemController*))(Il2CppBase() + 0x2CCF5BC))(this);
	}

};

}
