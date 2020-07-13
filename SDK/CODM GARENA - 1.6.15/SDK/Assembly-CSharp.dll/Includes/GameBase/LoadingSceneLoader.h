#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LoadingSceneLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LoadingSceneLoader"));
	}

	template <typename T = uintptr_t> T& TextureBg_Default() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TextureBg_1530x852() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TextureLogo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& VNG_18() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_LoadingData() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_LoadingSceneType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_LoadingBackGroundDS() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ToLoadTexture() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_LoadingSplashShowed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_PersistentLoadingShowed() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSplash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HidePersistentLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetBGTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadLocalTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadCdnTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideTextureLogo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadLoadingTextures_VeryImportant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T get_LoadingBackGroundDS() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195C8B0))(this);
	}
	template <typename T = void> T ShowBackground() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195C960))(this);
	}
	template <typename T = void> T GetLoadingData(int32_t targetMapId) {
		return ((T (*)(LoadingSceneLoader*, int32_t))(Il2CppBase() + 0x195CBE0))(this, targetMapId);
	}
	template <typename T = void> T SetBackground() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195CCC8))(this);
	}
	template <typename T = void> T LoadSplash(int32_t targetMapId) {
		return ((T (*)(LoadingSceneLoader*, int32_t))(Il2CppBase() + 0x195D230))(this, targetMapId);
	}
	template <typename T = void> T HidePersistentLoading() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195D668))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195D7B8))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195D924))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195DA98))(this);
	}
	template <typename T = void> T _SetBGTexture(Il2CppString* localSprite, Il2CppString* urlPath) {
		return ((T (*)(LoadingSceneLoader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x195D430))(this, localSprite, urlPath);
	}
	template <typename T = void> T _LoadTexture(Il2CppString* localPath, Il2CppString* urlPath) {
		return ((T (*)(LoadingSceneLoader*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x195DB5C))(this, localPath, urlPath);
	}
	template <typename T = void> T _LoadLocalTexture(Il2CppString* localSprite) {
		return ((T (*)(LoadingSceneLoader*, Il2CppString*))(Il2CppBase() + 0x195DF84))(this, localSprite);
	}
	template <typename T = void> T _LoadCdnTexture(Il2CppString* urlPath) {
		return ((T (*)(LoadingSceneLoader*, Il2CppString*))(Il2CppBase() + 0x195DDA4))(this, urlPath);
	}
	template <typename T = void> T HideTextureLogo() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195E0DC))(this);
	}
	template <typename T = void> T UnloadLoadingTextures_VeryImportant() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195E1C8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(LoadingSceneLoader*))(Il2CppBase() + 0x195E5A0))(this);
	}

};

}
