#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewTabController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewTabController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& bAdjusted() {
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
	template <typename T = uintptr_t> static T& __Hotfix0_ResetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTabInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettingsNewTabController*))(Il2CppBase() + 0x28AEBAC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettingsNewTabController*))(Il2CppBase() + 0x28AEC50))(this);
	}
	template <typename T = void> T ResetView() {
		return ((T (*)(SettingsNewTabController*))(Il2CppBase() + 0x2883B30))(this);
	}
	template <typename T = uintptr_t> T SetTabInfo(int32_t uiIndex, int32_t index, Il2CppString* label, void* callback) {
		return ((T (*)(SettingsNewTabController*, int32_t, int32_t, Il2CppString*, void*))(Il2CppBase() + 0x2883BE8))(this, uiIndex, index, label, callback);
	}
	template <typename T = void> T SetUIPanelDepth(int32_t depth) {
		return ((T (*)(SettingsNewTabController*, int32_t))(Il2CppBase() + 0x2880B00))(this, depth);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettingsNewTabController*))(Il2CppBase() + 0x28AF1C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettingsNewTabController*))(Il2CppBase() + 0x28AF1CC))(this);
	}

};

}
