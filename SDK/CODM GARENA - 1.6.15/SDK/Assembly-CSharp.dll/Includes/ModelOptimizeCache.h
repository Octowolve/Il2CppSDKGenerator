#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ModelOptimizeCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ModelOptimizeCache"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& substituteMeshCacheDict() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> T& optimizedAsset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uint32_t>*> T& optimizedAssetRefCounter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> static T& ClearUnusedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& unusedAssetCounter() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& optimizedMeshInfos() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& Expand() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearSubstituteMeshCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnloadOriginalAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_UnloadOriginalAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyAllUnusedAssets() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSubstituteMeshCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddOptimizedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasOptimizedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InstantiateOptimizedAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOptimizedModelInstantiate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOptimizedModelDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestoryAssetImmediate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyManagedAssetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TestBound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F79A0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F7ADC))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F7BA4))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F7CD0))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F7E04))(this);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F8410))(this);
	}
	template <typename T = void> T ClearSubstituteMeshCache() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F8198))(this);
	}
	template <typename T = void> T UnloadOriginalAsset(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*))(Il2CppBase() + 0x32F84D8))(this, assetIDStr);
	}
	template <typename T = void> T UnloadOriginalAsset_1(int32_t assetID) {
		return ((T (*)(ModelOptimizeCache*, int32_t))(Il2CppBase() + 0x32F892C))(this, assetID);
	}
	template <typename T = void> T DestroyAllUnusedAssets() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32F8A4C))(this);
	}
	template <typename T = uintptr_t> T GetSubstituteMeshCache(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*))(Il2CppBase() + 0x32F8B7C))(this, assetIDStr);
	}
	template <typename T = bool> T AddOptimizedAsset(Il2CppString* assetIDStr, uintptr_t obj) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x32F8D34))(this, assetIDStr, obj);
	}
	template <typename T = bool> T HasOptimizedAsset(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*))(Il2CppBase() + 0x32F91FC))(this, assetIDStr);
	}
	template <typename T = uintptr_t> T InstantiateOptimizedAsset(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*))(Il2CppBase() + 0x32F9444))(this, assetIDStr);
	}
	template <typename T = void> T OnOptimizedModelInstantiate(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*))(Il2CppBase() + 0x32F99A4))(this, assetIDStr);
	}
	template <typename T = void> T OnOptimizedModelDestroy(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*))(Il2CppBase() + 0x32F9B70))(this, assetIDStr);
	}
	template <typename T = void> T DestoryAssetImmediate(Il2CppString* assetIDStr) {
		return ((T (*)(ModelOptimizeCache*, Il2CppString*))(Il2CppBase() + 0x32F9EC8))(this, assetIDStr);
	}
	template <typename T = void> T CopyManagedAssetInfo(uintptr_t originMesh, uintptr_t newMesh) {
		return ((T (*)(ModelOptimizeCache*, uintptr_t, uintptr_t))(Il2CppBase() + 0x32F97C8))(this, originMesh, newMesh);
	}
	template <typename T = void> T TestBound() {
		return ((T (*)(ModelOptimizeCache*))(Il2CppBase() + 0x32FA250))(this);
	}

};

}
