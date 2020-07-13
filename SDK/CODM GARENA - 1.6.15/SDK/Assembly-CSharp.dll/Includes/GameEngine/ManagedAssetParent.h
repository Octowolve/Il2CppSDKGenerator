#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ManagedAssetParent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ManagedAssetParent"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_AssetList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_AutoDespawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnApplicationQuit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ManagedAssetParent*))(Il2CppBase() + 0x4A9B20C))(this);
	}
	template <typename T = void> T AddAsset(uintptr_t asset) {
		return ((T (*)(ManagedAssetParent*, uintptr_t))(Il2CppBase() + 0x4A9AD5C))(this, asset);
	}
	template <typename T = void> T RemoveAsset(uintptr_t asset) {
		return ((T (*)(ManagedAssetParent*, uintptr_t))(Il2CppBase() + 0x4A9AB00))(this, asset);
	}
	template <typename T = void> T OnApplicationQuit() {
		return ((T (*)(ManagedAssetParent*))(Il2CppBase() + 0x4A9B360))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ManagedAssetParent*))(Il2CppBase() + 0x4A9B404))(this);
	}

};

}
