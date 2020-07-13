#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUHoudiniAsset
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_HoudiniAsset"));
	}

	template <typename T = uintptr_t> T& _assetType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _assetInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _nodeInfo() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _assetName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppString*> T& _assetOpName() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = Il2CppString*> T& _assetHelp() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& _assetID() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppString*> T& _assetPath() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _assetFileObject() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _objectNodes() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _rootGameObject() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _materialCache() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _parameters() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& _lastSyncedTransformMatrix() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppString*> T& _assetCacheFolderPath() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _subassetNames() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = int32_t> T& _selectedSubassetIndex() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = uintptr_t> T& _requestBuildAction() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = bool> T& _checkParameterChangeForCook() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = bool> T& _skipCookCheck() {
		return *(T*)((uintptr_t)this + 0x101);
	}
	template <typename T = bool> T& _uploadParameters() {
		return *(T*)((uintptr_t)this + 0x102);
	}
	template <typename T = uintptr_t> T& _cookStatus() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> T& _lastCookResult() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = bool> T& _isCookingAssetReloaded() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = bool> T& _bForceUpdate() {
		return *(T*)((uintptr_t)this + 0x10D);
	}
	template <typename T = int64_t> T& _sessionID() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = bool> T& _showInstanceInputs() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = bool> T& _showHDAOptions() {
		return *(T*)((uintptr_t)this + 0x119);
	}
	template <typename T = bool> T& _showGenerateSection() {
		return *(T*)((uintptr_t)this + 0x11A);
	}
	template <typename T = bool> T& _showBakeSection() {
		return *(T*)((uintptr_t)this + 0x11B);
	}
	template <typename T = bool> T& _showEventsSection() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = bool> T& _showCurvesSection() {
		return *(T*)((uintptr_t)this + 0x11D);
	}
	template <typename T = bool> T& _showInputNodesSection() {
		return *(T*)((uintptr_t)this + 0x11E);
	}
	template <typename T = bool> T& _showToolsSection() {
		return *(T*)((uintptr_t)this + 0x11F);
	}
	template <typename T = uintptr_t> T& _reloadEvent() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& _cookedEvent() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& _bakedEvent() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& _refreshUIDelegate() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& _downstreamConnectionCookedEvent() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = bool> T& _generateUVs() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = bool> T& _generateTangents() {
		return *(T*)((uintptr_t)this + 0x135);
	}
	template <typename T = bool> T& _generateNormals() {
		return *(T*)((uintptr_t)this + 0x136);
	}
	template <typename T = bool> T& _pushTransformToHoudini() {
		return *(T*)((uintptr_t)this + 0x137);
	}
	template <typename T = bool> T& _transformChangeTriggersCooks() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& _cookingTriggersDownCooks() {
		return *(T*)((uintptr_t)this + 0x139);
	}
	template <typename T = bool> T& _autoCookOnParameterChange() {
		return *(T*)((uintptr_t)this + 0x13A);
	}
	template <typename T = bool> T& _ignoreNonDisplayNodes() {
		return *(T*)((uintptr_t)this + 0x13B);
	}
	template <typename T = bool> T& _generateMeshUsingPoints() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = bool> T& _useLODGroups() {
		return *(T*)((uintptr_t)this + 0x13D);
	}
	template <typename T = bool> T& _curveEditorEnabled() {
		return *(T*)((uintptr_t)this + 0x13E);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _curves() {
		return *(T*)((uintptr_t)this + 0x140);
	}
	template <typename T = uintptr_t> T& _curveDrawCollision() {
		return *(T*)((uintptr_t)this + 0x144);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _curveDrawColliders() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& _curveDrawLayerMask() {
		return *(T*)((uintptr_t)this + 0x14C);
	}
	template <typename T = float> T& _curveProjectMaxDistance() {
		return *(T*)((uintptr_t)this + 0x150);
	}
	template <typename T = Il2CppVector3> T& _curveProjectDirection() {
		return *(T*)((uintptr_t)this + 0x154);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _inputNodes() {
		return *(T*)((uintptr_t)this + 0x160);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _handles() {
		return *(T*)((uintptr_t)this + 0x164);
	}
	template <typename T = bool> T& _handlesEnabled() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _attributeStores() {
		return *(T*)((uintptr_t)this + 0x16C);
	}
	template <typename T = bool> T& _editableNodesToolsEnabled() {
		return *(T*)((uintptr_t)this + 0x170);
	}
	template <typename T = uintptr_t> T& _toolsInfo() {
		return *(T*)((uintptr_t)this + 0x174);
	}
	template <typename T = uintptr_t> T& TerrainOptions() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = bool> T& _exportCustomInstance() {
		return *(T*)((uintptr_t)this + 0x17C);
	}
	template <typename T = uintptr_t> T& _instanceType() {
		return *(T*)((uintptr_t)this + 0x180);
	}
	template <typename T = uintptr_t> T& InstanceComponent() {
		return *(T*)((uintptr_t)this + 0x184);
	}
	template <typename T = Il2CppString*> T& _cookProgressDetail() {
		return *(T*)((uintptr_t)this + 0x188);
	}
	template <typename T = int32_t> T& _cookProgress() {
		return *(T*)((uintptr_t)this + 0x18C);
	}

	template <typename T = uintptr_t> T get_AssetType() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BAFD38))(this);
	}
	template <typename T = uintptr_t> T get_AssetInfo() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB2FD0))(this);
	}
	template <typename T = uintptr_t> T get_NodeInfo() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3034))(this);
	}
	template <typename T = Il2CppString*> T get_AssetName() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30A0))(this);
	}
	template <typename T = Il2CppString*> T get_AssetOpName() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30A8))(this);
	}
	template <typename T = Il2CppString*> T get_AssetHelp() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30B0))(this);
	}
	template <typename T = int32_t> T get_TransformInputCount() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30B8))(this);
	}
	template <typename T = int32_t> T get_GeoInputCount() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30C0))(this);
	}
	template <typename T = int32_t> T get_AssetID() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB1900))(this);
	}
	template <typename T = Il2CppString*> T get_AssetPath() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30C8))(this);
	}
	template <typename T = int32_t> T get_HandleCount() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30D0))(this);
	}
	template <typename T = uintptr_t> T get_OwnerGameObject() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BA8910))(this);
	}
	template <typename T = uintptr_t> T get_RootGameObject() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BA8918))(this);
	}
	template <typename T = uintptr_t> T get_Parameters() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30D8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_SubassetNames() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30E0))(this);
	}
	template <typename T = bool> T get_GenerateUVs() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30E8))(this);
	}
	template <typename T = void> T set_GenerateUVs(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB30F0))(this, value);
	}
	template <typename T = bool> T get_GenerateTangents() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB30F8))(this);
	}
	template <typename T = void> T set_GenerateTangents(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3100))(this, value);
	}
	template <typename T = bool> T get_GenerateNormals() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3108))(this);
	}
	template <typename T = void> T set_GenerateNormals(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3110))(this, value);
	}
	template <typename T = bool> T get_PushTransformToHoudini() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3118))(this);
	}
	template <typename T = void> T set_PushTransformToHoudini(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3120))(this, value);
	}
	template <typename T = bool> T get_TransformChangeTriggersCooks() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3128))(this);
	}
	template <typename T = void> T set_TransformChangeTriggersCooks(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3130))(this, value);
	}
	template <typename T = bool> T get_CookingTriggersDownCooks() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3138))(this);
	}
	template <typename T = void> T set_CookingTriggersDownCooks(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3140))(this, value);
	}
	template <typename T = bool> T get_AutoCookOnParameterChange() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3148))(this);
	}
	template <typename T = void> T set_AutoCookOnParameterChange(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3150))(this, value);
	}
	template <typename T = bool> T get_IgnoreNonDisplayNodes() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BA66C0))(this);
	}
	template <typename T = void> T set_IgnoreNonDisplayNodes(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3158))(this, value);
	}
	template <typename T = bool> T get_GenerateMeshUsingPoints() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3160))(this);
	}
	template <typename T = void> T set_GenerateMeshUsingPoints(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3168))(this, value);
	}
	template <typename T = bool> T get_UseLODGroups() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3170))(this);
	}
	template <typename T = void> T set_UseLODGroups(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3178))(this, value);
	}
	template <typename T = bool> T get_CurveEditorEnabled() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3180))(this);
	}
	template <typename T = void> T set_CurveEditorEnabled(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB3188))(this, value);
	}
	template <typename T = uintptr_t> T get_CurveDrawCollision() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3190))(this);
	}
	template <typename T = void> T set_CurveDrawCollision(uintptr_t value) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB3198))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurveDrawColliders() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB31A0))(this);
	}
	template <typename T = uintptr_t> T GetCurveDrawLayerMask() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB31A8))(this);
	}
	template <typename T = void> T SetCurveDrawLayerMask(uintptr_t mask) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB31B0))(this, mask);
	}
	template <typename T = bool> T get_HandlesEnabled() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB31B8))(this);
	}
	template <typename T = void> T set_HandlesEnabled(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB31C0))(this, value);
	}
	template <typename T = bool> T get_EditableNodesToolsEnabled() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB31C8))(this);
	}
	template <typename T = void> T set_EditableNodesToolsEnabled(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB31D0))(this, value);
	}
	template <typename T = uintptr_t> T get_ToolsInfo() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB31D8))(this);
	}
	template <typename T = bool> T get_ExportCustomInstance() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BA8D0C))(this);
	}
	template <typename T = void> T set_ExportCustomInstance(bool value) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB31E0))(this, value);
	}
	template <typename T = uintptr_t> T get_InstanceType() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB31E8))(this);
	}
	template <typename T = void> T set_InstanceType(uintptr_t value) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB31F0))(this, value);
	}
	template <typename T = void> T SetupAsset(uintptr_t assetType, Il2CppString* filePath, uintptr_t rootGameObject, uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BAFB00))(this, assetType, filePath, rootGameObject, session);
	}
	template <typename T = bool> T IsAssetSavedInScene() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB32B0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB32D4))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB32D8))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB32DC))(this);
	}
	template <typename T = void> T AssetUpdate() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB32E0))(this);
	}
	template <typename T = void> T RequestReload(bool bAsync) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BAFD34))(this, bAsync);
	}
	template <typename T = void> T RequestCook(bool bCheckParametersChanged, bool bAsync, bool bSkipCookCheck, bool bUploadParameters) {
		return ((T (*)(HEUHoudiniAsset*, bool, bool, bool, bool))(Il2CppBase() + 0x2BB32E4))(this, bCheckParametersChanged, bAsync, bSkipCookCheck, bUploadParameters);
	}
	template <typename T = void> T RequestBakeInPlace() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB32E8))(this);
	}
	template <typename T = void> T ClearBuildRequest() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB32FC))(this);
	}
	template <typename T = bool> T HasValidAssetPath() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3318))(this);
	}
	template <typename T = void> T ProcessRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) {
		return ((T (*)(HEUHoudiniAsset*, bool, int32_t))(Il2CppBase() + 0x2BB33C8))(this, bPromptForSubasset, desiredSubassetIndex);
	}
	template <typename T = bool> T StartRebuild(bool bPromptForSubasset, int32_t desiredSubassetIndex) {
		return ((T (*)(HEUHoudiniAsset*, bool, int32_t))(Il2CppBase() + 0x2BB3528))(this, bPromptForSubasset, desiredSubassetIndex);
	}
	template <typename T = bool> T FinishRebuild() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB3654))(this);
	}
	template <typename T = bool> T RecookAsync(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset) {
		return ((T (*)(HEUHoudiniAsset*, bool, bool, bool, bool))(Il2CppBase() + 0x2BB7010))(this, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset);
	}
	template <typename T = bool> T RecookBlocking(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset) {
		return ((T (*)(HEUHoudiniAsset*, bool, bool, bool, bool))(Il2CppBase() + 0x2BB788C))(this, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset);
	}
	template <typename T = void> T DoPostCookWork(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB6E6C))(this, session);
	}
	template <typename T = void> T ExecutePostCookCallbacks() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB7780))(this);
	}
	template <typename T = bool> T InternalStartRecook(bool bCheckParamsChanged, bool bSkipCookCheck, bool bUploadParameters, bool bUploadParameterPreset) {
		return ((T (*)(HEUHoudiniAsset*, bool, bool, bool, bool))(Il2CppBase() + 0x2BB706C))(this, bCheckParamsChanged, bSkipCookCheck, bUploadParameters, bUploadParameterPreset);
	}
	template <typename T = void> T SetCookStatus(uintptr_t status, uintptr_t result) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BB4290))(this, status, result);
	}
	template <typename T = void> T UpdateCookStatusProgress(Il2CppString* detail, float progess) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppString*, float))(Il2CppBase() + 0x2BA3664))(this, detail, progess);
	}
	template <typename T = void> T ShowCookStatusProgressBar(bool show) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BBA098))(this, show);
	}
	template <typename T = uintptr_t> T GetCookStatus() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBA208))(this);
	}
	template <typename T = void> T ProcessPoskCook() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBA210))(this);
	}
	template <typename T = bool> T StartHoudiniCookNode(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BBA020))(this, session);
	}
	template <typename T = void> T ProcessHoudiniCookStatus(bool bAsync) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BB78F8))(this, bAsync);
	}
	template <typename T = bool> T DoesAssetRequireRecook() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBBF18))(this);
	}
	template <typename T = void> T DeleteSessionDataOnly() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBCD7C))(this);
	}
	template <typename T = void> T DeleteAllGeneratedData() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB4458))(this);
	}
	template <typename T = void> T CleanUpInputNodes() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBD404))(this);
	}
	template <typename T = void> T DeleteAssetCacheData(bool bRegisterUndo) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BBD91C))(this, bRegisterUndo);
	}
	template <typename T = void> T GenerateParameters(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB5B80))(this, session);
	}
	template <typename T = void> T DownloadParameterPresetFromHoudini(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BBA56C))(this, session);
	}
	template <typename T = void> T UploadParameterPresetToHoudini(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB809C))(this, session);
	}
	template <typename T = void> T UpdateParameterInputsToHoudini(uintptr_t session, bool bForceUpdate) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, bool))(Il2CppBase() + 0x2BB8314))(this, session, bForceUpdate);
	}
	template <typename T = Il2CppString*> T GetAssetPath() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC06DC))(this);
	}
	template <typename T = bool> T LoadAssetFileWithSubasset(uintptr_t session, bool bPromptForSubasset, int32_t desiredSubassetIndex) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x2BB46D4))(this, session, bPromptForSubasset, desiredSubassetIndex);
	}
	template <typename T = bool> T CreateAndCookAsset(uintptr_t session, int32_t subassetIndex, uintptr_t* newAssetID, bool bCookTemplatedGeos) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, int32_t, uintptr_t*, bool))(Il2CppBase() + 0x2BB4DF4))(this, session, subassetIndex, newAssetID, bCookTemplatedGeos);
	}
	template <typename T = bool> T CreateAndCookCurveAsset(uintptr_t session, uintptr_t* newAssetID, bool bCookTemplatedGeos) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x2BB51F8))(this, session, newAssetID, bCookTemplatedGeos);
	}
	template <typename T = bool> T CreateAndCookInputAsset(uintptr_t session, uintptr_t* newAssetID, bool bCookTemplatedGeos) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x2BB5344))(this, session, newAssetID, bCookTemplatedGeos);
	}
	template <typename T = void> T CreateAssetInputs(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB56BC))(this, session);
	}
	template <typename T = void> T UploadCurvesParameters(uintptr_t session, bool bCheckParamsChanged) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, bool))(Il2CppBase() + 0x2BB98B0))(this, session, bCheckParamsChanged);
	}
	template <typename T = void> T UploadAttributeValues(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB9AE0))(this, session);
	}
	template <typename T = void> T UploadInputNodes(uintptr_t session, bool bForceUpdate) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, bool))(Il2CppBase() + 0x2BB9E40))(this, session, bForceUpdate);
	}
	template <typename T = bool> T HasInputNodeTransformChanged() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC0F0C))(this);
	}
	template <typename T = void> T NotifyInputNodesCookFinished() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BB6CD0))(this);
	}
	template <typename T = bool> T CreateObjects(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB5E8C))(this, session);
	}
	template <typename T = bool> T GetObjectInfos(uintptr_t session, Il2CppArray<uintptr_t>** objectInfos, Il2CppArray<uintptr_t>** objectTransforms) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, Il2CppArray<uintptr_t>**, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2BC10E4))(this, session, objectInfos, objectTransforms);
	}
	template <typename T = void> T UpdateAllObjectNodes(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BBA940))(this, session);
	}
	template <typename T = uintptr_t> T CreateObjectNode(uintptr_t session, uintptr_t objectInfo, uintptr_t objectTranform) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BC16FC))(this, session, objectInfo, objectTranform);
	}
	template <typename T = void> T GenerateObjectsGeometry(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB5FFC))(this, session);
	}
	template <typename T = void> T GenerateInstances(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB6214))(this, session);
	}
	template <typename T = void> T GenerateHandles(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB64CC))(this, session);
	}
	template <typename T = void> T CleanUpHandles() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBD77C))(this);
	}
	template <typename T = uintptr_t> T GetHandleByName(Il2CppString* handleName) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppString*))(Il2CppBase() + 0x2BC3404))(this, handleName);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetHandles() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC35F8))(this);
	}
	template <typename T = int32_t> T NumHandles() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC3600))(this);
	}
	template <typename T = uintptr_t> T GetObjectTransform(uintptr_t session, int32_t objectID) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, int32_t))(Il2CppBase() + 0x2BC3694))(this, session, objectID);
	}
	template <typename T = uintptr_t> T GetObjectWithID(int32_t objId) {
		return ((T (*)(HEUHoudiniAsset*, int32_t))(Il2CppBase() + 0x2BC3A54))(this, objId);
	}
	template <typename T = void> T InvokeBakedEvent(bool bSuccess, Il2CppList<uintptr_t>* outputObjects) {
		return ((T (*)(HEUHoudiniAsset*, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BC3B90))(this, bSuccess, outputObjects);
	}
	template <typename T = void> T ProcessDependentAssets(bool bSerializationRecoveryOnly, bool bForceReconnect, bool isDuplication) {
		return ((T (*)(HEUHoudiniAsset*, bool, bool, bool))(Il2CppBase() + 0x2BC3C3C))(this, bSerializationRecoveryOnly, bForceReconnect, isDuplication);
	}
	template <typename T = uintptr_t> T CloneAssetWithoutHDA(uintptr_t bakedAssetPath, bool bWriteMeshesToAssetDatabase, bool bReconnectPrefabInstances) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, bool, bool))(Il2CppBase() + 0x2BC3CF8))(this, bakedAssetPath, bWriteMeshesToAssetDatabase, bReconnectPrefabInstances);
	}
	template <typename T = void> T BakeToNewPrefab() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC47D0))(this);
	}
	template <typename T = void> T BakeToNewStandalone() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC4AA8))(this);
	}
	template <typename T = void> T BakeToExistingPrefab(uintptr_t bakeTargetGO) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BC4C1C))(this, bakeTargetGO);
	}
	template <typename T = void> T BakeToExistingStandalone(uintptr_t bakeTargetGO) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BC5624))(this, bakeTargetGO);
	}
	template <typename T = void> T NotifyUpstreamCooked(uintptr_t upstreamAsset, bool bSuccess, Il2CppList<uintptr_t>* outputs) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, bool, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BC66A4))(this, upstreamAsset, bSuccess, outputs);
	}
	template <typename T = void> T ConnectToUpstream(uintptr_t upstreamAsset) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BC66A8))(this, upstreamAsset);
	}
	template <typename T = void> T DisconnectFromUpstream(uintptr_t upstreamAsset) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BC6850))(this, upstreamAsset);
	}
	template <typename T = void> T AddDownstreamConnection(void* receiver) {
		return ((T (*)(HEUHoudiniAsset*, void*))(Il2CppBase() + 0x2BC6780))(this, receiver);
	}
	template <typename T = void> T RemoveDownstreamConnection(void* receiver) {
		return ((T (*)(HEUHoudiniAsset*, void*))(Il2CppBase() + 0x2BC6928))(this, receiver);
	}
	template <typename T = void> T ClearAllUpstreamConnections() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBCFC4))(this);
	}
	template <typename T = void> T CookUpstreamConnections(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB7F08))(this, session);
	}
	template <typename T = void> T GetHoudiniTransformAndApply(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BC6AFC))(this, session);
	}
	template <typename T = void> T UploadUnityTransform(uintptr_t session, bool bOnlySendIfChangedFromLastSync) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, bool))(Il2CppBase() + 0x2BB67C0))(this, session, bOnlySendIfChangedFromLastSync);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T GetMaterialDataMap() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC6F84))(this);
	}
	template <typename T = uintptr_t> T GetUnitySubstanceMaterialDataFromCache(int32_t materialKey) {
		return ((T (*)(HEUHoudiniAsset*, int32_t))(Il2CppBase() + 0x2BC723C))(this, materialKey);
	}
	template <typename T = uintptr_t> T GetMaterialDataFromCache(int32_t materialKey) {
		return ((T (*)(HEUHoudiniAsset*, int32_t))(Il2CppBase() + 0x2BC741C))(this, materialKey);
	}
	template <typename T = uintptr_t> T GetMaterialData(uintptr_t material) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BC75F0))(this, material);
	}
	template <typename T = Il2CppString*> static T GenerateDefaultMaterialName(int32_t geoID, int32_t partID) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2BC7810))(0, geoID, partID);
	}
	template <typename T = uintptr_t> T GetOrCreateDefaultMaterialInCache(uintptr_t session, int32_t geoID, int32_t partID, bool bWriteToFile) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x2BC792C))(this, session, geoID, partID, bWriteToFile);
	}
	template <typename T = uintptr_t> T CreateMaterialInCache(int32_t materialKey, Il2CppString* materialName, uintptr_t sourceType, bool bWriteToFile) {
		return ((T (*)(HEUHoudiniAsset*, int32_t, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x2BC7A7C))(this, materialKey, materialName, sourceType, bWriteToFile);
	}
	template <typename T = uintptr_t> T CreateMaterialCopyInCache(uintptr_t sourceMaterial, int32_t materialKey, Il2CppString* materialName, bool bWriteToFile) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, int32_t, Il2CppString*, bool))(Il2CppBase() + 0x2BC7D90))(this, sourceMaterial, materialKey, materialName, bWriteToFile);
	}
	template <typename T = uintptr_t> T CreateUnitySubstanceMaterialData(int32_t materialKey, Il2CppString* materialPath, Il2CppString* substanceName, int32_t substanceIndex) {
		return ((T (*)(HEUHoudiniAsset*, int32_t, Il2CppString*, Il2CppString*, int32_t))(Il2CppBase() + 0x2BC8088))(this, materialKey, materialPath, substanceName, substanceIndex);
	}
	template <typename T = uintptr_t> T CreateHoudiniMaterialData(uintptr_t session, int32_t materialID, int32_t geoID, int32_t partID) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BC8D98))(this, session, materialID, geoID, partID);
	}
	template <typename T = void> T ClearMaterialCache() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBCF2C))(this);
	}
	template <typename T = void> T UpdateHoudiniMaterials(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BBA660))(this, session);
	}
	template <typename T = void> T RemoveUnusedMaterials() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BBBA2C))(this);
	}
	template <typename T = void> T RemoveMaterial(uintptr_t material) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BC9E70))(this, material);
	}
	template <typename T = bool> T IsAssetValidInHoudini(uintptr_t session) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BB7F00))(this, session);
	}
	template <typename T = bool> T HasTransformChangedSinceLastUpdate() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCA044))(this);
	}
	template <typename T = void> T GetClonableParts(Il2CppList<uintptr_t>* clonableParts) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BC4498))(this, clonableParts);
	}
	template <typename T = uintptr_t> T GetPartWithID(int32_t partID) {
		return ((T (*)(HEUHoudiniAsset*, int32_t))(Il2CppBase() + 0x2BCA3B8))(this, partID);
	}
	template <typename T = void> T GetOutputGameObjects(Il2CppList<uintptr_t>* outputObjects) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BB42C4))(this, outputObjects);
	}
	template <typename T = void> T GetOutput(Il2CppList<uintptr_t>* outputs) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BCA874))(this, outputs);
	}
	template <typename T = uintptr_t> T GetInternalHDAPartWithGameObject(uintptr_t outputGameObject) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BCAB9C))(this, outputGameObject);
	}
	template <typename T = uintptr_t> T GetInternalGeoNode(int32_t nodeID) {
		return ((T (*)(HEUHoudiniAsset*, int32_t))(Il2CppBase() + 0x2BCAFE4))(this, nodeID);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetCurves() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC04C8))(this);
	}
	template <typename T = uintptr_t> T GetCurve(Il2CppString* curveName) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppString*))(Il2CppBase() + 0x2BCB3DC))(this, curveName);
	}
	template <typename T = int32_t> T GetEditableCurveCount() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCB5D8))(this);
	}
	template <typename T = void> T AddCurve(uintptr_t curve) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BCB77C))(this, curve);
	}
	template <typename T = void> T RemoveCurve(uintptr_t curve) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BA5844))(this, curve);
	}
	template <typename T = void> T AddCurveDrawCollider(uintptr_t newCollider) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BCB854))(this, newCollider);
	}
	template <typename T = void> T RemoveCurveDrawCollider(uintptr_t collider) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BCB92C))(this, collider);
	}
	template <typename T = void> T ClearCurveDrawColliders() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCB9C0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetInputNodes() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCBA4C))(this);
	}
	template <typename T = uintptr_t> T GetInputNode(Il2CppString* inputName) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppString*))(Il2CppBase() + 0x2BCBA54))(this, inputName);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetNonParameterInputNodes() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCBC50))(this);
	}
	template <typename T = void> T AddInputNode(uintptr_t node) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BA7A0C))(this, node);
	}
	template <typename T = void> T RemoveInputNode(uintptr_t node) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BA55EC))(this, node);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetAttributesStores() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCBE64))(this);
	}
	template <typename T = int32_t> T NumAttributeStores() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCBE6C))(this);
	}
	template <typename T = uintptr_t> T GetAttributeStore(Il2CppString* geoName, int32_t partID) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppString*, int32_t))(Il2CppBase() + 0x2BCBF00))(this, geoName, partID);
	}
	template <typename T = void> T AddAttributeStore(uintptr_t attributeStore) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BCC114))(this, attributeStore);
	}
	template <typename T = void> T RemoveAttributeStore(uintptr_t attributeStore) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BCC330))(this, attributeStore);
	}
	template <typename T = void> T ReorderAttributeStore(int32_t oldIndex, int32_t newIndex) {
		return ((T (*)(HEUHoudiniAsset*, int32_t, int32_t))(Il2CppBase() + 0x2BCC3D0))(this, oldIndex, newIndex);
	}
	template <typename T = uintptr_t> static T GetSceneHDAPartWithGameObject(uintptr_t outputGameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BCC548))(0, outputGameObject);
	}
	template <typename T = uintptr_t> static T GetSceneHDAAssetFromGameObject(uintptr_t outputGameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BCC73C))(0, outputGameObject);
	}
	template <typename T = bool> static T IsHoudiniAssetOutput(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BCC924))(0, go);
	}
	template <typename T = bool> static T IsHoudiniAssetRoot(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BCCB14))(0, go);
	}
	template <typename T = void> T PopulateObjectInstanceInfos(Il2CppList<uintptr_t>* objInstanceInfos) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BCCBF0))(this, objInstanceInfos);
	}
	template <typename T = void> T AddToAssetDBCache(Il2CppString* assetObjectFileName, uintptr_t objectToAdd, uintptr_t targetAssetDBObject) {
		return ((T (*)(HEUHoudiniAsset*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BCCF60))(this, assetObjectFileName, objectToAdd, targetAssetDBObject);
	}
	template <typename T = void> static T SetCurvesVisibilityInScene(bool bShow) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BCCFB0))(0, bShow);
	}
	template <typename T = uintptr_t> T GetAssetSession(bool bCreateIfInvalid) {
		return ((T (*)(HEUHoudiniAsset*, bool))(Il2CppBase() + 0x2BA568C))(this, bCreateIfInvalid);
	}
	template <typename T = Il2CppString*> T GetValidAssetCacheFolderPath() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BC7B9C))(this);
	}
	template <typename T = void> T HideAllGeometry() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCD320))(this);
	}
	template <typename T = void> T CalculateVisibility() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCD638))(this);
	}
	template <typename T = void> T DisableAllColliders() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCD954))(this);
	}
	template <typename T = void> T CalculateColliderState() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCDC6C))(this);
	}
	template <typename T = uintptr_t> T DuplicateAsset() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCDF84))(this);
	}
	template <typename T = void> T ResetMaterialOverrides() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCF0EC))(this);
	}
	template <typename T = void> T ResetParametersToDefault() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCF2B0))(this);
	}
	template <typename T = uintptr_t> T GetAssetPreset() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BCF690))(this);
	}
	template <typename T = void> T LoadAssetPresetAndCook(uintptr_t assetPreset) {
		return ((T (*)(HEUHoudiniAsset*, uintptr_t))(Il2CppBase() + 0x2BCFAE4))(this, assetPreset);
	}
	template <typename T = void> T SyncInternalParametersForUndoCompare() {
		return ((T (*)(HEUHoudiniAsset*))(Il2CppBase() + 0x2BD0070))(this);
	}

};

}
