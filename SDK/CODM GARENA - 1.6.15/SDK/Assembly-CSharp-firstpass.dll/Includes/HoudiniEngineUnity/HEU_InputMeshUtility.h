#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUInputMeshUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_InputMeshUtility"));
	}


	template <typename T = Il2CppList<uintptr_t>*> static T GenerateMeshDatasFromInputObject(uintptr_t inputObject, uintptr_t* bHasLODGroup) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2BD3E3C))(0, inputObject, bHasLODGroup);
	}
	template <typename T = uintptr_t> static T CreateSingleMeshData(uintptr_t meshGameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BD40FC))(0, meshGameObject);
	}
	template <typename T = bool> static T UploadInputMeshData(uintptr_t session, int32_t inputNodeID, Il2CppList<uintptr_t>* uploadMeshes, bool bHasLODGroup) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x2BD43D0))(0, session, inputNodeID, uploadMeshes, bHasLODGroup);
	}
	template <typename T = bool> static T CreateInputNodeWithGeoData(uintptr_t session, int32_t assetID, uintptr_t inputObject, uintptr_t* inputNodeID) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2BD6F94))(0, session, assetID, inputObject, inputNodeID);
	}
	template <typename T = bool> static T CreateInputNodeWithMultiObjects(uintptr_t session, int32_t assetID, uintptr_t connectedAssetID, uintptr_t inputObjects, uintptr_t inputObjectsConnectedAssetIDs, bool bKeepWorldTransform) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BD7208))(0, session, assetID, connectedAssetID, inputObjects, inputObjectsConnectedAssetIDs, bKeepWorldTransform);
	}
	template <typename T = bool> static T UploadInputObjectTransform(uintptr_t session, uintptr_t inputObject, int32_t connectedAssetID, bool bKeepWorldTransform) {
		return ((T (*)(void *, uintptr_t, uintptr_t, int32_t, bool))(Il2CppBase() + 0x2BD7ABC))(0, session, inputObject, connectedAssetID, bKeepWorldTransform);
	}
	template <typename T = bool> static T SetMeshPointAttribute(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* attrName, int32_t tupleSize, Il2CppArray<uintptr_t>* data, uintptr_t partInfo, bool bConvertToHoudiniCoordinateSystem) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x2BD637C))(0, session, geoID, partID, attrName, tupleSize, data, partInfo, bConvertToHoudiniCoordinateSystem);
	}
	template <typename T = bool> static T SetMeshVertexAttribute(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* attrName, int32_t tupleSize, Il2CppArray<uintptr_t>* data, Il2CppArray<uintptr_t>* indices, uintptr_t partInfo, bool bConvertToHoudiniCoordinateSystem) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x2BD66EC))(0, session, geoID, partID, attrName, tupleSize, data, indices, partInfo, bConvertToHoudiniCoordinateSystem);
	}
	template <typename T = bool> static T SetMeshVertexFloatAttribute(uintptr_t session, int32_t geoID, int32_t partID, Il2CppString* attrName, int32_t tupleSize, Il2CppArray<uintptr_t>* data, Il2CppArray<uintptr_t>* indices, uintptr_t partInfo) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppString*, int32_t, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2BD6ABC))(0, session, geoID, partID, attrName, tupleSize, data, indices, partInfo);
	}
	template <typename T = bool> static T UploadMeshIntoHoudiniNode(uintptr_t session, int32_t assetNodeID, int32_t objectID, int32_t geoID, uintptr_t mesh) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BD7F68))(0, session, assetNodeID, objectID, geoID, mesh);
	}

};

}
