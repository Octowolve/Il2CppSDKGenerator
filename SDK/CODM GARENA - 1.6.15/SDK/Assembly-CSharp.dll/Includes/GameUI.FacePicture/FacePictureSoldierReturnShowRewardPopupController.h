#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.FacePicture {

class FacePictureSoldierReturnShowRewardPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.FacePicture", "FacePictureSoldierReturnShowRewardPopupController"));
	}

	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x64);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnGoBtnClickedEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetGroupItemUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetItemUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreloadCDNTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470AAA0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470AB44))(this);
	}
	template <typename T = void> T OnGoBtnClickedEvent() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470AC4C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t data) {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*, uintptr_t))(Il2CppBase() + 0x470B184))(this, data);
	}
	template <typename T = void> T ResetContent(uintptr_t data) {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*, uintptr_t))(Il2CppBase() + 0x470B3DC))(this, data);
	}
	template <typename T = void> T ResetGroupItemUI(Il2CppArray<uintptr_t>* itemUIs, Il2CppList<uintptr_t>* rewards) {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*, Il2CppArray<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x470B99C))(this, itemUIs, rewards);
	}
	template <typename T = void> T ResetItemUI(uintptr_t itemUI, uintptr_t reward) {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x470BB10))(this, itemUI, reward);
	}
	template <typename T = void> T PreloadCDNTexture() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470AEF8))(this);
	}
	template <typename T = uintptr_t> T GetReportFlag() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470BFB4))(this);
	}
	template <typename T = uintptr_t> T GetSecondTab() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470AD64))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470C054))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470C058))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnGoBtnClickedEvent() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470C05C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView(uintptr_t P0) {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*, uintptr_t))(Il2CppBase() + 0x470C060))(this, P0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetReportFlag() {
		return ((T (*)(FacePictureSoldierReturnShowRewardPopupController*))(Il2CppBase() + 0x470C064))(this);
	}

};

}
