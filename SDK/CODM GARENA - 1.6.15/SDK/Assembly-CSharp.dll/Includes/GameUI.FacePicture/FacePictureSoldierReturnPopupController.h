#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.FacePicture {

class FacePictureSoldierReturnPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.FacePicture", "FacePictureSoldierReturnPopupController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x60);
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
	template <typename T = uintptr_t> static T& __Hotfix0_IfShutdownWhenClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoBtnClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A3F0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A494))(this);
	}
	template <typename T = bool> T IfShutdownWhenClose() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A5A0))(this);
	}
	template <typename T = void> T OnGoBtnClickedEvent() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A640))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(FacePictureSoldierReturnPopupController*, uintptr_t))(Il2CppBase() + 0x470A728))(this, data);
	}
	template <typename T = uintptr_t> T GetReportFlag() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A7DC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A87C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A884))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfShutdownWhenClose() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A88C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGoBtnClickedEvent() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(FacePictureSoldierReturnPopupController*, uintptr_t))(Il2CppBase() + 0x470A89C))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetReportFlag() {
		return ((T (*)(FacePictureSoldierReturnPopupController*))(Il2CppBase() + 0x470A8A4))(this);
	}

};

}
