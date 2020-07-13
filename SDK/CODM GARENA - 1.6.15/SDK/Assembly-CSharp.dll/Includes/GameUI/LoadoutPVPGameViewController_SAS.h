#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPVPGameViewControllerSAS
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPVPGameViewController_SAS"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutPVPGameViewControllerSAS*))(Il2CppBase() + 0x1F22584))(this);
	}
	template <typename T = void> T RefreshLoadout() {
		return ((T (*)(LoadoutPVPGameViewControllerSAS*))(Il2CppBase() + 0x1F22628))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutPVPGameViewControllerSAS*))(Il2CppBase() + 0x1F22EE0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshLoadout() {
		return ((T (*)(LoadoutPVPGameViewControllerSAS*))(Il2CppBase() + 0x1F22EE4))(this);
	}

};

}
