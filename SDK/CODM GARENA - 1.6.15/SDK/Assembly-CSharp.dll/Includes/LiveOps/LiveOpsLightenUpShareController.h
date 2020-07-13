#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsLightenUpShareController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsLightenUpShareController"));
	}

	template <typename T = uintptr_t> T& m_view() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& m_TextureUrl() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& _platform() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mTexture() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScreenshotSaveDone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalShare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnDownLoadToLocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareGarena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareLine() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnShareFacebook() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPopularityInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInterfaceInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Share2Platform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShareCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAppInstalled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EC0F8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EC19C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EC2A8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EC580))(this);
	}
	template <typename T = void> T OnScreenshotSaveDone(uintptr_t Msg) {
		return ((T (*)(LiveOpsLightenUpShareController*, uintptr_t))(Il2CppBase() + 0x34EC7D0))(this, Msg);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EC9E8))(this);
	}
	template <typename T = void> T InternalShare(void* callback) {
		return ((T (*)(LiveOpsLightenUpShareController*, void*))(Il2CppBase() + 0x34ECD40))(this, callback);
	}
	template <typename T = void> T OnBtnDownLoadToLocal() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34ED000))(this);
	}
	template <typename T = void> T OnBtnShareGarena() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34ED144))(this);
	}
	template <typename T = void> T OnBtnShareLine() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34ED36C))(this);
	}
	template <typename T = void> T OnBtnShareFacebook() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34ED4B0))(this);
	}
	template <typename T = void> T SetView(int32_t totalValue, float progress) {
		return ((T (*)(LiveOpsLightenUpShareController*, int32_t, float))(Il2CppBase() + 0x34ED55C))(this, totalValue, progress);
	}
	template <typename T = void> T SetView_1(int32_t Index) {
		return ((T (*)(LiveOpsLightenUpShareController*, int32_t))(Il2CppBase() + 0x34EB3DC))(this, Index);
	}
	template <typename T = void> T SetPopularityInfo(int32_t value, float ft) {
		return ((T (*)(LiveOpsLightenUpShareController*, int32_t, float))(Il2CppBase() + 0x34EDB08))(this, value, ft);
	}
	template <typename T = void> T SetInterfaceInfo(bool IsShow) {
		return ((T (*)(LiveOpsLightenUpShareController*, bool))(Il2CppBase() + 0x34ED618))(this, IsShow);
	}
	template <typename T = void> T Share2Platform(uintptr_t target, uintptr_t platform) {
		return ((T (*)(LiveOpsLightenUpShareController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34ED1F0))(this, target, platform);
	}
	template <typename T = void> T OnShareCallBack(bool isSuccess) {
		return ((T (*)(LiveOpsLightenUpShareController*, bool))(Il2CppBase() + 0x34EE158))(this, isSuccess);
	}
	template <typename T = bool> T IsAppInstalled(uintptr_t platform) {
		return ((T (*)(LiveOpsLightenUpShareController*, uintptr_t))(Il2CppBase() + 0x34EDBD8))(this, platform);
	}
	template <typename T = void> static T OnBtnDownLoadToLocalm__0(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34EE1F8))(0, texture);
	}
	template <typename T = void> static T OnBtnShareLinem__1(uintptr_t texture) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x34EE31C))(0, texture);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EE320))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EE328))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EE330))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EE338))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(LiveOpsLightenUpShareController*))(Il2CppBase() + 0x34EE340))(this);
	}

};

}
