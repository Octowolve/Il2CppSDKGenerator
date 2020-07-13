#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadingBackGroundDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadingBackGroundDataStore"));
	}

	template <typename T = uintptr_t> T& m_GameMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_LoadingData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_LoginConfigList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MatchBeginList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MatchEndList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PicList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLoginConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReLogin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginToFrontendBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchBeginLoadingBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadingBackgroundInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMatchBeginLoadingDataByMapId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMatchEndLoadingBackground() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultLoadingInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}

	template <typename T = uintptr_t> T get_GameMode() {
		return ((T (*)(LoadingBackGroundDataStore*))(Il2CppBase() + 0x432D5E0))(this);
	}
	template <typename T = void> T set_GameMode(uintptr_t value) {
		return ((T (*)(LoadingBackGroundDataStore*, uintptr_t))(Il2CppBase() + 0x432D5E8))(this, value);
	}
	template <typename T = void> T UpdateConfig(uintptr_t res) {
		return ((T (*)(LoadingBackGroundDataStore*, uintptr_t))(Il2CppBase() + 0x432D5F0))(this, res);
	}
	template <typename T = void> T UpdateLoginConfig(Il2CppList<uintptr_t>* list) {
		return ((T (*)(LoadingBackGroundDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x432EAE4))(this, list);
	}
	template <typename T = void> T ReLogin() {
		return ((T (*)(LoadingBackGroundDataStore*))(Il2CppBase() + 0x432EE74))(this);
	}
	template <typename T = void> T GetLoginToFrontendBackground(uintptr_t loadingState) {
		return ((T (*)(LoadingBackGroundDataStore*, uintptr_t))(Il2CppBase() + 0x432EF9C))(this, loadingState);
	}
	template <typename T = void> T GetMatchBeginLoadingBackground(uintptr_t loadingState, int32_t targetMapId) {
		return ((T (*)(LoadingBackGroundDataStore*, uintptr_t, int32_t))(Il2CppBase() + 0x4330240))(this, loadingState, targetMapId);
	}
	template <typename T = uintptr_t> T GetLoadingBackgroundInfo(uintptr_t loadingState, uintptr_t loadingSceneType, int32_t targetMapId) {
		return ((T (*)(LoadingBackGroundDataStore*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x4331850))(this, loadingState, loadingSceneType, targetMapId);
	}
	template <typename T = void> T SetMatchBeginLoadingDataByMapId(int32_t targetMapId, bool isCheckLowMemoryDevice, Il2CppString* persistentLocalPath, Il2CppString* defaultLocalPath) {
		return ((T (*)(LoadingBackGroundDataStore*, int32_t, bool, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x43306E8))(this, targetMapId, isCheckLowMemoryDevice, persistentLocalPath, defaultLocalPath);
	}
	template <typename T = void> T GetMatchEndLoadingBackground(uintptr_t loadingState) {
		return ((T (*)(LoadingBackGroundDataStore*, uintptr_t))(Il2CppBase() + 0x433198C))(this, loadingState);
	}
	template <typename T = void> T GetDefaultLoadingInfo() {
		return ((T (*)(LoadingBackGroundDataStore*))(Il2CppBase() + 0x4332EB8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ReLogin() {
		return ((T (*)(LoadingBackGroundDataStore*))(Il2CppBase() + 0x43330A0))(this);
	}

};

}
