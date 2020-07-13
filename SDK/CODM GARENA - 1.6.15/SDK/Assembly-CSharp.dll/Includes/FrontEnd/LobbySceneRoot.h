#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class LobbySceneRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "LobbySceneRoot"));
	}

	template <typename T = uintptr_t> T& m_currentSceneType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Main() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& Team() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Team_ZB() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Team_BR() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Weapon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& OpenBox() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& WeaponSuperShow() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& WinnerCircle() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& GumBall() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Common() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& CommercialisedShowWeapon() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& UICommon() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_SceneList() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_UISceneList() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_UseLowQuality() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_Preloader() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mainCamera() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& lastCameraCount() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& lastCheckTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> static T& CheckCameraTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& mOldSettings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> static T& mHasShadowSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUIList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPreloader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLobbySceneType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentLobbySceneShack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLobbySceneShack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSceneAdditive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowUIScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUISceneShack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeShadowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreDefaultShadowQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x367D2AC))(0);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A7DE8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T InitList() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A8098))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T InitUIList() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A83AC))(this);
	}
	template <typename T = void> T InitPreloader() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A84E4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A87D8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A8914))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A8D18))(this);
	}
	template <typename T = uintptr_t> T GetCurrentLobbySceneType() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A9028))(this);
	}
	template <typename T = uintptr_t> T GetCurrentLobbySceneShack() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A90F8))(this);
	}
	template <typename T = void> T CloseScene(uintptr_t scene) {
		return ((T (*)(LobbySceneRoot*, uintptr_t))(Il2CppBase() + 0x36A9250))(this, scene);
	}
	template <typename T = void> T ShowScene(uintptr_t scene) {
		return ((T (*)(LobbySceneRoot*, uintptr_t))(Il2CppBase() + 0x367D35C))(this, scene);
	}
	template <typename T = uintptr_t> T GetLobbySceneShack(uintptr_t scene) {
		return ((T (*)(LobbySceneRoot*, uintptr_t))(Il2CppBase() + 0x36A958C))(this, scene);
	}
	template <typename T = void> T ShowSceneAdditive(uintptr_t scene) {
		return ((T (*)(LobbySceneRoot*, uintptr_t))(Il2CppBase() + 0x36A96E8))(this, scene);
	}
	template <typename T = void> T ChangeQuality(bool low) {
		return ((T (*)(LobbySceneRoot*, bool))(Il2CppBase() + 0x36A98B0))(this, low);
	}
	template <typename T = void> T CloseUIScene(uintptr_t scene) {
		return ((T (*)(LobbySceneRoot*, uintptr_t))(Il2CppBase() + 0x36A9B3C))(this, scene);
	}
	template <typename T = void> T ShowUIScene(uintptr_t scene) {
		return ((T (*)(LobbySceneRoot*, uintptr_t))(Il2CppBase() + 0x36A85E0))(this, scene);
	}
	template <typename T = uintptr_t> T GetUISceneShack(uintptr_t scene) {
		return ((T (*)(LobbySceneRoot*, uintptr_t))(Il2CppBase() + 0x36A9CF8))(this, scene);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LobbySceneRoot*))(Il2CppBase() + 0x36A9E54))(this);
	}
	template <typename T = void> static T ChangeShadowQuality(int32_t shadowDistance, int32_t resBias, uintptr_t projectionMode, uintptr_t quality) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x36A8A24))(0, shadowDistance, resBias, projectionMode, quality);
	}
	template <typename T = void> static T RestoreDefaultShadowQuality() {
		return ((T (*)(void *))(Il2CppBase() + 0x36A8E08))(0);
	}

};

}
