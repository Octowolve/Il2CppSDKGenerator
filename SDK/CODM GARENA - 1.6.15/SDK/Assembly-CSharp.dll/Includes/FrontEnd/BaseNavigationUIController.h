#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class BaseNavigationUIController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "BaseNavigationUIController"));
	}

	template <typename T = uintptr_t> T& m_NavigationData() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_ShowFinished() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_ShouldClose() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mTopBindNodes() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCloseSizeAdaptor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUseRankLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWeaponSpecialScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCommonAvatarUiType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowMapEarth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AvatarAdapterType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWinnerCircleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowCommonAvatarEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedResetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationCloseFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisplayController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PopSelf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BackAction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BindOneTopNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTopNodes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutdownWindowController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FadeOut() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = bool> T IsCloseSizeAdaptor() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F8DF8))(this);
	}
	template <typename T = bool> T IsShowAvatar() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F8E98))(this);
	}
	template <typename T = bool> T IsUseRankLight() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F8F38))(this);
	}
	template <typename T = bool> T IsShowWeapon() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F8FD8))(this);
	}
	template <typename T = bool> T IsShowWeaponSpecialScene() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9078))(this);
	}
	template <typename T = uintptr_t> T GetCommonAvatarUiType() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9118))(this);
	}
	template <typename T = uintptr_t> T IsShowMapEarth() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F91B8))(this);
	}
	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9258))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F92F8))(this);
	}
	template <typename T = bool> T IsShowCommonAvatar() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9398))(this);
	}
	template <typename T = uintptr_t> T AvatarAdapterType() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9438))(this);
	}
	template <typename T = bool> T IsShowWinnerCircleAvatar() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F94D8))(this);
	}
	template <typename T = bool> T IsShowCommonAvatarEffect() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9578))(this);
	}
	template <typename T = uintptr_t> T get_NavigationData() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9618))(this);
	}
	template <typename T = void> T set_NavigationData(uintptr_t value) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t))(Il2CppBase() + 0x28F9620))(this, value);
	}
	template <typename T = bool> T IsNeedResetBackgroundTexture() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9628))(this);
	}
	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F96C8))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9780))(this);
	}
	template <typename T = void> T NavigationWillShow(uintptr_t data) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t))(Il2CppBase() + 0x28F9820))(this, data);
	}
	template <typename T = void> T OnNavigationWillShow(uintptr_t data) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t))(Il2CppBase() + 0x28F98DC))(this, data);
	}
	template <typename T = void> T NavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28F997C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationShowFinish(uintptr_t data) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t))(Il2CppBase() + 0x28F9A5C))(this, data);
	}
	template <typename T = void> T NavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28F9E14))(this, data, nextData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9FBC))(this);
	}
	template <typename T = void> T OnNavigationCloseFinish(uintptr_t data) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t))(Il2CppBase() + 0x28FA054))(this, data);
	}
	template <typename T = uintptr_t> T DisplayController(Il2CppVector3 position, int32_t context, uintptr_t anchor, uintptr_t layer) {
		return ((T (*)(BaseNavigationUIController*, Il2CppVector3, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x334A73C))(this, position, context, anchor, layer);
	}
	template <typename T = uintptr_t> T HideController(Il2CppVector3 position, int32_t context) {
		return ((T (*)(BaseNavigationUIController*, Il2CppVector3, int32_t))(Il2CppBase() + 0x334AA18))(this, position, context);
	}
	template <typename T = void> T ForceClose() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9CC0))(this);
	}
	template <typename T = void> T PopSelf() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28FA0F4))(this);
	}
	template <typename T = void> T BackAction() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28FA1B0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_TopBindNodes() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28FA254))(this);
	}
	template <typename T = void> T BindOneTopNode(uintptr_t trans) {
		return ((T (*)(BaseNavigationUIController*, uintptr_t))(Il2CppBase() + 0x28FA25C))(this, trans);
	}
	template <typename T = void> T ClearTopNodes() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28F9EF4))(this);
	}
	template <typename T = void> T ShutdownWindowController() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28FA388))(this);
	}
	template <typename T = void> T FadeOut() {
		return ((T (*)(BaseNavigationUIController*))(Il2CppBase() + 0x28FA420))(this);
	}

};

}
