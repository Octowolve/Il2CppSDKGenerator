#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareBaseWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareBaseWindowController"));
	}

	template <typename T = uintptr_t> T& platform() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& baseView() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& roleDescComponent() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& weaponDescComponent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& descCallbackMap() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, void*>*> T& featureCallbackMap() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = bool> T& _isRegisterDataCallback() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenshotSaveDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyOnRoomInvitationShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseButtonClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareSaveBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetUIDefautLayout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInitComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRegisterDescCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRegisterFeatureCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetContent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlatformContainer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Share2Platform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowQRCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetBaseInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetPlayerInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLogo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetRoleDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankFeature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankStatistic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowRankHistoryStatisticFeature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowFeatureNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowDescNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowFeatureNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAppInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4490F84))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4491040))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44910FC))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44912AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x449162C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x449180C))(this);
	}
	template <typename T = void> T OnScreenshotSaveDone(uintptr_t Msg) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4491950))(this, Msg);
	}
	template <typename T = void> T OnNotifyOnRoomInvitationShow(uintptr_t Msg) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4491BDC))(this, Msg);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x4491C98))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnCloseButtonClick() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4491F10))(this);
	}
	template <typename T = void> T OnShareSaveBtnClicked() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4492090))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44923AC))(this);
	}
	template <typename T = void> T OnDestory() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4492550))(this);
	}
	template <typename T = void> T OnResetUIDefautLayout() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4492600))(this);
	}
	template <typename T = void> T OnInitComponent() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x449281C))(this);
	}
	template <typename T = void> T OnRegisterDescCallback() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44928B4))(this);
	}
	template <typename T = void> T OnRegisterFeatureCallback() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4492C34))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4492E7C))(this);
	}
	template <typename T = void> T ResetView() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4493024))(this);
	}
	template <typename T = void> T ResetContent() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4493224))(this);
	}
	template <typename T = void> T ResetPlatformContainer() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4493628))(this);
	}
	template <typename T = void> T Share2Platform(uintptr_t target, uintptr_t platform) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x449372C))(this, target, platform);
	}
	template <typename T = bool> T IsShowQRCode() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4493F24))(this);
	}
	template <typename T = void> T OnResetTexture() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4491DB4))(this);
	}
	template <typename T = void> T ResetBaseInfo(uintptr_t data) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4493FC4))(this, data);
	}
	template <typename T = void> T ResetPlayerInfo(uintptr_t shareData) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x449408C))(this, shareData);
	}
	template <typename T = void> T ResetLogo(uintptr_t shareData) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4494478))(this, shareData);
	}
	template <typename T = void> T ResetDesc(uintptr_t shareData) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x44942FC))(this, shareData);
	}
	template <typename T = void> T ResetRoleDesc(uintptr_t data) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4494950))(this, data);
	}
	template <typename T = void> T ResetWeaponDesc(uintptr_t data) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4494BB4))(this, data);
	}
	template <typename T = void> T ShowRankFeature(uintptr_t data) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4494CE8))(this, data);
	}
	template <typename T = void> T ShowRankStatistic(uintptr_t data) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4495D2C))(this, data);
	}
	template <typename T = void> T ShowRankHistoryStatisticFeature(uintptr_t data) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x4497A5C))(this, data);
	}
	template <typename T = void> T ShowFeatureNode(uintptr_t data) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x44934FC))(this, data);
	}
	template <typename T = void> T InternalShare(void* callback) {
		return ((T (*)(ShareBaseWindowController*, void*))(Il2CppBase() + 0x44921D4))(this, callback);
	}
	template <typename T = void> T OnShareCallBack(bool isSuccess) {
		return ((T (*)(ShareBaseWindowController*, bool))(Il2CppBase() + 0x449802C))(this, isSuccess);
	}
	template <typename T = bool> T IsShowDescNode(uintptr_t type, uintptr_t* callback) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4494858))(this, type, callback);
	}
	template <typename T = bool> T IsShowFeatureNode(uintptr_t type, uintptr_t* callback) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4493404))(this, type, callback);
	}
	template <typename T = bool> T IsAppInstalled(uintptr_t platform) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x44938B0))(this, platform);
	}
	template <typename T = uintptr_t> T get_platform() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44980CC))(this);
	}
	template <typename T = void> T set_platform(uintptr_t value) {
		return ((T (*)(ShareBaseWindowController*, uintptr_t))(Il2CppBase() + 0x449301C))(this, value);
	}
	template <typename T = void> static T OnShareSaveBtnClickedm__0(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x44980D4))(0, texture);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44981EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44981F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x44981FC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4498204))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x449820C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x4498214))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnCloseButtonClick() {
		return ((T (*)(ShareBaseWindowController*))(Il2CppBase() + 0x449821C))(this);
	}

};

}
