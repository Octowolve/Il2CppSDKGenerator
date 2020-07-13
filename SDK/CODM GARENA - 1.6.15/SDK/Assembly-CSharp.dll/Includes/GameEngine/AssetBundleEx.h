#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AssetBundleEx
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AssetBundleEx"));
	}

	template <typename T = int16_t> T& m_BundleIndex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Parent() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsInWhiteList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_Version() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& assetBundle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& catalog() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& loadState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_UnloadTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_UnloadDestroyAll() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_AsyncLoadingAssetCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> static T& whiteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPendingUnload() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckReUse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DecRef() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBundleVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBundleVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ValidateBundleVersion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckIsInWhiteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T InternalUnload(bool unloadAllLoadedAssets) {
		return ((T (*)(AssetBundleEx*, bool))(Il2CppBase() + 0x2B66604))(this, unloadAllLoadedAssets);
	}
	template <typename T = void> T Unload(bool unloadAllLoadedAssets, bool unloadImmediately) {
		return ((T (*)(AssetBundleEx*, bool, bool))(Il2CppBase() + 0x2B668A4))(this, unloadAllLoadedAssets, unloadImmediately);
	}
	template <typename T = bool> T CheckPendingUnload(bool forceUnloadUnsafe) {
		return ((T (*)(AssetBundleEx*, bool))(Il2CppBase() + 0x2B66DF8))(this, forceUnloadUnsafe);
	}
	template <typename T = bool> T CheckReUse() {
		return ((T (*)(AssetBundleEx*))(Il2CppBase() + 0x2B67424))(this);
	}
	template <typename T = void> T IncRef() {
		return ((T (*)(AssetBundleEx*))(Il2CppBase() + 0x2B67614))(this);
	}
	template <typename T = void> T DecRef() {
		return ((T (*)(AssetBundleEx*))(Il2CppBase() + 0x2B676EC))(this);
	}
	template <typename T = int32_t> T GetBundleVersion() {
		return ((T (*)(AssetBundleEx*))(Il2CppBase() + 0x2B677C4))(this);
	}
	template <typename T = void> T SetBundleVersion(int32_t ver) {
		return ((T (*)(AssetBundleEx*, int32_t))(Il2CppBase() + 0x2B67894))(this, ver);
	}
	template <typename T = bool> T ValidateBundleVersion(int32_t ver) {
		return ((T (*)(AssetBundleEx*, int32_t))(Il2CppBase() + 0x2B6796C))(this, ver);
	}
	template <typename T = bool> T get_IsLoaded() {
		return ((T (*)(AssetBundleEx*))(Il2CppBase() + 0x2B67A50))(this);
	}
	template <typename T = bool> T get_IsWaiting() {
		return ((T (*)(AssetBundleEx*))(Il2CppBase() + 0x2B67A64))(this);
	}
	template <typename T = int16_t> T get_BundleIndex() {
		return ((T (*)(AssetBundleEx*))(Il2CppBase() + 0x2B67A7C))(this);
	}
	template <typename T = bool> T CheckIsInWhiteList(Il2CppString* abName) {
		return ((T (*)(AssetBundleEx*, Il2CppString*))(Il2CppBase() + 0x2B66460))(this, abName);
	}

};

}
