#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FacePopupRoleShowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FacePopupRoleShowController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470C2C4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470C368))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470C474))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470C614))(this);
	}
	template <typename T = void> T OnBuyBtnClick() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470C790))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470CC2C))(this);
	}
	template <typename T = void> T CloseImpl() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470CAC4))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470CD18))(this);
	}
	template <typename T = void> T SetData(uintptr_t picConf) {
		return ((T (*)(FacePopupRoleShowController*, uintptr_t))(Il2CppBase() + 0x470CE9C))(this, picConf);
	}
	template <typename T = void> static T OnOpenm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x470CF44))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470CFEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470CFF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470CFFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470D004))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(FacePopupRoleShowController*))(Il2CppBase() + 0x470D00C))(this);
	}

};

}
