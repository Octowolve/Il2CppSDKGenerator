#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RoleAssetLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RoleAssetLoader"));
	}

	template <typename T = uintptr_t> static T& NullRoleAssetLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsValid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& m_LoadFinish() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNullLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckLoadFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadCompletes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_isLoading() {
		return ((T (*)(RoleAssetLoader*))(Il2CppBase() + 0x1E0308C))(this);
	}
	template <typename T = bool> T IsNullLoader() {
		return ((T (*)(RoleAssetLoader*))(Il2CppBase() + 0x1E030B4))(this);
	}
	template <typename T = bool> T CheckLoadFinish() {
		return ((T (*)(RoleAssetLoader*))(Il2CppBase() + 0x1E031C8))(this);
	}
	template <typename T = void> T OnLoadCompletes(Il2CppArray<uintptr_t>* assetID, uintptr_t CallBackData) {
		return ((T (*)(RoleAssetLoader*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x1E032B0))(this, assetID, CallBackData);
	}

};

}
