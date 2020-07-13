#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Settings {

class RightHandEditableController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Settings", "RightHandEditableController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableEdit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RightHandEditableController*))(Il2CppBase() + 0x448C8BC))(this);
	}
	template <typename T = void> T EnableEdit(bool enable) {
		return ((T (*)(RightHandEditableController*, bool))(Il2CppBase() + 0x448C960))(this, enable);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RightHandEditableController*))(Il2CppBase() + 0x448CAA0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_EnableEdit(bool P0) {
		return ((T (*)(RightHandEditableController*, bool))(Il2CppBase() + 0x448CAA8))(this, P0);
	}

};

}
