#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FacePopupRoleShowNavigation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FacePopupRoleShowNavigation"));
	}

	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCloseSizeAdaptor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(FacePopupRoleShowNavigation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x470D0FC))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationShowFinish(uintptr_t data) {
		return ((T (*)(FacePopupRoleShowNavigation*, uintptr_t))(Il2CppBase() + 0x470D1B0))(this, data);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(FacePopupRoleShowNavigation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x470D3D4))(this, data, nextData);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D4F0))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D590))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D648))(this);
	}
	template <typename T = bool> T IsCloseSizeAdaptor() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D6E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowFinish(uintptr_t P0) {
		return ((T (*)(FacePopupRoleShowNavigation*, uintptr_t))(Il2CppBase() + 0x470D788))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowCommonAvatar() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D790))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D798))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D7A0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsCloseSizeAdaptor() {
		return ((T (*)(FacePopupRoleShowNavigation*))(Il2CppBase() + 0x470D7A8))(this);
	}

};

}
