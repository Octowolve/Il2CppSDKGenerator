#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUObjectNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_ObjectNode"));
	}

	template <typename T = Il2CppString*> T& _objName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _parentAsset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _objectInfo() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _geoNodes() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _objectTransform() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = int32_t> T get_ObjectID() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BA7AE4))(this);
	}
	template <typename T = Il2CppString*> T get_ObjectName() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BAA5C8))(this);
	}
	template <typename T = uintptr_t> T get_ParentAsset() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BA524C))(this);
	}
	template <typename T = bool> T IsInstancer() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BA66B8))(this);
	}
	template <typename T = bool> T IsInstanced() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BA88F4))(this);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BA50FC))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BDE92C))(this);
	}
	template <typename T = void> T SyncWithObjectInfo(uintptr_t session) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BDEAF8))(this, session);
	}
	template <typename T = void> T Initialize(uintptr_t session, uintptr_t objectInfo, uintptr_t objectTranform, uintptr_t parentAsset) {
		return ((T (*)(HEUObjectNode*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BC199C))(this, session, objectInfo, objectTranform, parentAsset);
	}
	template <typename T = void> T DestroyAllData() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BBCDC4))(this);
	}
	template <typename T = uintptr_t> T CreateGeoNode(uintptr_t session, uintptr_t geoInfo) {
		return ((T (*)(HEUObjectNode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BDED00))(this, session, geoInfo);
	}
	template <typename T = void> T GetDebugInfo(uintptr_t sb) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BDEE04))(this, sb);
	}
	template <typename T = void> T SetObjectInfo(uintptr_t newObjectInfo) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BC197C))(this, newObjectInfo);
	}
	template <typename T = void> T UpdateObject(uintptr_t session, bool bForceUpdate) {
		return ((T (*)(HEUObjectNode*, uintptr_t, bool))(Il2CppBase() + 0x2BBAF4C))(this, session, bForceUpdate);
	}
	template <typename T = void> T GenerateGeometry(uintptr_t session) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BC1E48))(this, session);
	}
	template <typename T = void> T GeneratePartInstances(uintptr_t session) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BC27D0))(this, session);
	}
	template <typename T = void> T ApplyObjectTransformToGeoNodes() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BDF5F8))(this);
	}
	template <typename T = bool> T IsUsingMaterial(uintptr_t materialData) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BC9C8C))(this, materialData);
	}
	template <typename T = void> T GetClonableParts(Il2CppList<uintptr_t>* clonableParts) {
		return ((T (*)(HEUObjectNode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BCA210))(this, clonableParts);
	}
	template <typename T = uintptr_t> T GetPartWithID(int32_t partID) {
		return ((T (*)(HEUObjectNode*, int32_t))(Il2CppBase() + 0x2BCA548))(this, partID);
	}
	template <typename T = void> T GetOutputGameObjects(Il2CppList<uintptr_t>* outputObjects) {
		return ((T (*)(HEUObjectNode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BCA6E0))(this, outputObjects);
	}
	template <typename T = void> T GetOutput(Il2CppList<uintptr_t>* outputs) {
		return ((T (*)(HEUObjectNode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BCAA08))(this, outputs);
	}
	template <typename T = uintptr_t> T GetHDAPartWithGameObject(uintptr_t outputGameObject) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BCADC0))(this, outputGameObject);
	}
	template <typename T = uintptr_t> T GetGeoNode(int32_t nodeID) {
		return ((T (*)(HEUObjectNode*, int32_t))(Il2CppBase() + 0x2BCB208))(this, nodeID);
	}
	template <typename T = void> T GetCurves(Il2CppList<uintptr_t>* curves, bool bEditableOnly) {
		return ((T (*)(HEUObjectNode*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x2BDF8E4))(this, curves, bEditableOnly);
	}
	template <typename T = void> T GenerateObjectInstances(uintptr_t session) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BC2964))(this, session);
	}
	template <typename T = void> T PopulateObjectInstanceInfos(Il2CppList<uintptr_t>* objInstanceInfos) {
		return ((T (*)(HEUObjectNode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BCCD84))(this, objInstanceInfos);
	}
	template <typename T = void> T ProcessUnityScriptAttributes(uintptr_t session) {
		return ((T (*)(HEUObjectNode*, uintptr_t))(Il2CppBase() + 0x2BB7C2C))(this, session);
	}
	template <typename T = void> T HideAllGeometry() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BCD4AC))(this);
	}
	template <typename T = void> T CalculateVisibility() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BCD7C4))(this);
	}
	template <typename T = void> T CalculateColliderState() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BCDDF8))(this);
	}
	template <typename T = void> T DisableAllColliders() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BCDAE0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HEUObjectNode*))(Il2CppBase() + 0x2BE1EC4))(this);
	}

};

}
