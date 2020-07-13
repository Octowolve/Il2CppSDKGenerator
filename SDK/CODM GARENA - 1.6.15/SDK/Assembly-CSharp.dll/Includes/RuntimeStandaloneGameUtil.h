#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuntimeStandaloneGameUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuntimeStandaloneGameUtil"));
	}

	template <typename T = bool> static T& bStarted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& mapLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = Il2CppVector3> static T& StartPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppVector3> static T& StartRotVect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppQuaternion> static T& StartRot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& currentMapID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGameSceneLoaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadLoadingScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCreateDependencies() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRespondLoadStandaloneMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBeginLoadStandaloneMapInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExitStandaloneMapInGame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadStandaloneMapInGameComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCreator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = void> static T OnGameSceneLoaded(uintptr_t s, uintptr_t lsm, bool async) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x414833C))(0, s, lsm, async);
	}
	template <typename T = void> static T UnloadLoadingScene() {
		return ((T (*)(void *))(Il2CppBase() + 0x41487A8))(0);
	}
	template <typename T = void> static T CheckCreateDependencies() {
		return ((T (*)(void *))(Il2CppBase() + 0x4148A8C))(0);
	}
	template <typename T = void> static T OnRespondLoadStandaloneMap(int32_t MapID) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x414989C))(0, MapID);
	}
	template <typename T = void> static T OnBeginLoadStandaloneMapInGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x4149A38))(0);
	}
	template <typename T = void> static T OnExitStandaloneMapInGame() {
		return ((T (*)(void *))(Il2CppBase() + 0x4149B3C))(0);
	}
	template <typename T = void> static T OnLoadStandaloneMapInGameComplete() {
		return ((T (*)(void *))(Il2CppBase() + 0x4148C30))(0);
	}
	template <typename T = void> static T CheckCreator() {
		return ((T (*)(void *))(Il2CppBase() + 0x4149C5C))(0);
	}
	template <typename T = bool> static T OnLoadStandaloneMapInGameCompletem__0(uintptr_t e) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4149D20))(0, e);
	}

};

}
