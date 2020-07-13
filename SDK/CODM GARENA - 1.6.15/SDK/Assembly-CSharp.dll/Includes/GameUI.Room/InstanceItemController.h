#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class InstanceItemController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "InstanceItemController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDownLoadClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDownLoadCancelClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDownLoadOKClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> T Init() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CCF70C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CCF818))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CCF8BC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CCFA5C))(this);
	}
	template <typename T = void> T OnBtnDownLoadClick() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CCFBD8))(this);
	}
	template <typename T = void> T OnBtnDownLoadCancelClick() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CD0360))(this);
	}
	template <typename T = void> T OnBtnDownLoadOKClick(uint32_t mapId) {
		return ((T (*)(InstanceItemController*, uint32_t))(Il2CppBase() + 0x2CD05F4))(this, mapId);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t dataObj) {
		return ((T (*)(InstanceItemController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2CD0814))(this, list, index, dataObj);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CD0FEC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CD0FF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CD0FFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(InstanceItemController*))(Il2CppBase() + 0x2CD1004))(this);
	}

};

}
