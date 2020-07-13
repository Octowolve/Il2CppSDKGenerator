#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OptimizedModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OptimizedModel"));
	}

	template <typename T = bool> T& IsOptimized() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsUseGPUSkin() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = Il2CppList<int32_t>*> T& AssetIDs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& AssetIDStr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& HideIndex() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& combinedRendererInfoDict() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& combinedRendererInfoList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& GlobalSharedMaterials() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& loadedMaterials() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCombinedRendererInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCombinedRendererInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableGPUSkin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPartVisibleImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPartVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetPartVisibleImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetPartVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForeachAllCombinedRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFromGlobalSharedMaterials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChangePart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeTempPartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPartNames() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangePartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangeTempPartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePartMaterialImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatAssetReady() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ChangePartMaterialImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangePartMaterialForRenderer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RebuildMaterialIndexes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCombinedRendererInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreTempPartMaterialImp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestoreTempPartMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(OptimizedModel*))(Il2CppBase() + 0x3EF1298))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(OptimizedModel*))(Il2CppBase() + 0x3EF1400))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(OptimizedModel*))(Il2CppBase() + 0x3EF1948))(this);
	}
	template <typename T = uintptr_t> T GetCombinedRendererInfo(int32_t lodIndex) {
		return ((T (*)(OptimizedModel*, int32_t))(Il2CppBase() + 0x3EF1A3C))(this, lodIndex);
	}
	template <typename T = void> T AddCombinedRendererInfo(int32_t lodIndex, uintptr_t renderer, Il2CppList<unsigned char>* subMeshMatIndexes, Il2CppList<Il2CppString*>* partNames, Il2CppList<int32_t>* partAssetIDs) {
		return ((T (*)(OptimizedModel*, int32_t, uintptr_t, Il2CppList<unsigned char>*, Il2CppList<Il2CppString*>*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3EF1B5C))(this, lodIndex, renderer, subMeshMatIndexes, partNames, partAssetIDs);
	}
	template <typename T = void> T EnableGPUSkin(Il2CppArray<uintptr_t>* materials) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3EF1F58))(this, materials);
	}
	template <typename T = void> T SetPartVisibleImpl(int32_t partAssetID, int32_t partIndex, bool visible, uintptr_t data) {
		return ((T (*)(OptimizedModel*, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x3EF20C8))(this, partAssetID, partIndex, visible, data);
	}
	template <typename T = void> T SetPartVisible(int32_t partAssetID, bool visible, int32_t partIndex) {
		return ((T (*)(OptimizedModel*, int32_t, bool, int32_t))(Il2CppBase() + 0x3EF23E4))(this, partAssetID, visible, partIndex);
	}
	template <typename T = void> T SetPartVisibleImpl_1(Il2CppString* partName, bool visible, uintptr_t data) {
		return ((T (*)(OptimizedModel*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3EF2564))(this, partName, visible, data);
	}
	template <typename T = void> T SetPartVisible_1(Il2CppString* partName, bool visible) {
		return ((T (*)(OptimizedModel*, Il2CppString*, bool))(Il2CppBase() + 0x3EF2784))(this, partName, visible);
	}
	template <typename T = void> T ForeachAllCombinedRenderer(void* action, int32_t lodIndex) {
		return ((T (*)(OptimizedModel*, void*, int32_t))(Il2CppBase() + 0x3EF1644))(this, action, lodIndex);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetFromGlobalSharedMaterials(Il2CppList<int32_t>* indexes) {
		return ((T (*)(OptimizedModel*, Il2CppList<int32_t>*))(Il2CppBase() + 0x3EF290C))(this, indexes);
	}
	template <typename T = bool> T IsChangePart(Il2CppArray<uintptr_t>* partNames, Il2CppString* part, bool matchWholeWords) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, Il2CppString*, bool))(Il2CppBase() + 0x3EF2B18))(this, partNames, part, matchWholeWords);
	}
	template <typename T = void> T ChangePartMaterial(Il2CppArray<uintptr_t>* partNames, int32_t matAssetID) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3EF2CC8))(this, partNames, matAssetID);
	}
	template <typename T = void> T ChangeTempPartMaterial(Il2CppArray<uintptr_t>* partNames, int32_t matAssetID, bool matchWholeWords) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x3EF304C))(this, partNames, matAssetID, matchWholeWords);
	}
	template <typename T = uintptr_t> T GetPartMaterial(Il2CppString* partName) {
		return ((T (*)(OptimizedModel*, Il2CppString*))(Il2CppBase() + 0x3EF3128))(this, partName);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetPartNames(int32_t partAssetID, int32_t partIndex, int32_t lodIndex) {
		return ((T (*)(OptimizedModel*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3EF328C))(this, partAssetID, partIndex, lodIndex);
	}
	template <typename T = void> T ChangePartMaterial_1(int32_t partAssetID, int32_t partIndex, int32_t matAssetID) {
		return ((T (*)(OptimizedModel*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3EF343C))(this, partAssetID, partIndex, matAssetID);
	}
	template <typename T = void> T ChangeTempPartMaterial_1(int32_t partAssetID, int32_t partIndex, int32_t matAssetID) {
		return ((T (*)(OptimizedModel*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x3EF3590))(this, partAssetID, partIndex, matAssetID);
	}
	template <typename T = void> T ChangePartMaterialImpl(Il2CppArray<uintptr_t>* partNames, int32_t matAssetID, bool isTemp, bool matchWholeWords) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x3EF2DA0))(this, partNames, matAssetID, isTemp, matchWholeWords);
	}
	template <typename T = void> T OnMatAssetReady(int32_t id, uintptr_t obj) {
		return ((T (*)(OptimizedModel*, int32_t, uintptr_t))(Il2CppBase() + 0x3EF3904))(this, id, obj);
	}
	template <typename T = void> T ChangePartMaterialImpl_1(Il2CppArray<uintptr_t>* partNames, uintptr_t mat, bool isTemp, bool matchWholeWords) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, uintptr_t, bool, bool))(Il2CppBase() + 0x3EF36E0))(this, partNames, mat, isTemp, matchWholeWords);
	}
	template <typename T = void> T ChangePartMaterialForRenderer(Il2CppArray<uintptr_t>* partNames, uintptr_t mat, bool isTemp, uintptr_t info, bool matchWholeWords) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, uintptr_t, bool, uintptr_t, bool))(Il2CppBase() + 0x3EF3B90))(this, partNames, mat, isTemp, info, matchWholeWords);
	}
	template <typename T = void> T RebuildMaterialIndexes(Il2CppList<uintptr_t>* newSubMeshMaterials, uintptr_t* globalMatIndexes, uintptr_t* subMeshMatIndexes) {
		return ((T (*)(OptimizedModel*, Il2CppList<uintptr_t>*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3EF40BC))(this, newSubMeshMaterials, globalMatIndexes, subMeshMatIndexes);
	}
	template <typename T = void> T RefreshCombinedRendererInfo(uintptr_t info) {
		return ((T (*)(OptimizedModel*, uintptr_t))(Il2CppBase() + 0x3EF4778))(this, info);
	}
	template <typename T = void> T RestoreTempPartMaterialImp(Il2CppArray<uintptr_t>* partNames, uintptr_t info, bool matchWholeWords) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x3EF4A30))(this, partNames, info, matchWholeWords);
	}
	template <typename T = void> T RestoreTempPartMaterial(Il2CppArray<uintptr_t>* partNames, bool matchWholeWords) {
		return ((T (*)(OptimizedModel*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3EF5090))(this, partNames, matchWholeWords);
	}
	template <typename T = void> T Initm__0(uintptr_t data) {
		return ((T (*)(OptimizedModel*, uintptr_t))(Il2CppBase() + 0x3EF5408))(this, data);
	}

};

}
