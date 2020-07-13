#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AutoFireModeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AutoFireModeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x44);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOperatorModeChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAssitAimOpened() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(AutoFireModeController*))(Il2CppBase() + 0x3712208))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(AutoFireModeController*))(Il2CppBase() + 0x37122AC))(this);
	}
	template <typename T = void> T OnNotifyOperatorModeChanged(uintptr_t Msg) {
		return ((T (*)(AutoFireModeController*, uintptr_t))(Il2CppBase() + 0x3712484))(this, Msg);
	}
	template <typename T = void> T OnAssitAimOpened(uintptr_t msg) {
		return ((T (*)(AutoFireModeController*, uintptr_t))(Il2CppBase() + 0x37125E8))(this, msg);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(AutoFireModeController*))(Il2CppBase() + 0x3712688))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(AutoFireModeController*))(Il2CppBase() + 0x3712690))(this);
	}

};

}
