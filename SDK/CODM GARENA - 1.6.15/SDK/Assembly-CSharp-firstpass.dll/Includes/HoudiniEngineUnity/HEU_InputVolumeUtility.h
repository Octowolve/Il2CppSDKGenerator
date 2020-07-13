#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUInputVolumeUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_InputVolumeUtility"));
	}


	template <typename T = bool> static T IsHoudiniNodeValid(uintptr_t session, int32_t nodeID) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x2BDADA0))(0, session, nodeID);
	}
	template <typename T = bool> static T CreateVolumeInputNode(uintptr_t session, uintptr_t volumeNodeId, Il2CppString* nodeName, int32_t parentNodeId) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2BDAEE8))(0, session, volumeNodeId, nodeName, parentNodeId);
	}
	template <typename T = bool> static T HapiCreateInputNodeForTerrain(uintptr_t session, uintptr_t HostAssetId, uintptr_t terrain, uintptr_t ConnectedAssetId, uintptr_t OutCreatedNodeIds, uintptr_t bExportOnlySelected, uintptr_t bExportAsHeighfield) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BDAFF8))(0, session, HostAssetId, terrain, ConnectedAssetId, OutCreatedNodeIds, bExportOnlySelected, bExportAsHeighfield);
	}
	template <typename T = bool> static T CreateHeightfieldInputNode(uintptr_t session, uintptr_t DisplayNodeId, uintptr_t MergeNodeId, Il2CppString* NodeName) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BDB2F8))(0, session, DisplayNodeId, MergeNodeId, NodeName);
	}
	template <typename T = bool> static T CommitVolumeInputNode(uintptr_t session, int32_t nodeToCommit, int32_t nodeToConnectTo, uintptr_t InputToConnect) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BDBC1C))(0, session, nodeToCommit, nodeToConnectTo, InputToConnect);
	}
	template <typename T = bool> static T SetHeighfieldData(uintptr_t session, int32_t VolumeNodeId, int32_t PartId, Il2CppArray<uintptr_t>* FloatValues, uintptr_t VolumeInfo, Il2CppString* HeightfieldName, int32_t TileIndex) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2BDBDB4))(0, session, VolumeNodeId, PartId, FloatValues, VolumeInfo, HeightfieldName, TileIndex);
	}
	template <typename T = bool> static T GetTerrainHeightData(uintptr_t terrainData, int32_t minX, int32_t minY, int32_t maxX, int32_t maxY, Il2CppArray<uintptr_t>* HeightData, uintptr_t XSize, uintptr_t YSize) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t, int32_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BDC078))(0, terrainData, minX, minY, maxX, maxY, HeightData, XSize, YSize);
	}
	template <typename T = bool> static T GetTerrainLayerDate(uintptr_t terrainData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BDC300))(0, terrainData);
	}
	template <typename T = bool> static T ConvertTerrainDataToHeightfieldData(uintptr_t session, uintptr_t XSize, uintptr_t YSize, uintptr_t terrainTrans, uintptr_t HeightfieldVolumeInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BDC308))(0, session, XSize, YSize, terrainTrans, HeightfieldVolumeInfo);
	}
	template <typename T = bool> static T CreateInputNodeWithTerrain(uintptr_t session, uintptr_t connectedAssetID, uintptr_t inputTerrainConnectAssetID, uintptr_t inputObject) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BDA744))(0, session, connectedAssetID, inputTerrainConnectAssetID, inputObject);
	}
	template <typename T = bool> static T CreateHeightfiledFromTerrain(uintptr_t session, uintptr_t terrain, uintptr_t InputMergeNodeId, uintptr_t ComponentIndex, uintptr_t MergeInputIndex) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BDB8C0))(0, session, terrain, InputMergeNodeId, ComponentIndex, MergeInputIndex);
	}

};

}
