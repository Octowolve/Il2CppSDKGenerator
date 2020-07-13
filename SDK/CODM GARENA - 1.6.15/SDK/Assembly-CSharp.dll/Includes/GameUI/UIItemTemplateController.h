#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIItemTemplateController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIItemTemplateController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF9484))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF9528))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF9634))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF96DC))(this);
	}
	template <typename T = bool> T SetEasyListData(uintptr_t list, int32_t index, uintptr_t data) {
		return ((T (*)(UIItemTemplateController*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x3AF9784))(this, list, index, data);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF9A68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF9A70))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF9A78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UIItemTemplateController*))(Il2CppBase() + 0x3AF9A80))(this);
	}

};

}
