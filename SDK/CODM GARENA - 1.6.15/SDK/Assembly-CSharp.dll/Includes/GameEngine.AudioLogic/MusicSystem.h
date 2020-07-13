#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine.AudioLogic {

class MusicSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine.AudioLogic", "MusicSystem"));
	}

	template <typename T = uintptr_t> static T& mCurMapInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& mCurSceneEnvCfg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& mMapEnvSndPrefab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyStartLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyEndLoading() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadResFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> static T NotifyStartLoading(int32_t iMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35D2C60))(0, iMapID);
	}
	template <typename T = void> static T NotifyEndLoading(int32_t iMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35D3578))(0, iMapID);
	}
	template <typename T = void> static T LoadResFor(int32_t iMapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x35D38B4))(0, iMapID);
	}

};

}
