#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UILoadingPVEGameTipsController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UILoadingPVEGameTipsController"));
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

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UILoadingPVEGameTipsController*))(Il2CppBase() + 0x3AF9BD0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UILoadingPVEGameTipsController*))(Il2CppBase() + 0x3AF9C74))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UILoadingPVEGameTipsController*))(Il2CppBase() + 0x3AFA244))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UILoadingPVEGameTipsController*))(Il2CppBase() + 0x3AFA24C))(this);
	}

};

}
