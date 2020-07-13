#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUAttributesStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_AttributesStore"));
	}

	template <typename T = int32_t> T& _geoID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _partID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _geoName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _attributeDatas() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _hasColorAttribute() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _localMaterial() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _outputTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _positionAttributeValues() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _vertexIndices() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _outputGameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _outputMesh() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _outputMaterials() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _outputCollider() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _outputColliderMesh() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _outputMeshCollider() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _localMeshCollider() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _outputMeshRendererInitiallyEnabled() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& _outputMeshColliderInitiallyEnabled() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& f__mg$cache3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& f__mg$cache4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& f__mg$cache6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& f__mg$cache7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& f__mg$cache8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = int32_t> T get_GeoID() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C6554C))(this);
	}
	template <typename T = int32_t> T get_PartID() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C65554))(this);
	}
	template <typename T = Il2CppString*> T get_GeoName() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C6555C))(this);
	}
	template <typename T = bool> T HasColorAttribute() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C65564))(this);
	}
	template <typename T = uintptr_t> T get_OutputTransform() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C6556C))(this);
	}
	template <typename T = uintptr_t> T get_OutputMesh() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C65574))(this);
	}
	template <typename T = void> T DestroyAllData(uintptr_t asset) {
		return ((T (*)(HEUAttributesStore*, uintptr_t))(Il2CppBase() + 0x4C6557C))(this, asset);
	}
	template <typename T = void> T SyncAllAttributesFrom(uintptr_t session, uintptr_t asset, int32_t geoID, uintptr_t partInfo, uintptr_t outputGameObject) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C656A0))(this, session, asset, geoID, partInfo, outputGameObject);
	}
	template <typename T = void> T SetupMeshAndMaterials(uintptr_t asset, uintptr_t partType, uintptr_t outputGameObject) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C66BF8))(this, asset, partType, outputGameObject);
	}
	template <typename T = bool> T HasDirtyAttributes() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C66E9C))(this);
	}
	template <typename T = void> T SyncDirtyAttributesToHoudini(uintptr_t session) {
		return ((T (*)(HEUAttributesStore*, uintptr_t))(Il2CppBase() + 0x4C670C0))(this, session);
	}
	template <typename T = void> T PopulateAttributeData(uintptr_t session, int32_t geoID, int32_t partID, uintptr_t attributeData, uintptr_t attributeInfo) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C662F0))(this, session, geoID, partID, attributeData, attributeInfo);
	}
	template <typename T = void> T GetAttributesList(uintptr_t session, int32_t geoID, int32_t partID, Il2CppList<uintptr_t>* attributesList, uintptr_t ownerType, int32_t attributeCount) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, int32_t, int32_t, Il2CppList<uintptr_t>*, uintptr_t, int32_t))(Il2CppBase() + 0x4C678D4))(this, session, geoID, partID, attributesList, ownerType, attributeCount);
	}
	template <typename T = void> T UpdateAttribute(uintptr_t session, int32_t geoID, int32_t partID, uintptr_t attributeData) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x4C67B94))(this, session, geoID, partID, attributeData);
	}
	template <typename T = void> T UpdateAttributeList(uintptr_t session, int32_t geoID, int32_t partID, Il2CppList<uintptr_t>* attributeDataList) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, int32_t, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x4C6822C))(this, session, geoID, partID, attributeDataList);
	}
	template <typename T = void> T RefreshUpstreamInputs(uintptr_t session) {
		return ((T (*)(HEUAttributesStore*, uintptr_t))(Il2CppBase() + 0x4C683B8))(this, session);
	}
	template <typename T = bool> T UploadAttributeViaMeshInput(uintptr_t session, int32_t geoID, int32_t partID) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x4C671AC))(this, session, geoID, partID);
	}
	template <typename T = void> static T SetAttributeDataSyncd(uintptr_t attributeData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C678B0))(0, attributeData);
	}
	template <typename T = void> static T SetAttributeDataDirty(uintptr_t attributeData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4C684C4))(0, attributeData);
	}
	template <typename T = uintptr_t> T CreateAttribute(Il2CppString* attributeName, uintptr_t attributeInfo) {
		return ((T (*)(HEUAttributesStore*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4C661F8))(this, attributeName, attributeInfo);
	}
	template <typename T = uintptr_t> T GetAttributeData(Il2CppString* name) {
		return ((T (*)(HEUAttributesStore*, Il2CppString*))(Il2CppBase() + 0x4C66004))(this, name);
	}
	template <typename T = uintptr_t> T GetAttributeData_1(int32_t index) {
		return ((T (*)(HEUAttributesStore*, int32_t))(Il2CppBase() + 0x4C684E8))(this, index);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetAttributeNames() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C685D0))(this);
	}
	template <typename T = void> T EnablePaintCollider() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C687D4))(this);
	}
	template <typename T = void> T DisablePaintCollider() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C68A24))(this);
	}
	template <typename T = void> T ShowPaintMesh() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C68BF0))(this);
	}
	template <typename T = void> T HidePaintMesh() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C68DC8))(this);
	}
	template <typename T = bool> T HasMeshForPainting() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C68F34))(this);
	}
	template <typename T = uintptr_t> T GetPaintMeshCollider() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C68FE4))(this);
	}
	template <typename T = void> T PaintAttribute(uintptr_t attributeData, uintptr_t sourceTools, int32_t attributeIndex, float paintFactor, uintptr_t setAttrFunc) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, uintptr_t, int32_t, float, uintptr_t))(Il2CppBase() + 0x4C690A4))(this, attributeData, sourceTools, attributeIndex, paintFactor, setAttrFunc);
	}
	template <typename T = void> static T SetAttributeEditValueInt(uintptr_t attributeData, int32_t startIndex, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C69224))(0, attributeData, startIndex, values);
	}
	template <typename T = void> static T SetAttributeEditValueFloat(uintptr_t attributeData, int32_t startIndex, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C692DC))(0, attributeData, startIndex, values);
	}
	template <typename T = void> static T SetAttributeEditValueString(uintptr_t attributeData, int32_t startIndex, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4C693A4))(0, attributeData, startIndex, values);
	}
	template <typename T = void> static T ReplaceAttributeValueInt(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C69484))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T AddAttributeValueInt(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C69674))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T SubtractAttributeValueInt(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C6982C))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T MultiplyAttributeValueInt(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C699E4))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T ReplaceAttributeValueFloat(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C69C24))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T AddAttributeValueFloat(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C69D58))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T SubtractAttributeValueFloat(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C69E64))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T MultiplyAttributeValueFloat(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C69F70))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> static T SetAttributeValueString(uintptr_t attributeData, int32_t targetIndex, uintptr_t sourceTools, int32_t sourceIndex, float factor) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, int32_t, float))(Il2CppBase() + 0x4C6A184))(0, attributeData, targetIndex, sourceTools, sourceIndex, factor);
	}
	template <typename T = void> T FillAttribute(uintptr_t attributeData, uintptr_t sourceTools) {
		return ((T (*)(HEUAttributesStore*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6A28C))(this, attributeData, sourceTools);
	}
	template <typename T = bool> T AreAttributesDirty() {
		return ((T (*)(HEUAttributesStore*))(Il2CppBase() + 0x4C6A8E8))(this);
	}
	template <typename T = void> T GetPositionAttributeValues(Il2CppArray<uintptr_t>** positionArray) {
		return ((T (*)(HEUAttributesStore*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4C6AAB8))(this, positionArray);
	}
	template <typename T = void> T GetVertexIndices(Il2CppArray<uintptr_t>** indices) {
		return ((T (*)(HEUAttributesStore*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x4C6AAC4))(this, indices);
	}
	template <typename T = uintptr_t> static T GetAttributeSetValueFunction(uintptr_t attrType, uintptr_t paintMergeMode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4C6A348))(0, attrType, paintMergeMode);
	}
	template <typename T = void> T CopyAttributeValuesTo(uintptr_t destAttrStore) {
		return ((T (*)(HEUAttributesStore*, uintptr_t))(Il2CppBase() + 0x4C6AAE4))(this, destAttrStore);
	}

};

}
