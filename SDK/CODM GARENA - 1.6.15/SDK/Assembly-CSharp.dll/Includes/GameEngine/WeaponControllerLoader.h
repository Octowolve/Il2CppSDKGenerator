#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponControllerLoader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponControllerLoader"));
	}

	template <typename T = uintptr_t> T& m_WeaponOwner() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& m_WeaponAssetId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsLoading() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_CacheRuntimeAnimatorController() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedLoadRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCacheRuntimeAnimatorController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsLoading() {
		return ((T (*)(WeaponControllerLoader*))(Il2CppBase() + 0x2E989A0))(this);
	}
	template <typename T = bool> T CheckNeedLoadRuntimeAnimatorController(int32_t assetId) {
		return ((T (*)(WeaponControllerLoader*, int32_t))(Il2CppBase() + 0x2EB9628))(this, assetId);
	}
	template <typename T = uintptr_t> T GetRuntimeAnimatorController(int32_t assetId) {
		return ((T (*)(WeaponControllerLoader*, int32_t))(Il2CppBase() + 0x2E9BB78))(this, assetId);
	}
	template <typename T = void> T ClearCacheRuntimeAnimatorController() {
		return ((T (*)(WeaponControllerLoader*))(Il2CppBase() + 0x2EB9804))(this);
	}
	template <typename T = void> T ClearLoad() {
		return ((T (*)(WeaponControllerLoader*))(Il2CppBase() + 0x2EB0C2C))(this);
	}
	template <typename T = void> T LoadAsset(int32_t loadAssetId, uintptr_t TaskPriority) {
		return ((T (*)(WeaponControllerLoader*, int32_t, uintptr_t))(Il2CppBase() + 0x2EA3CAC))(this, loadAssetId, TaskPriority);
	}
	template <typename T = void> T OnReady(int32_t assetID, uintptr_t obj) {
		return ((T (*)(WeaponControllerLoader*, int32_t, uintptr_t))(Il2CppBase() + 0x2EB98A8))(this, assetID, obj);
	}

};

}
