#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUSessionManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_SessionManager"));
	}

	template <typename T = uintptr_t> static T& _defaultSession() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int64_t, uintptr_t>*> static T& _sessionMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _createSessionFromTypeDelegate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T CreateSessionObject() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEDEA0))(0);
	}
	template <typename T = uintptr_t> static T CreateSessionFromType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BEDF2C))(0, type);
	}
	template <typename T = uintptr_t> static T GetDefaultSession() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEDFB8))(0);
	}
	template <typename T = void> static T RegisterSession(int64_t sessionID, uintptr_t session) {
		return ((T (*)(void *, int64_t, uintptr_t))(Il2CppBase() + 0x2BEE204))(0, sessionID, session);
	}
	template <typename T = void> static T UnregisterSession(int64_t sessionID) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x2BEE420))(0, sessionID);
	}
	template <typename T = uintptr_t> static T GetSessionWithID(int64_t sessionID) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x2BCD20C))(0, sessionID);
	}
	template <typename T = void> static T SaveAllSessionData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEE30C))(0);
	}
	template <typename T = void> static T LoadAllSessionData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEC888))(0);
	}
	template <typename T = uintptr_t> static T GetOrCreateDefaultSession(bool bNotifyUserError) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BB0AF8))(0, bNotifyUserError);
	}
	template <typename T = bool> static T CreateInProcessSession() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEE6F8))(0);
	}
	template <typename T = bool> static T CreateThriftSocketSession(Il2CppString* hostName, int32_t serverPort, bool autoClose, float timeout, bool bLogError) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool, float, bool))(Il2CppBase() + 0x2BEE954))(0, hostName, serverPort, autoClose, timeout, bLogError);
	}
	template <typename T = bool> static T CreateThriftPipeSession(Il2CppString* pipeName, bool autoClose, float timeout, bool bLogError) {
		return ((T (*)(void *, Il2CppString*, bool, float, bool))(Il2CppBase() + 0x2BEE524))(0, pipeName, autoClose, timeout, bLogError);
	}
	template <typename T = bool> static T CreateCustomSession() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEEA74))(0);
	}
	template <typename T = bool> static T ConnectThriftSocketSession(Il2CppString* hostName, int32_t serverPort, bool autoClose, float timeout) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool, float))(Il2CppBase() + 0x2BEEB60))(0, hostName, serverPort, autoClose, timeout);
	}
	template <typename T = bool> static T ConnectThriftPipeSession(Il2CppString* pipeName, bool autoClose, float timeout) {
		return ((T (*)(void *, Il2CppString*, bool, float))(Il2CppBase() + 0x2BEEC78))(0, pipeName, autoClose, timeout);
	}
	template <typename T = bool> static T CloseDefaultSession() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEED8C))(0);
	}
	template <typename T = void> static T CloseAllSessions() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEEF04))(0);
	}
	template <typename T = void> static T CheckAndCloseExistingSession() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEE7E4))(0);
	}
	template <typename T = uintptr_t> static T GetSessionData() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEF2EC))(0);
	}
	template <typename T = Il2CppString*> static T GetSessionInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEF394))(0);
	}
	template <typename T = bool> static T LoadStoredDefaultSession() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEE0DC))(0);
	}
	template <typename T = bool> static T RestartSession() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEF464))(0);
	}
	template <typename T = bool> static T ValidatePluginSession(uintptr_t session) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BEF6AC))(0, session);
	}
	template <typename T = Il2CppString*> static T GetLastSessionError() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEE63C))(0);
	}
	template <typename T = bool> static T CheckVersionMatch() {
		return ((T (*)(void *))(Il2CppBase() + 0x2BEF77C))(0);
	}
	template <typename T = bool> static T LoadSessionFromHIP(bool bCookNodes, uintptr_t session) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x2BEF83C))(0, bCookNodes, session);
	}
	template <typename T = bool> static T SaveSessionToHIP(bool bLockNodes, uintptr_t session) {
		return ((T (*)(void *, bool, uintptr_t))(Il2CppBase() + 0x2BEF988))(0, bLockNodes, session);
	}
	template <typename T = bool> static T OpenSessionInHoudini(uintptr_t session) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x2BEFAD4))(0, session);
	}
	template <typename T = uintptr_t> static T GetCurrentLicense(bool bLogError) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x2BF00E8))(0, bLogError);
	}
	template <typename T = Il2CppString*> static T GetString(int32_t stringHandle, uintptr_t session) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x2BA5AD8))(0, stringHandle, session);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetStringValuesFromStringIndices(Il2CppArray<uintptr_t>* strIndices) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BE5C24))(0, strIndices);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetGroupNames(int32_t nodeID, uintptr_t groupType) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x2BF01D4))(0, nodeID, groupType);
	}
	template <typename T = bool> static T GetGroupMembership(uintptr_t session, int32_t nodeID, int32_t partID, uintptr_t groupType, Il2CppString* groupName, Il2CppArray<uintptr_t>* membership) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2BF04A4))(0, session, nodeID, partID, groupType, groupName, membership);
	}
	template <typename T = Il2CppString*> static T GetNodeName(int32_t nodeID, uintptr_t session) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x2BF0680))(0, nodeID, session);
	}
	template <typename T = bool> static T GetNodeInputName(int32_t nodeID, int32_t inputIndex, uintptr_t* inputName) {
		return ((T (*)(void *, int32_t, int32_t, uintptr_t*))(Il2CppBase() + 0x2BF0878))(0, nodeID, inputIndex, inputName);
	}
	template <typename T = bool> static T GetComposedChildNodeList(uintptr_t session, int32_t parentNodeID, int32_t nodeTypeFilter, int32_t nodeFlagFilter, bool bRecursive, Il2CppArray<uintptr_t>** childNodeIDs) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t, bool, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x2BDEBA8))(0, session, parentNodeID, nodeTypeFilter, nodeFlagFilter, bRecursive, childNodeIDs);
	}
	template <typename T = bool> static T GetComposedObjectListMemorySafe(uintptr_t session, int32_t nodeID, Il2CppArray<uintptr_t>** objectInfos, int32_t start, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BF0A08))(0, session, nodeID, objectInfos, start, length);
	}
	template <typename T = bool> static T GetComposedObjectTransformsMemorySafe(uintptr_t session, int32_t nodeID, uintptr_t rstOrder, Il2CppArray<uintptr_t>** transforms, int32_t start, int32_t length) {
		return ((T (*)(void *, uintptr_t, int32_t, uintptr_t, Il2CppArray<uintptr_t>**, int32_t, int32_t))(Il2CppBase() + 0x2BC1874))(0, session, nodeID, rstOrder, transforms, start, length);
	}
	template <typename T = Il2CppString*> static T GetUniqueMaterialShopName(int32_t assetID, int32_t materialID) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x2BC901C))(0, assetID, materialID);
	}

};

}
