#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PersistentLoadingScreenBehaviour
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PersistentLoadingScreenBehaviour"));
	}

	template <typename T = uintptr_t> T& m_Cam() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& TextureBg_SizeAdaptor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& TextureBg_1530x852() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TextureLogo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_ToLoadTexture() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_LoadingData() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_LoadingSceneType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_LoadingBackGroundDS() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableCamerasAndReleaseRTs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__SetBGTexture_1422x852() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadLocalTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__LoadCdnTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T get_LoadingBackGroundDS() {
		return ((T (*)(PersistentLoadingScreenBehaviour*))(Il2CppBase() + 0x16DBCB4))(this);
	}
	template <typename T = void> T DisableCamerasAndReleaseRTs() {
		return ((T (*)(PersistentLoadingScreenBehaviour*))(Il2CppBase() + 0x16DB478))(this);
	}
	template <typename T = void> T ShowBackground(int32_t targetMapId) {
		return ((T (*)(PersistentLoadingScreenBehaviour*, int32_t))(Il2CppBase() + 0x16DB20C))(this, targetMapId);
	}
	template <typename T = void> T SetBackground() {
		return ((T (*)(PersistentLoadingScreenBehaviour*))(Il2CppBase() + 0x16DBE4C))(this);
	}
	template <typename T = void> T GetLoadingData(int32_t targetMapId) {
		return ((T (*)(PersistentLoadingScreenBehaviour*, int32_t))(Il2CppBase() + 0x16DBD64))(this, targetMapId);
	}
	template <typename T = void> T _SetBGTexture_1422x852(Il2CppString* localSprite, Il2CppString* urlPath, Il2CppString* defaultPath) {
		return ((T (*)(PersistentLoadingScreenBehaviour*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16DC284))(this, localSprite, urlPath, defaultPath);
	}
	template <typename T = void> T _LoadTexture(Il2CppString* localPath, Il2CppString* urlPath, Il2CppString* defaultPath) {
		return ((T (*)(PersistentLoadingScreenBehaviour*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16DC448))(this, localPath, urlPath, defaultPath);
	}
	template <typename T = void> T _LoadLocalTexture(Il2CppString* localSprite) {
		return ((T (*)(PersistentLoadingScreenBehaviour*, Il2CppString*))(Il2CppBase() + 0x16DC858))(this, localSprite);
	}
	template <typename T = void> T _LoadCdnTexture(Il2CppString* urlPath) {
		return ((T (*)(PersistentLoadingScreenBehaviour*, Il2CppString*))(Il2CppBase() + 0x16DC678))(this, urlPath);
	}
	template <typename T = void> T HideLoading() {
		return ((T (*)(PersistentLoadingScreenBehaviour*))(Il2CppBase() + 0x16DB94C))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PersistentLoadingScreenBehaviour*))(Il2CppBase() + 0x16DC9B0))(this);
	}

};

}
