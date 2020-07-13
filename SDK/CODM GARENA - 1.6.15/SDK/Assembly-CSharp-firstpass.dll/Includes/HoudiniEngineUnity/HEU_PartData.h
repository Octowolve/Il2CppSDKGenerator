#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUPartData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_PartData"));
	}

	template <typename T = int32_t> T& _partID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _partName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _objectNodeID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _geoID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _partType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _geoNode() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _isPartInstanced() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _partPointCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _isObjectInstancer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& _objectInstancesGenerated() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _objectInstanceInfos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& _terrainOffsetPosition() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _assetDBTerrainData() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _isPartEditable() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _partOutputType() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _curve() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& _attributesStore() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _haveInstancesBeenGenerated() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _meshVertexCount() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _generatedOutput() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_PartID() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA7944))(this);
	}
	template <typename T = Il2CppString*> T get_PartName() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA69B8))(this);
	}
	template <typename T = uintptr_t> T get_ParentGeoNode() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BDF5F0))(this);
	}
	template <typename T = uintptr_t> T get_ParentAsset() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE56E0))(this);
	}
	template <typename T = bool> T IsPartInstancer() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA96CC))(this);
	}
	template <typename T = bool> T IsPartInstanced() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA88EC))(this);
	}
	template <typename T = int32_t> T GetPartPointCount() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE57BC))(this);
	}
	template <typename T = bool> T IsObjectInstancer() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE57C4))(this);
	}
	template <typename T = bool> T get_ObjectInstancesBeenGenerated() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BDFC10))(this);
	}
	template <typename T = void> T set_ObjectInstancesBeenGenerated(bool value) {
		return ((T (*)(HEUPartData*, bool))(Il2CppBase() + 0x2BAA588))(this, value);
	}
	template <typename T = bool> T IsPartVolume() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA8AA4))(this);
	}
	template <typename T = bool> T IsPartCurve() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA88FC))(this);
	}
	template <typename T = bool> T IsPartMesh() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA8A94))(this);
	}
	template <typename T = bool> T IsPartEditable() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE57CC))(this);
	}
	template <typename T = bool> T HaveInstancesBeenGenerated() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA96E0))(this);
	}
	template <typename T = int32_t> T get_MeshVertexCount() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE57D4))(this);
	}
	template <typename T = uintptr_t> T get_GeneratedOutput() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE57DC))(this);
	}
	template <typename T = uintptr_t> T get_OutputGameObject() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA7914))(this);
	}
	template <typename T = void> T Initialize(uintptr_t session, int32_t partID, int32_t geoID, int32_t objectNodeID, uintptr_t geoNode, uintptr_t partInfo, uintptr_t partOutputType, bool isEditable) {
		return ((T (*)(HEUPartData*, uintptr_t, int32_t, int32_t, int32_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BA7AEC))(this, session, partID, geoID, objectNodeID, geoNode, partInfo, partOutputType, isEditable);
	}
	template <typename T = void> T SetGameObjectName(Il2CppString* partName) {
		return ((T (*)(HEUPartData*, Il2CppString*))(Il2CppBase() + 0x2BA843C))(this, partName);
	}
	template <typename T = void> T SetGameObject(uintptr_t gameObject) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BA88BC))(this, gameObject);
	}
	template <typename T = void> T DestroyAllData() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE57E4))(this);
	}
	template <typename T = void> T ApplyHAPITransform(uintptr_t hapiTransform) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BAA8BC))(this, hapiTransform);
	}
	template <typename T = void> T GetDebugInfo(uintptr_t sb) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BAAEF4))(this, sb);
	}
	template <typename T = bool> T IsUsingMaterial(uintptr_t materialData) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BAB3E8))(this, materialData);
	}
	template <typename T = void> T GetClonableObjects(Il2CppList<uintptr_t>* clonableObjects) {
		return ((T (*)(HEUPartData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BE5B04))(this, clonableObjects);
	}
	template <typename T = void> T GetClonableParts(Il2CppList<uintptr_t>* clonableParts) {
		return ((T (*)(HEUPartData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BAB5B0))(this, clonableParts);
	}
	template <typename T = void> T GetOutputGameObjects(Il2CppList<uintptr_t>* outputObjects) {
		return ((T (*)(HEUPartData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BAB854))(this, outputObjects);
	}
	template <typename T = void> T GetOutput(Il2CppList<uintptr_t>* outputs) {
		return ((T (*)(HEUPartData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BABB00))(this, outputs);
	}
	template <typename T = uintptr_t> T GetHDAPartWithGameObject(uintptr_t inGameObject) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BABDDC))(this, inGameObject);
	}
	template <typename T = void> T SetObjectInstancer(bool bObjectInstancer) {
		return ((T (*)(HEUPartData*, bool))(Il2CppBase() + 0x2BE5C1C))(this, bObjectInstancer);
	}
	template <typename T = void> T ClearInstances() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BDFC18))(this);
	}
	template <typename T = void> T ClearObjectInstanceInfos() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE59D0))(this);
	}
	template <typename T = void> T ClearInvalidObjectInstanceInfos() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BDFD54))(this);
	}
	template <typename T = void> T ClearGeneratedData() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA69C8))(this);
	}
	template <typename T = void> T ExportCustomInstance(uintptr_t session) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BA8D14))(this, session);
	}
	template <typename T = void> T GeneratePartInstances(uintptr_t session) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BA96E8))(this, session);
	}
	template <typename T = void> T GenerateInstancesFromObjectID(uintptr_t session, int32_t objectNodeID) {
		return ((T (*)(HEUPartData*, uintptr_t, int32_t))(Il2CppBase() + 0x2BE1938))(this, session, objectNodeID);
	}
	template <typename T = void> T GenerateInstancesFromObject(uintptr_t session, uintptr_t sourceObject) {
		return ((T (*)(HEUPartData*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BE64E0))(this, session, sourceObject);
	}
	template <typename T = void> T GenerateInstancesFromObjectIds(uintptr_t session) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BE0058))(this, session);
	}
	template <typename T = void> T GenerateInstancesFromUnityAssetPathAttribute(uintptr_t session, Il2CppString* unityInstanceAttr) {
		return ((T (*)(HEUPartData*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BE0818))(this, session, unityInstanceAttr);
	}
	template <typename T = void> T GenerateInstancesFromUnityAssetPath(uintptr_t session, Il2CppString* assetPath) {
		return ((T (*)(HEUPartData*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BE1300))(this, session, assetPath);
	}
	template <typename T = void> T CreateNewInstanceFromObject(uintptr_t sourceObject, int32_t instanceIndex, uintptr_t parentTransform, uintptr_t hapiTransform, int32_t instancedObjectNodeID, Il2CppString* instancedObjectPath, Il2CppVector3 rotationOffset, Il2CppVector3 scaleOffset) {
		return ((T (*)(HEUPartData*, uintptr_t, int32_t, uintptr_t, uintptr_t, int32_t, Il2CppString*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x2BE606C))(this, sourceObject, instanceIndex, parentTransform, hapiTransform, instancedObjectNodeID, instancedObjectPath, rotationOffset, scaleOffset);
	}
	template <typename T = uintptr_t> T GetCurve(bool bEditableOnly) {
		return ((T (*)(HEUPartData*, bool))(Il2CppBase() + 0x2BAC2AC))(this, bEditableOnly);
	}
	template <typename T = void> T SetVisiblity(bool bVisibility) {
		return ((T (*)(HEUPartData*, bool))(Il2CppBase() + 0x2BAC68C))(this, bVisibility);
	}
	template <typename T = void> T CalculateVisibility(bool bParentVisibility, bool bParentDisplayGeo) {
		return ((T (*)(HEUPartData*, bool, bool))(Il2CppBase() + 0x2BAC568))(this, bParentVisibility, bParentDisplayGeo);
	}
	template <typename T = void> T SetColliderState(bool bEnabled) {
		return ((T (*)(HEUPartData*, bool))(Il2CppBase() + 0x2BACDF4))(this, bEnabled);
	}
	template <typename T = void> T CalculateColliderState() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BAC9C0))(this);
	}
	template <typename T = void> T CopyGameObjectComponents(uintptr_t sourceGO, uintptr_t targetGO, Il2CppString* assetName, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToTargetMeshMap, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToCopiedMaterials, bool bWriteMeshesToAssetDatabase, uintptr_t bakedAssetPath, uintptr_t assetDBObject, Il2CppString* assetObjectFileName, bool bDeleteExistingComponents, bool bDontDeletePersistantResources) {
		return ((T (*)(HEUPartData*, uintptr_t, uintptr_t, Il2CppString*, Il2CppDictionary<uintptr_t, uintptr_t>*, Il2CppDictionary<uintptr_t, uintptr_t>*, bool, uintptr_t, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x2BE6A74))(this, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials, bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources);
	}
	template <typename T = void> T CopyChildGameObjects(uintptr_t sourceGO, uintptr_t targetGO, Il2CppString* assetName, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToTargetMeshMap, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToCopiedMaterials, bool bWriteMeshesToAssetDatabase, uintptr_t bakedAssetPath, uintptr_t assetDBObject, Il2CppString* assetObjectFileName, bool bDeleteExistingComponents, bool bDontDeletePersistantResources) {
		return ((T (*)(HEUPartData*, uintptr_t, uintptr_t, Il2CppString*, Il2CppDictionary<uintptr_t, uintptr_t>*, Il2CppDictionary<uintptr_t, uintptr_t>*, bool, uintptr_t, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x2BE826C))(this, sourceGO, targetGO, assetName, sourceToTargetMeshMap, sourceToCopiedMaterials, bWriteMeshesToAssetDatabase, bakedAssetPath, assetDBObject, assetObjectFileName, bDeleteExistingComponents, bDontDeletePersistantResources);
	}
	template <typename T = uintptr_t> T BakePartToNewGameObject(uintptr_t parentTransform, bool bWriteMeshesToAssetDatabase, uintptr_t bakedAssetPath, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToTargetMeshMap, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToCopiedMaterials, uintptr_t assetDBObject, Il2CppString* assetObjectFileName, bool bReconnectPrefabInstances) {
		return ((T (*)(HEUPartData*, uintptr_t, bool, uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*, Il2CppDictionary<uintptr_t, uintptr_t>*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x2BC464C))(this, parentTransform, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances);
	}
	template <typename T = void> T BakePartToGameObject(uintptr_t targetGO, bool bDeleteExistingComponents, bool bDontDeletePersistantResources, bool bWriteMeshesToAssetDatabase, uintptr_t bakedAssetPath, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToTargetMeshMap, Il2CppDictionary<uintptr_t, uintptr_t>* sourceToCopiedMaterials, uintptr_t assetDBObject, Il2CppString* assetObjectFileName, bool bReconnectPrefabInstances) {
		return ((T (*)(HEUPartData*, uintptr_t, bool, bool, bool, uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*, Il2CppDictionary<uintptr_t, uintptr_t>*, uintptr_t, Il2CppString*, bool))(Il2CppBase() + 0x2BC5FB0))(this, targetGO, bDeleteExistingComponents, bDontDeletePersistantResources, bWriteMeshesToAssetDatabase, bakedAssetPath, sourceToTargetMeshMap, sourceToCopiedMaterials, assetDBObject, assetObjectFileName, bReconnectPrefabInstances);
	}
	template <typename T = bool> T GenerateMesh(uintptr_t session, bool bGenerateUVs, bool bGenerateTangents, bool bGenerateNormals, bool bUseLODGroups) {
		return ((T (*)(HEUPartData*, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x2BDF18C))(this, session, bGenerateUVs, bGenerateTangents, bGenerateNormals, bUseLODGroups);
	}
	template <typename T = void> T ProcessCurvePart(uintptr_t session) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BA7F10))(this, session);
	}
	template <typename T = void> T SyncAttributesStore(uintptr_t session, int32_t geoID, uintptr_t partInfo) {
		return ((T (*)(HEUPartData*, uintptr_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BA85A4))(this, session, geoID, partInfo);
	}
	template <typename T = void> T SetupAttributeGeometry(uintptr_t session) {
		return ((T (*)(HEUPartData*, uintptr_t))(Il2CppBase() + 0x2BDF78C))(this, session);
	}
	template <typename T = void> T DestroyAttributesStore() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA874C))(this);
	}
	template <typename T = void> T PopulateObjectInstanceInfos(Il2CppList<uintptr_t>* objInstanceInfos) {
		return ((T (*)(HEUPartData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BE1E24))(this, objInstanceInfos);
	}
	template <typename T = void> T SetObjectInstanceInfos(Il2CppList<uintptr_t>* sourceObjectInstanceInfos) {
		return ((T (*)(HEUPartData*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BA74B4))(this, sourceObjectInstanceInfos);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetObjectInstanceInfos() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BA69C0))(this);
	}
	template <typename T = uintptr_t> T CreateObjectInstanceInfo(uintptr_t instancedObject, int32_t instancedObjectNodeID, Il2CppString* instancedObjectPath) {
		return ((T (*)(HEUPartData*, uintptr_t, int32_t, Il2CppString*))(Il2CppBase() + 0x2BE692C))(this, instancedObject, instancedObjectNodeID, instancedObjectPath);
	}
	template <typename T = uintptr_t> T GetObjectInstanceInfoWithObjectPath(Il2CppString* path) {
		return ((T (*)(HEUPartData*, Il2CppString*))(Il2CppBase() + 0x2BE67E8))(this, path);
	}
	template <typename T = uintptr_t> T GetObjectInstanceInfoWithObjectID(int32_t objNodeID) {
		return ((T (*)(HEUPartData*, int32_t))(Il2CppBase() + 0x2BE5F30))(this, objNodeID);
	}
	template <typename T = void> T SetTerrainPart(uintptr_t terrainDataObject, Il2CppVector3 offsetPosition) {
		return ((T (*)(HEUPartData*, uintptr_t, Il2CppVector3))(Il2CppBase() + 0x2BE85CC))(this, terrainDataObject, offsetPosition);
	}
	template <typename T = Il2CppString*> static T AppendBakedCloneName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2BC65E0))(0, name);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HEUPartData*))(Il2CppBase() + 0x2BE85E4))(this);
	}
	template <typename T = void> static T DestroyParts(Il2CppList<uintptr_t>* parts) {
		return ((T (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BA54E4))(0, parts);
	}
	template <typename T = void> static T DestroyPart(uintptr_t part) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BA598C))(0, part);
	}
	template <typename T = int32_t> static T CopyGameObjectComponentsm__0(uintptr_t a, uintptr_t b) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BE8708))(0, a, b);
	}

};

}
