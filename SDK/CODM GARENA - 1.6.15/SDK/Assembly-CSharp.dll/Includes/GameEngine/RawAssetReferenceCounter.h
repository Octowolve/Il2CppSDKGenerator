#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class RawAssetReferenceCounter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "RawAssetReferenceCounter"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, int32_t>*> T& m_RawAssetReferenceCounter() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_UnusedPrefabInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> static T& kMaxUnusedCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_InstantiatedAssetID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInstanceNoLongerUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalUnloadRawAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadRawAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindPrefabUsageInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnInstanceUsed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPrefabInstantiated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(RawAssetReferenceCounter*))(Il2CppBase() + 0x1DFA514))(this);
	}
	template <typename T = void> T OnInstanceNoLongerUsed(int32_t assetID) {
		return ((T (*)(RawAssetReferenceCounter*, int32_t))(Il2CppBase() + 0x1DFA5B8))(this, assetID);
	}
	template <typename T = void> T InternalUnloadRawAssets(uintptr_t rawAssetList, int32_t targetAssetID) {
		return ((T (*)(RawAssetReferenceCounter*, uintptr_t, int32_t))(Il2CppBase() + 0x1DFAED8))(this, rawAssetList, targetAssetID);
	}
	template <typename T = void> T UnloadRawAssets(int32_t targetAssetID) {
		return ((T (*)(RawAssetReferenceCounter*, int32_t))(Il2CppBase() + 0x1DFACA8))(this, targetAssetID);
	}
	template <typename T = uintptr_t> T FindPrefabUsageInfo(int32_t assetID) {
		return ((T (*)(RawAssetReferenceCounter*, int32_t))(Il2CppBase() + 0x1DFAA90))(this, assetID);
	}
	template <typename T = void> T OnInstanceUsed(int32_t assetID) {
		return ((T (*)(RawAssetReferenceCounter*, int32_t))(Il2CppBase() + 0x1DFB368))(this, assetID);
	}
	template <typename T = void> T OnPrefabInstantiated(int32_t assetID) {
		return ((T (*)(RawAssetReferenceCounter*, int32_t))(Il2CppBase() + 0x1DFB50C))(this, assetID);
	}

};

}
