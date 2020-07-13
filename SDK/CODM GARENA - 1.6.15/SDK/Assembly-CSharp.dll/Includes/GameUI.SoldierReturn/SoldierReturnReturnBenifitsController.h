#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnBenifitsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnBenifitsController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _bpUIController() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB3074))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB3118))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB338C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB3434))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB3514))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB322C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB35F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB35F8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB3600))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB3608))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Reset() {
		return ((T (*)(SoldierReturnReturnBenifitsController*))(Il2CppBase() + 0x3CB3610))(this);
	}

};

}
