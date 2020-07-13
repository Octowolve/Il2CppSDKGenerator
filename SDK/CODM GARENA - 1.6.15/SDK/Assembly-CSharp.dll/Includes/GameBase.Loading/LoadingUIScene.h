#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingUIScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingUIScene"));
	}

	template <typename T = uintptr_t> T& m_LoadingProgressBarController() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_LoadingSceneTipsController() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_LoadingSceneLoader() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> static T& LOGO_POSITION_DEFAULT_V2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> static T& LOGO_POSITION_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppVector3> static T& LOGO_POSITION_PVE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = bool> T& m_PengdingShutDown() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoInit_Step1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoInit_Step2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoLoading_PVE_Multi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShutDownImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadingFlowProgressUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowLoadingProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssetsComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReLoadLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowPVPPlayerList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowPVETips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTextureLogo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = void> T Init() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6A2EC))(this);
	}
	template <typename T = void> T DoInit_Step1(uintptr_t* mapId, uintptr_t* modeCategory) {
		return ((T (*)(LoadingUIScene*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2E6A514))(this, mapId, modeCategory);
	}
	template <typename T = void> T DoInit_Step2(int32_t mapId, uintptr_t modeCategory) {
		return ((T (*)(LoadingUIScene*, int32_t, uintptr_t))(Il2CppBase() + 0x2E6A9E4))(this, mapId, modeCategory);
	}
	template <typename T = void> T DoLoading_PVE_Multi(int32_t mapId) {
		return ((T (*)(LoadingUIScene*, int32_t))(Il2CppBase() + 0x2E6AD9C))(this, mapId);
	}
	template <typename T = bool> T OnReturnKeyPress() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6B38C))(this);
	}
	template <typename T = void> T ShutDown() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6B45C))(this);
	}
	template <typename T = void> T ShutDownImpl() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6B548))(this);
	}
	template <typename T = void> T OnLoadingFlowProgressUpdate(uintptr_t msg) {
		return ((T (*)(LoadingUIScene*, uintptr_t))(Il2CppBase() + 0x2E6B664))(this, msg);
	}
	template <typename T = void> T ShowLoadingProgress(Il2CppString* tips, float progress, bool showprogress) {
		return ((T (*)(LoadingUIScene*, Il2CppString*, float, bool))(Il2CppBase() + 0x2E6B954))(this, tips, progress, showprogress);
	}
	template <typename T = void> T OnLoadAssetsComplete(uintptr_t msg) {
		return ((T (*)(LoadingUIScene*, uintptr_t))(Il2CppBase() + 0x2E6BA68))(this, msg);
	}
	template <typename T = void> T OnReLoadLoading(uintptr_t msg) {
		return ((T (*)(LoadingUIScene*, uintptr_t))(Il2CppBase() + 0x2E6BB38))(this, msg);
	}
	template <typename T = void> T ShowPVPPlayerList() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6B108))(this);
	}
	template <typename T = bool> T IsShowPVETips(uintptr_t gameMode) {
		return ((T (*)(LoadingUIScene*, uintptr_t))(Il2CppBase() + 0x2E6B294))(this, gameMode);
	}
	template <typename T = void> T HideTextureLogo() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6BC84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6BEF0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPress() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6BEF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShutDown() {
		return ((T (*)(LoadingUIScene*))(Il2CppBase() + 0x2E6BF00))(this);
	}

};

}
