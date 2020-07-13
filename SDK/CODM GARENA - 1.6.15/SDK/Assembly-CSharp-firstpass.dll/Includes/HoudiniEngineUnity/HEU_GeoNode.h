#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUGeoNode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_GeoNode"));
	}

	template <typename T = uintptr_t> T& _geoInfo() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _geoName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _parts() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _containerObjectNode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _inputNode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _geoCurve() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_GeoID() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA50B0))(this);
	}
	template <typename T = Il2CppString*> T get_GeoName() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA50B8))(this);
	}
	template <typename T = uintptr_t> T get_GeoType() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA50C0))(this);
	}
	template <typename T = bool> T get_Editable() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA50C8))(this);
	}
	template <typename T = bool> T get_Displayable() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA50D0))(this);
	}
	template <typename T = bool> T IsVisible() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA50D8))(this);
	}
	template <typename T = bool> T IsIntermediateOrEditable() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA5104))(this);
	}
	template <typename T = bool> T IsGeoInputType() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA5134))(this);
	}
	template <typename T = bool> T IsGeoCurveType() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA515C))(this);
	}
	template <typename T = uintptr_t> T get_ParentAsset() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA5170))(this);
	}
	template <typename T = void> T DestroyAllData() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA5254))(this);
	}
	template <typename T = void> T RemoveAndDestroyPart(uintptr_t part) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BA58E4))(this, part);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA4F1C))(this);
	}
	template <typename T = void> T Initialize(uintptr_t session, uintptr_t geoInfo, uintptr_t containerObjectNode) {
		return ((T (*)(HEUGeoNode*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BA59DC))(this, session, geoInfo, containerObjectNode);
	}
	template <typename T = bool> T DoesThisRequirePotentialCook() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BA5D24))(this);
	}
	template <typename T = void> T UpdateGeo(uintptr_t session) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BA5E44))(this, session);
	}
	template <typename T = void> T ProcessUnityScriptAttribute(uintptr_t session) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BA765C))(this, session);
	}
	template <typename T = void> T ProcessPart(uintptr_t session, int32_t partID, uintptr_t partInfo, uintptr_t partData) {
		return ((T (*)(HEUGeoNode*, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BA69E4))(this, session, partID, partInfo, partData);
	}
	template <typename T = void> T SetupGameObjectAndTransform(uintptr_t partData, uintptr_t parentAsset) {
		return ((T (*)(HEUGeoNode*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BA7C60))(this, partData, parentAsset);
	}
	template <typename T = void> T GetPartsByOutputType(Il2CppList<uintptr_t>* meshParts, Il2CppList<uintptr_t>* volumeParts) {
		return ((T (*)(HEUGeoNode*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BA8920))(this, meshParts, volumeParts);
	}
	template <typename T = void> T GeneratePartInstances(uintptr_t session) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BA8AB8))(this, session);
	}
	template <typename T = void> T ProcessGeoCurve(uintptr_t session) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BA66C8))(this, session);
	}
	template <typename T = void> T SetupGeoCurveGameObjectAndTransform(uintptr_t curve) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BAA1C0))(this, curve);
	}
	template <typename T = void> T ClearObjectInstances() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BAA494))(this);
	}
	template <typename T = void> T SetGeoInfo(uintptr_t geoInfo) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BAA590))(this, geoInfo);
	}
	template <typename T = Il2CppString*> T GeneratePartFullName(Il2CppString* partName) {
		return ((T (*)(HEUGeoNode*, Il2CppString*))(Il2CppBase() + 0x2BA81A8))(this, partName);
	}
	template <typename T = Il2CppString*> T GenerateGeoCurveName() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BAA148))(this);
	}
	template <typename T = bool> T HasGeoNodeChanged(uintptr_t session) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BAA5D0))(this, session);
	}
	template <typename T = void> T ApplyHAPITransform(uintptr_t hapiTransform) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BAA728))(this, hapiTransform);
	}
	template <typename T = void> T GetDebugInfo(uintptr_t sb) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BAAA1C))(this, sb);
	}
	template <typename T = bool> T IsUsingMaterial(uintptr_t materialData) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BAB210))(this, materialData);
	}
	template <typename T = void> T GetClonableParts(Il2CppList<uintptr_t>* clonableParts) {
		return ((T (*)(HEUGeoNode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BAB41C))(this, clonableParts);
	}
	template <typename T = void> T GetOutputGameObjects(Il2CppList<uintptr_t>* outputObjects) {
		return ((T (*)(HEUGeoNode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BAB6C0))(this, outputObjects);
	}
	template <typename T = void> T GetOutput(Il2CppList<uintptr_t>* outputs) {
		return ((T (*)(HEUGeoNode*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x2BAB96C))(this, outputs);
	}
	template <typename T = uintptr_t> T GetHDAPartWithGameObject(uintptr_t outputGameObject) {
		return ((T (*)(HEUGeoNode*, uintptr_t))(Il2CppBase() + 0x2BABBB8))(this, outputGameObject);
	}
	template <typename T = uintptr_t> T GetPartFromPartID(int32_t partID) {
		return ((T (*)(HEUGeoNode*, int32_t))(Il2CppBase() + 0x2BABEA0))(this, partID);
	}
	template <typename T = void> T GetCurves(Il2CppList<uintptr_t>* curves, bool bEditableOnly) {
		return ((T (*)(HEUGeoNode*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x2BABFDC))(this, curves, bEditableOnly);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetParts() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BAC3AC))(this);
	}
	template <typename T = void> T CalculateVisiblity(bool bParentVisibility) {
		return ((T (*)(HEUGeoNode*, bool))(Il2CppBase() + 0x2BAC3B4))(this, bParentVisibility);
	}
	template <typename T = void> T HideAllGeometry() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BAC598))(this);
	}
	template <typename T = void> T CalculateColliderState() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BAC8D0))(this);
	}
	template <typename T = void> T DisableAllColliders() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BACCF0))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(HEUGeoNode*))(Il2CppBase() + 0x2BACE1C))(this);
	}

};

}
