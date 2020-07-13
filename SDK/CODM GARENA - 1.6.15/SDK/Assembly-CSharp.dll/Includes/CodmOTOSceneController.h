#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CodmOTOSceneController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CodmOTOSceneController"));
	}

	template <typename T = int32_t> static T& CameraParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& itemId() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& intParam() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& boolParam() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnModelResChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListCallback_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GameUI_IEasyListCallback_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2CF90))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2D064))(this);
	}
	template <typename T = void> T SetData(int32_t itemId, int32_t otoId, bool isCloseSendEvent) {
		return ((T (*)(CodmOTOSceneController*, int32_t, int32_t, bool))(Il2CppBase() + 0x3A2D1A0))(this, itemId, otoId, isCloseSendEvent);
	}
	template <typename T = void> T SetModel() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2D550))(this);
	}
	template <typename T = void> T SetWeaponAssetState() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2D414))(this);
	}
	template <typename T = void> T SetWeaponAssetInfo() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2E4F0))(this);
	}
	template <typename T = void> T OnModelResChanged() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2E6E0))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2E7B4))(this);
	}
	template <typename T = void> T GameUI_IEasyListCallback_OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodmOTOSceneController*, uintptr_t, int32_t))(Il2CppBase() + 0x3A2E918))(this, list, userContext);
	}
	template <typename T = bool> T GameUI_IEasyListCallback_OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodmOTOSceneController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3A2E9FC))(this, list, controller, index);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2EAF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2EB00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(CodmOTOSceneController*))(Il2CppBase() + 0x3A2EB08))(this);
	}

};

}
