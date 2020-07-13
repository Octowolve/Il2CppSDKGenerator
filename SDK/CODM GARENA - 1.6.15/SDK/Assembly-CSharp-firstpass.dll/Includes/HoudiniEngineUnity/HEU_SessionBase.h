#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUSessionBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_SessionBase"));
	}

	template <typename T = uintptr_t> T& targetAsset() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _sessionData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& UserNotifiedSessionInvalid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ConnectedState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _sessionErrorMsg() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_UserNotifiedSessionInvalid() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED104))(this);
	}
	template <typename T = void> T set_UserNotifiedSessionInvalid(bool value) {
		return ((T (*)(HEUSessionBase*, bool))(Il2CppBase() + 0x2BED10C))(this, value);
	}
	template <typename T = uintptr_t> T get_ConnectedState() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED114))(this);
	}
	template <typename T = void> T set_ConnectedState(uintptr_t value) {
		return ((T (*)(HEUSessionBase*, uintptr_t))(Il2CppBase() + 0x2BED11C))(this, value);
	}
	template <typename T = Il2CppString*> T GetSessionErrorMsg() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED124))(this);
	}
	template <typename T = void> T SetSessionErrorMsg(Il2CppString* msg, bool bLogError) {
		return ((T (*)(HEUSessionBase*, Il2CppString*, bool))(Il2CppBase() + 0x2BED12C))(this, msg, bLogError);
	}
	template <typename T = bool> T CreateSessionData(bool bOverwriteExisting, bool bIsDefaultSession) {
		return ((T (*)(HEUSessionBase*, bool, bool))(Il2CppBase() + 0x2BED1E8))(this, bOverwriteExisting, bIsDefaultSession);
	}
	template <typename T = bool> T CreateInProcessSession(bool bIsDefaultSession) {
		return ((T (*)(HEUSessionBase*, bool))(Il2CppBase() + 0x2BED1F0))(this, bIsDefaultSession);
	}
	template <typename T = bool> T CreateThriftSocketSession(bool bIsDefaultSession, Il2CppString* hostName, int32_t serverPort, bool autoClose, float timeout, bool bLogError) {
		return ((T (*)(HEUSessionBase*, bool, Il2CppString*, int32_t, bool, float, bool))(Il2CppBase() + 0x2BED1F8))(this, bIsDefaultSession, hostName, serverPort, autoClose, timeout, bLogError);
	}
	template <typename T = bool> T CreateThriftPipeSession(bool bIsDefaultSession, Il2CppString* pipeName, bool autoClose, float timeout, bool bLogError) {
		return ((T (*)(HEUSessionBase*, bool, Il2CppString*, bool, float, bool))(Il2CppBase() + 0x2BED200))(this, bIsDefaultSession, pipeName, autoClose, timeout, bLogError);
	}
	template <typename T = bool> T CreateCustomSession(bool bIsDefaultSession) {
		return ((T (*)(HEUSessionBase*, bool))(Il2CppBase() + 0x2BED208))(this, bIsDefaultSession);
	}
	template <typename T = bool> T ConnectThriftSocketSession(bool bIsDefaultSession, Il2CppString* hostName, int32_t serverPort, bool autoClose, float timeout) {
		return ((T (*)(HEUSessionBase*, bool, Il2CppString*, int32_t, bool, float))(Il2CppBase() + 0x2BED210))(this, bIsDefaultSession, hostName, serverPort, autoClose, timeout);
	}
	template <typename T = bool> T ConnectThriftPipeSession(bool bIsDefaultSession, Il2CppString* pipeName, bool autoClose, float timeout) {
		return ((T (*)(HEUSessionBase*, bool, Il2CppString*, bool, float))(Il2CppBase() + 0x2BED218))(this, bIsDefaultSession, pipeName, autoClose, timeout);
	}
	template <typename T = bool> T CloseSession() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED220))(this);
	}
	template <typename T = bool> T CheckAndCloseExistingSession() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED228))(this);
	}
	template <typename T = void> T ClearSessionInfo() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED230))(this);
	}
	template <typename T = void> T SetSessionData(uintptr_t sessionData) {
		return ((T (*)(HEUSessionBase*, uintptr_t))(Il2CppBase() + 0x2BED290))(this, sessionData);
	}
	template <typename T = uintptr_t> T GetSessionData() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BB31F8))(this);
	}
	template <typename T = Il2CppString*> T GetSessionInfo() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED298))(this);
	}
	template <typename T = bool> T IsSessionValid() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED310))(this);
	}
	template <typename T = bool> T RestartSession() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED318))(this);
	}
	template <typename T = Il2CppString*> T GetLastSessionError() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED320))(this);
	}
	template <typename T = bool> T CheckVersionMatch() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED328))(this);
	}
	template <typename T = bool> T HandleStatusResult(uintptr_t result, Il2CppString* prependMsg, bool bThrowError, bool bLogError) {
		return ((T (*)(HEUSessionBase*, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x2BED330))(this, result, prependMsg, bThrowError, bLogError);
	}
	template <typename T = void> T SetServerEnvString(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(HEUSessionBase*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2BED338))(this, name, value);
	}
	template <typename T = void> T SetServerEnvInt(Il2CppString* name, int32_t value) {
		return ((T (*)(HEUSessionBase*, Il2CppString*, int32_t))(Il2CppBase() + 0x2BED33C))(this, name, value);
	}
	template <typename T = bool> T GetServerEnvString(Il2CppString* name, uintptr_t* value) {
		return ((T (*)(HEUSessionBase*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BED340))(this, name, value);
	}
	template <typename T = bool> T GetStatus(uintptr_t statusType, uintptr_t* statusCode) {
		return ((T (*)(HEUSessionBase*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2BED350))(this, statusType, statusCode);
	}
	template <typename T = Il2CppString*> T GetStatusString(uintptr_t statusType, uintptr_t verbosity) {
		return ((T (*)(HEUSessionBase*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BED360))(this, statusType, verbosity);
	}
	template <typename T = int32_t> T GetCookingTotalCount() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED3D8))(this);
	}
	template <typename T = int32_t> T GetCookingCurrentCount() {
		return ((T (*)(HEUSessionBase*))(Il2CppBase() + 0x2BED3E0))(this);
	}
	template <typename T = int32_t> T GetEnvInt(uintptr_t intType) {
		return ((T (*)(HEUSessionBase*, uintptr_t))(Il2CppBase() + 0x2BED3E8))(this, intType);
	}
	template <typename T = int32_t> T GetSessionEnvInt(uintptr_t intType, bool bLogError) {
		return ((T (*)(HEUSessionBase*, uintptr_t, bool))(Il2CppBase() + 0x2BED3F0))(this, intType, bLogError);
	}
	template <typename T = bool> T GetString(int32_t stringHandle, uintptr_t stringBuilder, int32_t bufferLength) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t, int32_t))(Il2CppBase() + 0x2BED3F8))(this, stringHandle, stringBuilder, bufferLength);
	}
	template <typename T = int32_t> T GetStringBufferLength(int32_t stringHandle) {
		return ((T (*)(HEUSessionBase*, int32_t))(Il2CppBase() + 0x2BED400))(this, stringHandle);
	}
	template <typename T = int32_t> T CheckForSpecificErrors(int32_t nodeID, int32_t errorsToCheck) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t))(Il2CppBase() + 0x2BED408))(this, nodeID, errorsToCheck);
	}
	template <typename T = bool> T LoadAssetLibraryFromFile(Il2CppString* assetPath, bool bAllowOverwrite, uintptr_t* libraryID) {
		return ((T (*)(HEUSessionBase*, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x2BED410))(this, assetPath, bAllowOverwrite, libraryID);
	}
	template <typename T = bool> T CreateNode(int32_t parentNodeID, Il2CppString* operatorName, Il2CppString* nodeLabel, bool bCookOnCreation, uintptr_t* newNodeID) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, Il2CppString*, bool, uintptr_t*))(Il2CppBase() + 0x2BED420))(this, parentNodeID, operatorName, nodeLabel, bCookOnCreation, newNodeID);
	}
	template <typename T = void> T DeleteNode(int32_t nodeID) {
		return ((T (*)(HEUSessionBase*, int32_t))(Il2CppBase() + 0x2BED434))(this, nodeID);
	}
	template <typename T = bool> T CookNode(int32_t nodeID, bool bCookTemplatedGeos) {
		return ((T (*)(HEUSessionBase*, int32_t, bool))(Il2CppBase() + 0x2BED438))(this, nodeID, bCookTemplatedGeos);
	}
	template <typename T = bool> T RenameNode(int32_t nodeID, Il2CppString* newName) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*))(Il2CppBase() + 0x2BED440))(this, nodeID, newName);
	}
	template <typename T = bool> T ConnectNodeInput(int32_t nodeID, int32_t inputIndex, int32_t nodeIDToConnect) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BED448))(this, nodeID, inputIndex, nodeIDToConnect);
	}
	template <typename T = bool> T DisconnectNodeInput(int32_t nodeID, int32_t inputIndex, bool bLogError) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, bool))(Il2CppBase() + 0x2BED450))(this, nodeID, inputIndex, bLogError);
	}
	template <typename T = bool> T QueryNodeInput(int32_t nodeID, int32_t inputIndex, uintptr_t* connectedNodeID, bool bLogError) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t*, bool))(Il2CppBase() + 0x2BED458))(this, nodeID, inputIndex, connectedNodeID, bLogError);
	}
	template <typename T = bool> T GetNodeInputName(int32_t nodeID, int32_t inputIndex, uintptr_t* nodeNameIndex) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED468))(this, nodeID, inputIndex, nodeNameIndex);
	}
	template <typename T = bool> T GetAvailableAssetCount(int32_t libraryID, uintptr_t* assetCount) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED478))(this, libraryID, assetCount);
	}
	template <typename T = bool> T GetAvailableAssets(int32_t libraryID, Il2CppArray<uintptr_t>* assetNames, int32_t assetCount) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2BED488))(this, libraryID, assetNames, assetCount);
	}
	template <typename T = bool> T GetAssetInfo(int32_t nodeID, uintptr_t assetInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2BED490))(this, nodeID, assetInfo);
	}
	template <typename T = bool> T GetNodeInfo(int32_t nodeID, uintptr_t nodeInfo, bool bLogError) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2BED498))(this, nodeID, nodeInfo, bLogError);
	}
	template <typename T = bool> T GetNodePath(int32_t nodeID, int32_t relativeNodeID, uintptr_t* path) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED4A0))(this, nodeID, relativeNodeID, path);
	}
	template <typename T = bool> T IsNodeValid(int32_t nodeID, int32_t uniqueNodeID) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t))(Il2CppBase() + 0x2BED4B0))(this, nodeID, uniqueNodeID);
	}
	template <typename T = bool> T ComposeChildNodeList(int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive, uintptr_t count) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, int32_t, bool, uintptr_t))(Il2CppBase() + 0x2BED4B8))(this, parentNodeID, nodeTypeFilter, nodeFlagFilter, bRecursive, count);
	}
	template <typename T = bool> T GetComposedChildNodeList(int32_t parentNodeID, Il2CppArray<uintptr_t>* childNodeIDs, int32_t count) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2BED4C0))(this, parentNodeID, childNodeIDs, count);
	}
	template <typename T = bool> T LoadHIPFile(Il2CppString* fileName, bool bCookOnLoad) {
		return ((T (*)(HEUSessionBase*, Il2CppString*, bool))(Il2CppBase() + 0x2BED4C8))(this, fileName, bCookOnLoad);
	}
	template <typename T = bool> T SaveHIPFile(Il2CppString* fileName, bool bLockNodes) {
		return ((T (*)(HEUSessionBase*, Il2CppString*, bool))(Il2CppBase() + 0x2BED4D0))(this, fileName, bLockNodes);
	}
	template <typename T = bool> T GetObjectInfo(int32_t nodeID, uintptr_t objectInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2BED4D8))(this, nodeID, objectInfo);
	}
	template <typename T = bool> T GetObjectTransform(int32_t nodeID, int32_t relativeToNodeID, uintptr_t rstOrder, uintptr_t hapiTransform) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BED4E0))(this, nodeID, relativeToNodeID, rstOrder, hapiTransform);
	}
	template <typename T = bool> T SetObjectTransform(int32_t nodeID, uintptr_t hapiTransform) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2BED4E8))(this, nodeID, hapiTransform);
	}
	template <typename T = bool> T ComposeObjectList(int32_t nodeID, uintptr_t* objectCount) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED4F0))(this, nodeID, objectCount);
	}
	template <typename T = bool> T GetComposedObjectList(int32_t nodeID, Il2CppArray<uintptr_t>** objectInfos, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED500))(this, nodeID, objectInfos, start, length);
	}
	template <typename T = bool> T GetComposedObjectTransforms(int32_t nodeID, uintptr_t rstOrder, Il2CppArray<uintptr_t>** transforms, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED508))(this, nodeID, rstOrder, transforms, start, length);
	}
	template <typename T = bool> T GetDisplayGeoInfo(int32_t nodeID, uintptr_t geoInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2BED510))(this, nodeID, geoInfo);
	}
	template <typename T = bool> T GetGeoInfo(int32_t nodeID, uintptr_t geoInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2BED518))(this, nodeID, geoInfo);
	}
	template <typename T = bool> T GetPartInfo(int32_t nodeID, int32_t partID, uintptr_t partInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED520))(this, nodeID, partID, partInfo);
	}
	template <typename T = bool> T GetAttributeInfo(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t owner, uintptr_t attributeInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BED528))(this, nodeID, partID, name, owner, attributeInfo);
	}
	template <typename T = bool> T GetAttributeNames(int32_t nodeID, int32_t partID, uintptr_t owner, Il2CppArray<uintptr_t>* attributeNames, int32_t count) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2BED530))(this, nodeID, partID, owner, attributeNames, count);
	}
	template <typename T = bool> T GetAttributeStringData(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t attributeInfo, Il2CppArray<uintptr_t>** dataArray, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED538))(this, nodeID, partID, name, attributeInfo, dataArray, start, length);
	}
	template <typename T = bool> T GetAttributeFloatData(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t attributeInfo, Il2CppArray<uintptr_t>** data, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED540))(this, nodeID, partID, name, attributeInfo, data, start, length);
	}
	template <typename T = bool> T GetAttributeIntData(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t attributeInfo, Il2CppArray<uintptr_t>** data, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED548))(this, nodeID, partID, name, attributeInfo, data, start, length);
	}
	template <typename T = bool> T GetGroupNames(int32_t nodeID, uintptr_t groupType, Il2CppArray<uintptr_t>* names, int32_t count) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x2BED550))(this, nodeID, groupType, names, count);
	}
	template <typename T = bool> T GetGroupMembership(int32_t nodeID, int32_t partID, uintptr_t groupType, Il2CppString* groupName, uintptr_t membershipArrayAllEqual, Il2CppArray<uintptr_t>** membershipArray, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED558))(this, nodeID, partID, groupType, groupName, membershipArrayAllEqual, membershipArray, start, length);
	}
	template <typename T = bool> T GetInstancedPartIds(int32_t nodeID, int32_t partID, Il2CppArray<uintptr_t>** instancedPartsArray, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED560))(this, nodeID, partID, instancedPartsArray, start, length);
	}
	template <typename T = bool> T GetInstancerPartTransforms(int32_t nodeID, int32_t partID, uintptr_t rstOrder, Il2CppArray<uintptr_t>** transformsArray, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED568))(this, nodeID, partID, rstOrder, transformsArray, start, length);
	}
	template <typename T = bool> T GetInstanceTransforms(int32_t nodeID, uintptr_t rstOrder, Il2CppArray<uintptr_t>** transformsArray, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED570))(this, nodeID, rstOrder, transformsArray, start, length);
	}
	template <typename T = bool> T GetInstancedObjectIds(int32_t nodeID, Il2CppArray<uintptr_t>** instanced_node_id_array, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED578))(this, nodeID, instanced_node_id_array, start, length);
	}
	template <typename T = bool> T GetFaceCounts(int32_t nodeID, int32_t partID, Il2CppArray<uintptr_t>** faceCounts, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED580))(this, nodeID, partID, faceCounts, start, length);
	}
	template <typename T = bool> T GetVertexList(int32_t nodeID, int32_t partID, Il2CppArray<uintptr_t>** vertexList, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED588))(this, nodeID, partID, vertexList, start, length);
	}
	template <typename T = bool> T GetBoxInfo(int32_t nodeID, int32_t partID, uintptr_t boxInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED590))(this, nodeID, partID, boxInfo);
	}
	template <typename T = bool> T GetSphereInfo(int32_t nodeID, int32_t partID, uintptr_t sphereInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED598))(this, nodeID, partID, sphereInfo);
	}
	template <typename T = bool> T GetCurveInfo(int32_t nodeID, int32_t partID, uintptr_t curveInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED5A0))(this, nodeID, partID, curveInfo);
	}
	template <typename T = bool> T GetCurveCounts(int32_t nodeID, int32_t partID, Il2CppArray<uintptr_t>** counts, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED5A8))(this, nodeID, partID, counts, start, length);
	}
	template <typename T = bool> T SetPartInfo(int32_t nodeID, int32_t partID, uintptr_t partInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED5B0))(this, nodeID, partID, partInfo);
	}
	template <typename T = bool> T SetFaceCount(int32_t nodeID, int32_t partID, Il2CppArray<uintptr_t>* faceCounts, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED5B8))(this, nodeID, partID, faceCounts, start, length);
	}
	template <typename T = bool> T SetVertexList(int32_t nodeID, int32_t partID, Il2CppArray<uintptr_t>* vertexList, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED5C0))(this, nodeID, partID, vertexList, start, length);
	}
	template <typename T = bool> T SetAttributeIntData(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t attrInfo, Il2CppArray<uintptr_t>* data, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED5C8))(this, nodeID, partID, name, attrInfo, data, start, length);
	}
	template <typename T = bool> T SetAttributeFloatData(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t attrInfo, Il2CppArray<uintptr_t>* data, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED5D0))(this, nodeID, partID, name, attrInfo, data, start, length);
	}
	template <typename T = bool> T SetAttributeStringData(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t attrInfo, Il2CppArray<uintptr_t>* data, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED5D8))(this, nodeID, partID, name, attrInfo, data, start, length);
	}
	template <typename T = bool> T AddAttribute(int32_t nodeID, int32_t partID, Il2CppString* name, uintptr_t attrInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2BED5E0))(this, nodeID, partID, name, attrInfo);
	}
	template <typename T = bool> T AddGroup(int32_t nodeID, int32_t partID, uintptr_t groupType, Il2CppString* groupName) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2BED5E8))(this, nodeID, partID, groupType, groupName);
	}
	template <typename T = bool> T SetGroupMembership(int32_t nodeID, int32_t partID, uintptr_t groupType, Il2CppString* groupName, Il2CppArray<uintptr_t>** membershipArray, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED5F0))(this, nodeID, partID, groupType, groupName, membershipArray, start, length);
	}
	template <typename T = bool> T CommitGeo(int32_t nodeID) {
		return ((T (*)(HEUSessionBase*, int32_t))(Il2CppBase() + 0x2BED5F8))(this, nodeID);
	}
	template <typename T = bool> T RevertGeo(int32_t nodeID) {
		return ((T (*)(HEUSessionBase*, int32_t))(Il2CppBase() + 0x2BED600))(this, nodeID);
	}
	template <typename T = bool> T GetMaterialOnPart(int32_t nodeID, int32_t partID, uintptr_t materialInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED608))(this, nodeID, partID, materialInfo);
	}
	template <typename T = bool> T GetMaterialNodeIDsOnFaces(int32_t nodeID, int32_t partID, uintptr_t bSingleFaceMaterial, Il2CppArray<uintptr_t>** materialNodeIDs, int32_t faceCount) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>**, int32_t))(Il2CppBase() + 0x2BED610))(this, nodeID, partID, bSingleFaceMaterial, materialNodeIDs, faceCount);
	}
	template <typename T = bool> T GetMaterialInfo(int32_t materialNodeID, uintptr_t materialInfo, bool bLogError) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x2BED618))(this, materialNodeID, materialInfo, bLogError);
	}
	template <typename T = bool> T GetImageInfo(int32_t materialNodeID, uintptr_t imageInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2BED620))(this, materialNodeID, imageInfo);
	}
	template <typename T = bool> T SetImageInfo(int32_t materialNodeID, uintptr_t imageInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, uintptr_t))(Il2CppBase() + 0x2BED628))(this, materialNodeID, imageInfo);
	}
	template <typename T = bool> T RenderTextureToImage(int32_t materialNodeID, int32_t parmID, bool bLogError) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, bool))(Il2CppBase() + 0x2BED630))(this, materialNodeID, parmID, bLogError);
	}
	template <typename T = bool> T RenderCOPToImage(int32_t copNodeID) {
		return ((T (*)(HEUSessionBase*, int32_t))(Il2CppBase() + 0x2BED638))(this, copNodeID);
	}
	template <typename T = bool> T ExtractImageToMemory(int32_t nodeID, Il2CppString* fileFormat, Il2CppString* imagePlanes, Il2CppArray<uintptr_t>** buffer) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2BED640))(this, nodeID, fileFormat, imagePlanes, buffer);
	}
	template <typename T = bool> T GetImagePlanes(int32_t nodeID, Il2CppArray<uintptr_t>** imagePlanes, int32_t numImagePlanes) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t))(Il2CppBase() + 0x2BED6F0))(this, nodeID, imagePlanes, numImagePlanes);
	}
	template <typename T = bool> T ExtractImageToFile(int32_t nodeID, Il2CppString* fileFormat, Il2CppString* imagePlanes, Il2CppString* destinationFolderPath, uintptr_t* destinationFilePath) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BED780))(this, nodeID, fileFormat, imagePlanes, destinationFolderPath, destinationFilePath);
	}
	template <typename T = bool> T GetParams(int32_t nodeID, Il2CppArray<uintptr_t>** parmInfos, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED794))(this, nodeID, parmInfos, start, length);
	}
	template <typename T = bool> T GetParamsInfo(int32_t nodeID, int32_t paramID, uintptr_t* parmInfos) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED79C))(this, nodeID, paramID, parmInfos);
	}
	template <typename T = bool> T GetParamIntValues(int32_t nodeID, Il2CppArray<uintptr_t>** values, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED7B0))(this, nodeID, values, start, length);
	}
	template <typename T = bool> T GetParamIntValue(int32_t nodeID, Il2CppString* parmName, int32_t index, uintptr_t* value) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED7B8))(this, nodeID, parmName, index, value);
	}
	template <typename T = bool> T GetParamFloatValues(int32_t nodeID, Il2CppArray<uintptr_t>** values, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED7CC))(this, nodeID, values, start, length);
	}
	template <typename T = bool> T GetParamFloatValue(int32_t nodeID, Il2CppString* parmName, int32_t index, uintptr_t* value) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED7D4))(this, nodeID, parmName, index, value);
	}
	template <typename T = bool> T GetParamStringValues(int32_t nodeID, Il2CppArray<uintptr_t>** values, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED7E8))(this, nodeID, values, start, length);
	}
	template <typename T = bool> T GetParamStringValue(int32_t nodeID, Il2CppString* parmName, int32_t index, uintptr_t* value) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t, uintptr_t*))(Il2CppBase() + 0x2BED7F0))(this, nodeID, parmName, index, value);
	}
	template <typename T = bool> T GetParamNodeValue(int32_t nodeID, Il2CppString* paramName, uintptr_t* nodeValue) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BED804))(this, nodeID, paramName, nodeValue);
	}
	template <typename T = bool> T GetParamChoiceValues(int32_t nodeID, Il2CppArray<uintptr_t>** values, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED814))(this, nodeID, values, start, length);
	}
	template <typename T = bool> T SetParamIntValues(int32_t nodeID, Il2CppArray<uintptr_t>* values, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED81C))(this, nodeID, values, start, length);
	}
	template <typename T = bool> T SetParamIntValue(int32_t nodeID, Il2CppString* paramName, int32_t index, int32_t value) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x2BED824))(this, nodeID, paramName, index, value);
	}
	template <typename T = bool> T SetParamFloatValues(int32_t nodeID, Il2CppArray<uintptr_t>* values, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED82C))(this, nodeID, values, start, length);
	}
	template <typename T = bool> T SetParamFloatValue(int32_t nodeID, Il2CppString* paramName, int32_t index, float value) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t, float))(Il2CppBase() + 0x2BED834))(this, nodeID, paramName, index, value);
	}
	template <typename T = bool> T SetParamStringValue(int32_t nodeID, Il2CppString* strValue, int32_t parmID, int32_t index) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x2BED83C))(this, nodeID, strValue, parmID, index);
	}
	template <typename T = bool> T SetParamNodeValue(int32_t nodeID, Il2CppString* paramName, int32_t nodeValueID) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2BED844))(this, nodeID, paramName, nodeValueID);
	}
	template <typename T = bool> T InsertMultiparmInstance(int32_t nodeID, int32_t parmID, int32_t instancePosition) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BED84C))(this, nodeID, parmID, instancePosition);
	}
	template <typename T = bool> T RemoveMultiParmInstance(int32_t nodeID, int32_t parmID, int32_t instancePosition) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2BED854))(this, nodeID, parmID, instancePosition);
	}
	template <typename T = bool> T GetParmWithTag(int32_t nodeID, Il2CppString* tagName, uintptr_t parmID) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2BED85C))(this, nodeID, tagName, parmID);
	}
	template <typename T = bool> T RevertParmToDefault(int32_t nodeID, Il2CppString* parm_name, int32_t index) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x2BED864))(this, nodeID, parm_name, index);
	}
	template <typename T = bool> T RevertParmToDefaults(int32_t nodeID, Il2CppString* parm_name) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*))(Il2CppBase() + 0x2BED86C))(this, nodeID, parm_name);
	}
	template <typename T = bool> T GetParmIDFromName(int32_t nodeID, Il2CppString* parmName, uintptr_t* parmID) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BED874))(this, nodeID, parmName, parmID);
	}
	template <typename T = bool> T GetParmStringValue(int32_t nodeID, Il2CppString* parmName, int32_t index, bool evaluate, uintptr_t* value) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, int32_t, bool, uintptr_t*))(Il2CppBase() + 0x2BED884))(this, nodeID, parmName, index, evaluate, value);
	}
	template <typename T = bool> T CreateInputNode(uintptr_t* nodeID, Il2CppString* name) {
		return ((T (*)(HEUSessionBase*, uintptr_t*, Il2CppString*))(Il2CppBase() + 0x2BED898))(this, nodeID, name);
	}
	template <typename T = bool> T GetPreset(int32_t nodeID, Il2CppArray<uintptr_t>** presetData) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2BED8A8))(this, nodeID, presetData);
	}
	template <typename T = bool> T SetPreset(int32_t nodeID, Il2CppArray<uintptr_t>* presetData) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BED958))(this, nodeID, presetData);
	}
	template <typename T = bool> T GetVolumeInfo(int32_t nodeID, int32_t partID, uintptr_t volumeInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED960))(this, nodeID, partID, volumeInfo);
	}
	template <typename T = bool> T GetHeightFieldData(int32_t nodeID, int32_t partID, Il2CppArray<uintptr_t>* valuesArray, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED968))(this, nodeID, partID, valuesArray, start, length);
	}
	template <typename T = bool> T GetVolumeBounds(int32_t nodeID, int32_t partID, uintptr_t* x_min, uintptr_t* y_min, uintptr_t* z_min, uintptr_t* x_max, uintptr_t* y_max, uintptr_t* z_max, uintptr_t* x_center, uintptr_t* y_center, uintptr_t* z_center) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2BED970))(this, nodeID, partID, x_min, y_min, z_min, x_max, y_max, z_max, x_center, y_center, z_center);
	}
	template <typename T = bool> T SetVolumeInfo(int32_t volumnNodeID, int32_t partID, uintptr_t volumeInfo) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BED9C4))(this, volumnNodeID, partID, volumeInfo);
	}
	template <typename T = bool> T SetHeightFieldData(int32_t volumeNodeID, int32_t partID, Il2CppString* name, Il2CppArray<uintptr_t>* value_array, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x2BED9CC))(this, volumeNodeID, partID, name, value_array, start, length);
	}
	template <typename T = bool> T LoadGeoFromFile(int32_t nodeID, Il2CppString* file_name) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*))(Il2CppBase() + 0x2BED9D4))(this, nodeID, file_name);
	}
	template <typename T = bool> T GetGeoSize(int32_t nodeID, Il2CppString* format, uintptr_t* size) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x2BED9DC))(this, nodeID, format, size);
	}
	template <typename T = bool> T GetHandleInfo(int32_t nodeID, Il2CppArray<uintptr_t>** handleInfos, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED9EC))(this, nodeID, handleInfos, start, length);
	}
	template <typename T = bool> T GetHandleBindingInfo(int32_t nodeID, int32_t handleIndex, Il2CppArray<uintptr_t>** handleBindingInfos, int32_t start, int32_t length) {
		return ((T (*)(HEUSessionBase*, int32_t, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BED9F4))(this, nodeID, handleIndex, handleBindingInfos, start, length);
	}
	template <typename T = bool> T ConvertTransform(uintptr_t inTransform, uintptr_t RSTOrder, uintptr_t ROTOrder, uintptr_t* outTransform) {
		return ((T (*)(HEUSessionBase*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x2BED9FC))(this, inTransform, RSTOrder, ROTOrder, outTransform);
	}

};

}
